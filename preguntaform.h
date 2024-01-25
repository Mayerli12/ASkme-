#ifndef PREGUNTAFORM_H
#define PREGUNTAFORM_H

#include <QWidget>
#include <QDebug>

#include "cuestionario.h"

namespace Ui {
class PreguntaForm;
}

class PreguntaForm : public QWidget
{
    Q_OBJECT

public:
    explicit PreguntaForm(QWidget *parent = nullptr);
    ~PreguntaForm();


    void setCuestionario(Cuestionario *newCuestionario);
    void mostrarConceptos();


public slots:
    void setAsignaturaMostrada(const QString &asignatura);
    void setTemaMostrado(const QString &tema);


signals:
    void preguntasRespondidas(Cuestionario *cuestionario);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::PreguntaForm *ui;
    Cuestionario *m_cuestionario;
    Pregunta *m_pregunta;

    void obtenerPregunta();
    //void siguiente();
    void cargarDatos();
};

#endif // PREGUNTAFORM_H
