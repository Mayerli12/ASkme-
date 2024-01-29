/********************************************************************************
** Form generated from reading UI file 'listform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTFORM_H
#define UI_LISTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListForm
{
public:
    QFormLayout *formLayout;
    QComboBox *cmbAsignaturas;
    QLabel *label_2;
    QTableWidget *tblTermino;
    QLabel *label_3;
    QTableWidget *tblConcepto;
    QDialogButtonBox *btnGuardar;
    QLabel *label;

    void setupUi(QWidget *ListForm)
    {
        if (ListForm->objectName().isEmpty())
            ListForm->setObjectName("ListForm");
        ListForm->resize(400, 362);
        formLayout = new QFormLayout(ListForm);
        formLayout->setObjectName("formLayout");
        cmbAsignaturas = new QComboBox(ListForm);
        cmbAsignaturas->setObjectName("cmbAsignaturas");

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbAsignaturas);

        label_2 = new QLabel(ListForm);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        tblTermino = new QTableWidget(ListForm);
        tblTermino->setObjectName("tblTermino");

        formLayout->setWidget(1, QFormLayout::FieldRole, tblTermino);

        label_3 = new QLabel(ListForm);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        tblConcepto = new QTableWidget(ListForm);
        tblConcepto->setObjectName("tblConcepto");

        formLayout->setWidget(2, QFormLayout::FieldRole, tblConcepto);

        btnGuardar = new QDialogButtonBox(ListForm);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::FieldRole, btnGuardar);

        label = new QLabel(ListForm);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);


        retranslateUi(ListForm);

        QMetaObject::connectSlotsByName(ListForm);
    } // setupUi

    void retranslateUi(QWidget *ListForm)
    {
        ListForm->setWindowTitle(QCoreApplication::translate("ListForm", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("ListForm", "Terminos", nullptr));
        label_3->setText(QCoreApplication::translate("ListForm", "Conceptos", nullptr));
        label->setText(QCoreApplication::translate("ListForm", "Asignatura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListForm: public Ui_ListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTFORM_H
