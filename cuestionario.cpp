#include "cuestionario.h"

Cuestionario::Cuestionario()
{

}

Cuestionario::Cuestionario(Tema *tema) : m_tema(tema)
{
    foreach (Apunte *a, m_tema->apuntes()){
        m_preguntas.append(new Pregunta(a));
        m_terminos.append(a->termino());
    }
}

Pregunta *Cuestionario::siguiente()
{
    // TODO: Lanzar preguntas al azar
    QList<Pregunta *> preguntasRespondidas;
    foreach (Pregunta *p, m_preguntas)
    {
        if(!p->respondida())
        {
            preguntasRespondidas.append(p);
        }
    }
    if(!preguntasRespondidas.isEmpty())
    {
        int indiceAleatorio = QRandomGenerator::global()->bounded(preguntasRespondidas.size());
        Pregunta *preguntaAleatoria = preguntasRespondidas[indiceAleatorio];
        m_mostradas++;
        return preguntaAleatoria;
    }
}
const QStringList &Cuestionario::terminos() const
{
    return m_terminos;
}

float Cuestionario::score() const
{
    return m_score;
}

const QList<Pregunta *> &Cuestionario::preguntas() const
{
    return m_preguntas;
}

const QString Cuestionario::nombreTema() const
{
    return m_tema->nombre();
}

int Cuestionario::totalPreguntas() const
{
    return m_preguntas.size();
}

bool Cuestionario::otrasPreguntas()
{
    return (m_mostradas < totalPreguntas());
}

int Cuestionario::mostradas() const
{
    return m_mostradas;
}

void Cuestionario::terminar()
{
    int correctas = 0;
    int respondidas = 0;
    foreach(Pregunta *p, m_preguntas){
        if(p->respondida()){
            respondidas++;
            if (p->correcta())
                correctas++;
        }
    }
    if (respondidas > 0)
        m_score = (float) correctas / respondidas * 100;
    else
        m_score = 0;
}
