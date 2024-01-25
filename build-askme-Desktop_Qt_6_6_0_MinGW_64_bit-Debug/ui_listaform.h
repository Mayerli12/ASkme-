/********************************************************************************
** Form generated from reading UI file 'listaform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAFORM_H
#define UI_LISTAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listaForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *tblTemas;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableWidget *tblTerminos;
    QLabel *label;
    QComboBox *cmbAsignaturas;

    void setupUi(QWidget *listaForm)
    {
        if (listaForm->objectName().isEmpty())
            listaForm->setObjectName("listaForm");
        listaForm->resize(424, 470);
        gridLayout = new QGridLayout(listaForm);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(listaForm);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(148, 0, 0);"));

        verticalLayout_2->addWidget(label_2);

        tblTemas = new QTableWidget(listaForm);
        tblTemas->setObjectName("tblTemas");
        tblTemas->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);"));

        verticalLayout_2->addWidget(tblTemas);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(listaForm);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(148, 0, 0);"));

        verticalLayout->addWidget(label_3);

        tblTerminos = new QTableWidget(listaForm);
        tblTerminos->setObjectName("tblTerminos");
        tblTerminos->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);"));

        verticalLayout->addWidget(tblTerminos);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 3);

        label = new QLabel(listaForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmbAsignaturas = new QComboBox(listaForm);
        cmbAsignaturas->setObjectName("cmbAsignaturas");
        cmbAsignaturas->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);"));

        gridLayout->addWidget(cmbAsignaturas, 0, 1, 1, 2);


        retranslateUi(listaForm);

        QMetaObject::connectSlotsByName(listaForm);
    } // setupUi

    void retranslateUi(QWidget *listaForm)
    {
        listaForm->setWindowTitle(QCoreApplication::translate("listaForm", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("listaForm", "Temas:", nullptr));
        label_3->setText(QCoreApplication::translate("listaForm", "Terminos:", nullptr));
        label->setText(QCoreApplication::translate("listaForm", "Asignatura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listaForm: public Ui_listaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAFORM_H
