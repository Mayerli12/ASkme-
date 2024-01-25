/********************************************************************************
** Form generated from reading UI file 'creditosform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOSFORM_H
#define UI_CREDITOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditosForm
{
public:
    QListWidget *listCreditos;
    QComboBox *comboBox;

    void setupUi(QWidget *CreditosForm)
    {
        if (CreditosForm->objectName().isEmpty())
            CreditosForm->setObjectName(QString::fromUtf8("CreditosForm"));
        CreditosForm->resize(400, 300);
        listCreditos = new QListWidget(CreditosForm);
        listCreditos->setObjectName(QString::fromUtf8("listCreditos"));
        listCreditos->setGeometry(QRect(110, 80, 256, 192));
        comboBox = new QComboBox(CreditosForm);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 30, 86, 25));

        retranslateUi(CreditosForm);

        QMetaObject::connectSlotsByName(CreditosForm);
    } // setupUi

    void retranslateUi(QWidget *CreditosForm)
    {
        CreditosForm->setWindowTitle(QCoreApplication::translate("CreditosForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditosForm: public Ui_CreditosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOSFORM_H
