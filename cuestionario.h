#ifndef CUESTIONARIO_H
#define CUESTIONARIO_H

#include <QString>
#include <QRandomGenerator>

#include <tema.h>
#include <pregunta.h>

class Cuestionario
{
public:
    Cuestionario();
    Cuestionario(Tema *tema);

    Pregunta *siguiente();
    void terminar();
    const QStringList &terminos() const;

    float score() const;
    int totalPreguntas() const;
    bool otrasPreguntas();
    int mostradas() const;


    const QList<Pregunta *> &preguntas() const;
    const QString nombreTema() const;

private:
    float m_score;
    Tema *m_tema;
    QList<Pregunta*> m_preguntas;
    QStringList m_terminos;
    int m_mostradas;
    QString m_asignaturas;
};

#endif // CUESTIONARIO_H
