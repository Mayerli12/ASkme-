/********************************************************************************
** Form generated from reading UI file 'resultadosform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOSFORM_H
#define UI_RESULTADOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultadosForm
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tblResultados;
    QLabel *label_3;
    QPushButton *btnCerrar;
    QLabel *lblAsignatura;
    QLabel *label;
    QLabel *lblTema;
    QLabel *lblScore;

    void setupUi(QWidget *ResultadosForm)
    {
        if (ResultadosForm->objectName().isEmpty())
            ResultadosForm->setObjectName("ResultadosForm");
        ResultadosForm->resize(415, 272);
        gridLayout = new QGridLayout(ResultadosForm);
        gridLayout->setObjectName("gridLayout");
        tblResultados = new QTableWidget(ResultadosForm);
        tblResultados->setObjectName("tblResultados");
        tblResultados->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);"));

        gridLayout->addWidget(tblResultados, 4, 0, 1, 5);

        label_3 = new QLabel(ResultadosForm);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        btnCerrar = new QPushButton(ResultadosForm);
        btnCerrar->setObjectName("btnCerrar");
        btnCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnCerrar, 5, 4, 1, 1);

        lblAsignatura = new QLabel(ResultadosForm);
        lblAsignatura->setObjectName("lblAsignatura");

        gridLayout->addWidget(lblAsignatura, 0, 2, 1, 1);

        label = new QLabel(ResultadosForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lblTema = new QLabel(ResultadosForm);
        lblTema->setObjectName("lblTema");
        lblTema->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(148, 0, 0);"));

        gridLayout->addWidget(lblTema, 2, 2, 1, 1);

        lblScore = new QLabel(ResultadosForm);
        lblScore->setObjectName("lblScore");
        lblScore->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Segoe UI\";\n"
"color: rgb(148, 0, 0);"));

        gridLayout->addWidget(lblScore, 5, 0, 1, 1);


        retranslateUi(ResultadosForm);

        QMetaObject::connectSlotsByName(ResultadosForm);
    } // setupUi

    void retranslateUi(QWidget *ResultadosForm)
    {
        ResultadosForm->setWindowTitle(QCoreApplication::translate("ResultadosForm", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ResultadosForm", "Tema:", nullptr));
        btnCerrar->setText(QCoreApplication::translate("ResultadosForm", "Cerrar", nullptr));
        lblAsignatura->setText(QCoreApplication::translate("ResultadosForm", "Desconocido", nullptr));
        label->setText(QCoreApplication::translate("ResultadosForm", "Asignatura:", nullptr));
        lblTema->setText(QCoreApplication::translate("ResultadosForm", "Desconocido", nullptr));
        lblScore->setText(QCoreApplication::translate("ResultadosForm", "Desconocido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultadosForm: public Ui_ResultadosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOSFORM_H
