/********************************************************************************
** Form generated from reading UI file 'resultadoform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOFORM_H
#define UI_RESULTADOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultadoForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lblAsignatura;
    QLabel *label_3;
    QLabel *lblTema;
    QTableWidget *tblResultados;
    QLabel *label_5;
    QLabel *lblScore;
    QPushButton *btnCerrar;

    void setupUi(QWidget *ResultadoForm)
    {
        if (ResultadoForm->objectName().isEmpty())
            ResultadoForm->setObjectName("ResultadoForm");
        ResultadoForm->resize(400, 300);
        gridLayout = new QGridLayout(ResultadoForm);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(ResultadoForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lblAsignatura = new QLabel(ResultadoForm);
        lblAsignatura->setObjectName("lblAsignatura");

        gridLayout->addWidget(lblAsignatura, 0, 1, 1, 1);

        label_3 = new QLabel(ResultadoForm);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lblTema = new QLabel(ResultadoForm);
        lblTema->setObjectName("lblTema");

        gridLayout->addWidget(lblTema, 1, 1, 1, 1);

        tblResultados = new QTableWidget(ResultadoForm);
        tblResultados->setObjectName("tblResultados");

        gridLayout->addWidget(tblResultados, 2, 1, 1, 2);

        label_5 = new QLabel(ResultadoForm);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lblScore = new QLabel(ResultadoForm);
        lblScore->setObjectName("lblScore");

        gridLayout->addWidget(lblScore, 3, 1, 1, 1);

        btnCerrar = new QPushButton(ResultadoForm);
        btnCerrar->setObjectName("btnCerrar");

        gridLayout->addWidget(btnCerrar, 4, 2, 1, 1);


        retranslateUi(ResultadoForm);

        QMetaObject::connectSlotsByName(ResultadoForm);
    } // setupUi

    void retranslateUi(QWidget *ResultadoForm)
    {
        ResultadoForm->setWindowTitle(QCoreApplication::translate("ResultadoForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ResultadoForm", "Asignatura", nullptr));
        lblAsignatura->setText(QCoreApplication::translate("ResultadoForm", "Desconocido", nullptr));
        label_3->setText(QCoreApplication::translate("ResultadoForm", "Tema", nullptr));
        lblTema->setText(QCoreApplication::translate("ResultadoForm", "Desconocido", nullptr));
        label_5->setText(QCoreApplication::translate("ResultadoForm", "Score", nullptr));
        lblScore->setText(QCoreApplication::translate("ResultadoForm", "000.00%", nullptr));
        btnCerrar->setText(QCoreApplication::translate("ResultadoForm", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultadoForm: public Ui_ResultadoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOFORM_H
