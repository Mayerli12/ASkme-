/********************************************************************************
** Form generated from reading UI file 'creditsform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITSFORM_H
#define UI_CREDITSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditsForm
{
public:
    QListWidget *listWidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QListWidget *listCreditos;

    void setupUi(QWidget *CreditsForm)
    {
        if (CreditsForm->objectName().isEmpty())
            CreditsForm->setObjectName("CreditsForm");
        CreditsForm->resize(509, 399);
        listWidget = new QListWidget(CreditsForm);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(260, 220, 241, 170));
        textBrowser = new QTextBrowser(CreditsForm);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 40, 487, 169));
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setBold(true);
        textBrowser->setFont(font);
        label = new QLabel(CreditsForm);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 487, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        listCreditos = new QListWidget(CreditsForm);
        listCreditos->setObjectName("listCreditos");
        listCreditos->setGeometry(QRect(10, 220, 240, 170));

        retranslateUi(CreditsForm);

        QMetaObject::connectSlotsByName(CreditsForm);
    } // setupUi

    void retranslateUi(QWidget *CreditsForm)
    {
        CreditsForm->setWindowTitle(QCoreApplication::translate("CreditsForm", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("CreditsForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'System'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400;\">Estamos muy contentos de haber contribuido con este proyecto. Una iniciativa de los estudiantes de la Carrera de Filosof\303\255a, que repreenta una herramienta din\303\241mica de aprendizaje.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400;\">La colaboraci\303\263n entre ambas carreras ha dado lugar a esta aplicaci\303\263n, en donde las ideas de la Filosof\303\255a se convierten en realidad gracias a la porgramaci\303\263n.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-style:italic;\">\302\241Agradecemos a todos los contribuidores por su valioso aporte!</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("CreditsForm", "Universidad Politecnica Salesiana", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditsForm: public Ui_CreditsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITSFORM_H
