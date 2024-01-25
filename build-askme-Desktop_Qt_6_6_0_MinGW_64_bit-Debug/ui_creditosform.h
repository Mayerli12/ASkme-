/********************************************************************************
** Form generated from reading UI file 'creditosform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOSFORM_H
#define UI_CREDITOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditosForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QWidget *CreditosForm)
    {
        if (CreditosForm->objectName().isEmpty())
            CreditosForm->setObjectName("CreditosForm");
        CreditosForm->resize(290, 143);
        gridLayout = new QGridLayout(CreditosForm);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(CreditosForm);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(CreditosForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(CreditosForm);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);\n"
"font: 700 italic 9pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        comboBox = new QComboBox(CreditosForm);
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("font: italic 9pt \"Segoe UI\";\n"
"background-color: rgb(253, 255, 138);"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);


        retranslateUi(CreditosForm);

        QMetaObject::connectSlotsByName(CreditosForm);
    } // setupUi

    void retranslateUi(QWidget *CreditosForm)
    {
        CreditosForm->setWindowTitle(QCoreApplication::translate("CreditosForm", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("CreditosForm", "GitHub", nullptr));
        label->setText(QCoreApplication::translate("CreditosForm", "Nombres:", nullptr));
        pushButton->setText(QCoreApplication::translate("CreditosForm", "Go!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditosForm: public Ui_CreditosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOSFORM_H
