/********************************************************************************
** Form generated from reading UI file 'creditoform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOFORM_H
#define UI_CREDITOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditoForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cmbNombres;
    QPushButton *btnGithub;

    void setupUi(QWidget *CreditoForm)
    {
        if (CreditoForm->objectName().isEmpty())
            CreditoForm->setObjectName("CreditoForm");
        CreditoForm->resize(364, 201);
        gridLayout = new QGridLayout(CreditoForm);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(CreditoForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmbNombres = new QComboBox(CreditoForm);
        cmbNombres->setObjectName("cmbNombres");

        gridLayout->addWidget(cmbNombres, 0, 1, 1, 1);

        btnGithub = new QPushButton(CreditoForm);
        btnGithub->setObjectName("btnGithub");

        gridLayout->addWidget(btnGithub, 1, 1, 1, 1);


        retranslateUi(CreditoForm);

        QMetaObject::connectSlotsByName(CreditoForm);
    } // setupUi

    void retranslateUi(QWidget *CreditoForm)
    {
        CreditoForm->setWindowTitle(QCoreApplication::translate("CreditoForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CreditoForm", "Contribuidores", nullptr));
        btnGithub->setText(QCoreApplication::translate("CreditoForm", "GitHub", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditoForm: public Ui_CreditoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOFORM_H
