/********************************************************************************
** Form generated from reading UI file 'preguntaform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREGUNTAFORM_H
#define UI_PREGUNTAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreguntaForm
{
public:
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *lblTema;
    QLabel *label;
    QTextEdit *txtConceptos;
    QLabel *label_2;
    QComboBox *cmbTerminos;
    QLabel *label_4;
    QLabel *lblContador;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *PreguntaForm)
    {
        if (PreguntaForm->objectName().isEmpty())
            PreguntaForm->setObjectName("PreguntaForm");
        PreguntaForm->resize(291, 238);
        PreguntaForm->setStyleSheet(QString::fromUtf8(""));
        formLayout = new QFormLayout(PreguntaForm);
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(PreguntaForm);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lblTema = new QLabel(PreguntaForm);
        lblTema->setObjectName("lblTema");
        lblTema->setStyleSheet(QString::fromUtf8("font: 900 italic 9pt \"Segoe UI\";\n"
"color: rgb(153, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblTema);

        label = new QLabel(PreguntaForm);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        txtConceptos = new QTextEdit(PreguntaForm);
        txtConceptos->setObjectName("txtConceptos");
        txtConceptos->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 250, 174);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtConceptos);

        label_2 = new QLabel(PreguntaForm);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        cmbTerminos = new QComboBox(PreguntaForm);
        cmbTerminos->setObjectName("cmbTerminos");
        cmbTerminos->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 252, 152);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cmbTerminos);

        label_4 = new QLabel(PreguntaForm);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lblContador = new QLabel(PreguntaForm);
        lblContador->setObjectName("lblContador");
        lblContador->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Segoe UI\";\n"
"color: rgb(148, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lblContador);

        buttonBox = new QDialogButtonBox(PreguntaForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 137);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 italic 9pt \"Segoe UI\";"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);


        retranslateUi(PreguntaForm);

        QMetaObject::connectSlotsByName(PreguntaForm);
    } // setupUi

    void retranslateUi(QWidget *PreguntaForm)
    {
        PreguntaForm->setWindowTitle(QCoreApplication::translate("PreguntaForm", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("PreguntaForm", "Tema:", nullptr));
        lblTema->setText(QCoreApplication::translate("PreguntaForm", "Desconocido", nullptr));
        label->setText(QCoreApplication::translate("PreguntaForm", "Concepto:", nullptr));
        label_2->setText(QCoreApplication::translate("PreguntaForm", "Termino:", nullptr));
        label_4->setText(QCoreApplication::translate("PreguntaForm", "Pregunta:", nullptr));
        lblContador->setText(QCoreApplication::translate("PreguntaForm", "0/0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreguntaForm: public Ui_PreguntaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREGUNTAFORM_H
