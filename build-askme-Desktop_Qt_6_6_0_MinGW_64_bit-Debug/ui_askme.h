/********************************************************************************
** Form generated from reading UI file 'askme.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKME_H
#define UI_ASKME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Askme
{
public:
    QAction *actionNuevo;
    QAction *actionLista;
    QAction *actionGenerar;
    QAction *actionSalir;
    QAction *actionCreditos;
    QAction *actionGuardar;
    QAction *actionCargar;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuApuntes;
    QMenu *menuPreguntas;
    QMenu *menuAcerca_de;

    void setupUi(QMainWindow *Askme)
    {
        if (Askme->objectName().isEmpty())
            Askme->setObjectName("Askme");
        Askme->resize(800, 600);
        Askme->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 9pt \"Arial Rounded MT Bold\";"));
        actionNuevo = new QAction(Askme);
        actionNuevo->setObjectName("actionNuevo");
        actionLista = new QAction(Askme);
        actionLista->setObjectName("actionLista");
        actionGenerar = new QAction(Askme);
        actionGenerar->setObjectName("actionGenerar");
        actionSalir = new QAction(Askme);
        actionSalir->setObjectName("actionSalir");
        actionCreditos = new QAction(Askme);
        actionCreditos->setObjectName("actionCreditos");
        actionGuardar = new QAction(Askme);
        actionGuardar->setObjectName("actionGuardar");
        actionCargar = new QAction(Askme);
        actionCargar->setObjectName("actionCargar");
        centralwidget = new QWidget(Askme);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        Askme->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Askme);
        statusbar->setObjectName("statusbar");
        Askme->setStatusBar(statusbar);
        menubar = new QMenuBar(Askme);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        menuApuntes = new QMenu(menuArchivo);
        menuApuntes->setObjectName("menuApuntes");
        menuPreguntas = new QMenu(menuArchivo);
        menuPreguntas->setObjectName("menuPreguntas");
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName("menuAcerca_de");
        Askme->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(menuApuntes->menuAction());
        menuArchivo->addAction(menuPreguntas->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuApuntes->addAction(actionNuevo);
        menuApuntes->addAction(actionLista);
        menuPreguntas->addAction(actionGenerar);
        menuAcerca_de->addAction(actionCreditos);

        retranslateUi(Askme);

        QMetaObject::connectSlotsByName(Askme);
    } // setupUi

    void retranslateUi(QMainWindow *Askme)
    {
        Askme->setWindowTitle(QCoreApplication::translate("Askme", "Askme", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Askme", "&Nuevo", nullptr));
#if QT_CONFIG(tooltip)
        actionNuevo->setToolTip(QCoreApplication::translate("Askme", "Crear un nuevo apunte", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNuevo->setShortcut(QCoreApplication::translate("Askme", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLista->setText(QCoreApplication::translate("Askme", "&Lista", nullptr));
#if QT_CONFIG(tooltip)
        actionLista->setToolTip(QCoreApplication::translate("Askme", "Lista de apuntes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLista->setShortcut(QCoreApplication::translate("Askme", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerar->setText(QCoreApplication::translate("Askme", "&Generar", nullptr));
#if QT_CONFIG(tooltip)
        actionGenerar->setToolTip(QCoreApplication::translate("Askme", "Generar nuevas preguntas", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGenerar->setShortcut(QCoreApplication::translate("Askme", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalir->setText(QCoreApplication::translate("Askme", "&Salir", nullptr));
#if QT_CONFIG(shortcut)
        actionSalir->setShortcut(QCoreApplication::translate("Askme", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreditos->setText(QCoreApplication::translate("Askme", "&Creditos", nullptr));
#if QT_CONFIG(tooltip)
        actionCreditos->setToolTip(QCoreApplication::translate("Askme", "Autores de la aplicacion", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGuardar->setText(QCoreApplication::translate("Askme", "Guardar", nullptr));
        actionCargar->setText(QCoreApplication::translate("Askme", "Cargar", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("Askme", "&Archivo", nullptr));
        menuApuntes->setTitle(QCoreApplication::translate("Askme", "&Apuntes", nullptr));
        menuPreguntas->setTitle(QCoreApplication::translate("Askme", "&Preguntas", nullptr));
        menuAcerca_de->setTitle(QCoreApplication::translate("Askme", "A&cerca de", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Askme: public Ui_Askme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKME_H
