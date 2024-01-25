/********************************************************************************
** Form generated from reading UI file 'apunteform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APUNTEFORM_H
#define UI_APUNTEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApunteForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *cmbClase;
    QLineEdit *txtTermino;
    QPushButton *btnAgregarTema;
    QPushButton *btnAgragraAsignatura;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_6;
    QPushButton *btnRefrescar;
    QComboBox *cmbAsignatura;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ApunteForm)
    {
        if (ApunteForm->objectName().isEmpty())
            ApunteForm->setObjectName("ApunteForm");
        ApunteForm->resize(400, 342);
        ApunteForm->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 68);\n"
"font: 900 9pt \"Segoe UI\";\n"
""));
        verticalLayout = new QVBoxLayout(ApunteForm);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(ApunteForm);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        cmbClase = new QComboBox(widget);
        cmbClase->setObjectName("cmbClase");
        cmbClase->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);"));

        gridLayout->addWidget(cmbClase, 1, 1, 1, 2);

        txtTermino = new QLineEdit(widget);
        txtTermino->setObjectName("txtTermino");
        txtTermino->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Arial\";\n"
"background-color: rgb(252, 255, 101);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(txtTermino, 2, 1, 1, 4);

        btnAgregarTema = new QPushButton(widget);
        btnAgregarTema->setObjectName("btnAgregarTema");
        btnAgregarTema->setMaximumSize(QSize(50, 16777215));
        btnAgregarTema->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(btnAgregarTema, 1, 4, 1, 1);

        btnAgragraAsignatura = new QPushButton(widget);
        btnAgragraAsignatura->setObjectName("btnAgragraAsignatura");
        btnAgragraAsignatura->setMaximumSize(QSize(50, 16777215));
        btnAgragraAsignatura->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(btnAgragraAsignatura, 0, 4, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMaximumSize(QSize(50, 16777215));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(pushButton_6, 1, 3, 1, 1);

        btnRefrescar = new QPushButton(widget);
        btnRefrescar->setObjectName("btnRefrescar");
        btnRefrescar->setMaximumSize(QSize(50, 16777215));
        btnRefrescar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(btnRefrescar, 0, 3, 1, 1);

        cmbAsignatura = new QComboBox(widget);
        cmbAsignatura->setObjectName("cmbAsignatura");
        cmbAsignatura->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 255, 138);"));

        gridLayout->addWidget(cmbAsignatura, 0, 1, 1, 2);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(ApunteForm);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);

        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Arial\";\n"
"background-color: rgb(253, 255, 138);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit, 0, 2, 2, 1);

        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 255, 107);"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 2, 1, 1);


        verticalLayout->addWidget(widget_2);


        retranslateUi(ApunteForm);

        QMetaObject::connectSlotsByName(ApunteForm);
    } // setupUi

    void retranslateUi(QWidget *ApunteForm)
    {
        ApunteForm->setWindowTitle(QCoreApplication::translate("ApunteForm", "Apunte", nullptr));
        label_3->setText(QCoreApplication::translate("ApunteForm", "Termino:", nullptr));
        btnAgregarTema->setText(QCoreApplication::translate("ApunteForm", "+", nullptr));
        btnAgragraAsignatura->setText(QCoreApplication::translate("ApunteForm", "+", nullptr));
        label_2->setText(QCoreApplication::translate("ApunteForm", "Temas:", nullptr));
        label->setText(QCoreApplication::translate("ApunteForm", "Asignatura:", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ApunteForm", "R", nullptr));
        btnRefrescar->setText(QCoreApplication::translate("ApunteForm", "R", nullptr));
        label_4->setText(QCoreApplication::translate("ApunteForm", "Concepto:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("ApunteForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:9pt; font-weight:700; font-style:italic;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-weight:400; font-style:normal;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApunteForm: public Ui_ApunteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APUNTEFORM_H
