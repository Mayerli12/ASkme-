#include "preguntaform.h"
#include "ui_preguntaform.h"

PreguntaForm::PreguntaForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PreguntaForm),
    m_cuestionario(nullptr)
{
    ui->setupUi(this);
}

PreguntaForm::~PreguntaForm()
{
    delete ui;
}

void PreguntaForm::setCuestionario(Cuestionario *newCuestionario)
{
    m_cuestionario = newCuestionario;
    cargarDatos();
   /* ui->lblTema->setText(m_cuestionario->nombreTema());
    ui->cmbTerminos->addItems(m_cuestionario->terminos());*/

}

void PreguntaForm::mostrarConceptos()
{

    if(m_cuestionario->otrasPreguntas())
    {
        m_pregunta = m_cuestionario->siguiente();
        ui->txtConcepto->setText(m_pregunta->apunte()->concepto());
        ui->txtConcepto->setReadOnly(true);

    }
    else
    {
        ui->txtConcepto->clear();
    }
}

void PreguntaForm::on_buttonBox_accepted()
{
    // Responde por pregunta
    QString respuesta = ui->cmbTerminos->currentText();
    if (!respuesta.isEmpty()) {
        m_pregunta->responder(respuesta);
        mostrarConceptos();
    } else {
        qDebug() << "Porfavor responda la pregunta";
    }
}

void PreguntaForm::cargarDatos()
{
    ui->lblTema->setText(m_cuestionario->nombreTema());
    ui->cmbTerminos->addItems(m_cuestionario->terminos());
    mostrarConceptos();
}

void PreguntaForm::setAsignaturaMostrada(const QString &asignatura)
{
    ui->lblTema->setText(asignatura);
}

void PreguntaForm::setTemaMostrado(const QString &tema)
{
    ui->lblTema->setText(tema);
}

void PreguntaForm::on_buttonBox_rejected()
{
    emit preguntasRespondidas(m_cuestionario);
    this->parentWidget()->close();

}


