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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreguntaForm
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *lblTema;
    QLabel *label_2;
    QComboBox *cmbTerminos;
    QLabel *label;
    QTextEdit *txtConcepto;
    QLabel *label_3;

    void setupUi(QWidget *PreguntaForm)
    {
        if (PreguntaForm->objectName().isEmpty())
            PreguntaForm->setObjectName("PreguntaForm");
        PreguntaForm->resize(352, 253);
        gridLayout = new QGridLayout(PreguntaForm);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(PreguntaForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);

        lblTema = new QLabel(PreguntaForm);
        lblTema->setObjectName("lblTema");

        gridLayout->addWidget(lblTema, 0, 1, 1, 1);

        label_2 = new QLabel(PreguntaForm);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cmbTerminos = new QComboBox(PreguntaForm);
        cmbTerminos->setObjectName("cmbTerminos");

        gridLayout->addWidget(cmbTerminos, 2, 1, 1, 1);

        label = new QLabel(PreguntaForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txtConcepto = new QTextEdit(PreguntaForm);
        txtConcepto->setObjectName("txtConcepto");
        txtConcepto->setReadOnly(true);

        gridLayout->addWidget(txtConcepto, 1, 1, 1, 1);

        label_3 = new QLabel(PreguntaForm);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        retranslateUi(PreguntaForm);

        QMetaObject::connectSlotsByName(PreguntaForm);
    } // setupUi

    void retranslateUi(QWidget *PreguntaForm)
    {
        PreguntaForm->setWindowTitle(QCoreApplication::translate("PreguntaForm", "Form", nullptr));
        lblTema->setText(QCoreApplication::translate("PreguntaForm", "Desconocido", nullptr));
        label_2->setText(QCoreApplication::translate("PreguntaForm", "T\303\251rmino:", nullptr));
        label->setText(QCoreApplication::translate("PreguntaForm", "Concepto:", nullptr));
        label_3->setText(QCoreApplication::translate("PreguntaForm", "Tema:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreguntaForm: public Ui_PreguntaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREGUNTAFORM_H
