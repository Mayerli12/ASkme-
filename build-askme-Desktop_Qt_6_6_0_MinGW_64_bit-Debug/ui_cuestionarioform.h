/********************************************************************************
** Form generated from reading UI file 'cuestionarioform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUESTIONARIOFORM_H
#define UI_CUESTIONARIOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CuestionarioForm
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cmbAsignatura;
    QLabel *label_2;
    QComboBox *cmbTema;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *CuestionarioForm)
    {
        if (CuestionarioForm->objectName().isEmpty())
            CuestionarioForm->setObjectName("CuestionarioForm");
        CuestionarioForm->resize(310, 129);
        formLayout = new QFormLayout(CuestionarioForm);
        formLayout->setObjectName("formLayout");
        label = new QLabel(CuestionarioForm);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cmbAsignatura = new QComboBox(CuestionarioForm);
        cmbAsignatura->setObjectName("cmbAsignatura");

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbAsignatura);

        label_2 = new QLabel(CuestionarioForm);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cmbTema = new QComboBox(CuestionarioForm);
        cmbTema->setObjectName("cmbTema");

        formLayout->setWidget(1, QFormLayout::FieldRole, cmbTema);

        buttonBox = new QDialogButtonBox(CuestionarioForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 252, 152);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 italic 9pt \"Segoe UI\";"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);


        retranslateUi(CuestionarioForm);

        QMetaObject::connectSlotsByName(CuestionarioForm);
    } // setupUi

    void retranslateUi(QWidget *CuestionarioForm)
    {
        CuestionarioForm->setWindowTitle(QCoreApplication::translate("CuestionarioForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CuestionarioForm", "Asignatura:", nullptr));
        label_2->setText(QCoreApplication::translate("CuestionarioForm", "Tema:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CuestionarioForm: public Ui_CuestionarioForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUESTIONARIOFORM_H
