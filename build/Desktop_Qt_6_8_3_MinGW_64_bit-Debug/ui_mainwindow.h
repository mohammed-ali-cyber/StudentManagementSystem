/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_apogee;
    QLabel *prenom_label;
    QLabel *module_label_2;
    QCommandLinkButton *link;
    QPushButton *butt_ensegnant;
    QLabel *titre;
    QPushButton *butt_etudiant;
    QLineEdit *lineEdit_email;
    QLabel *module_label_3;
    QPushButton *butt_etudiant_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(906, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_apogee = new QLineEdit(centralwidget);
        lineEdit_apogee->setObjectName("lineEdit_apogee");
        lineEdit_apogee->setGeometry(QRect(238, 140, 113, 31));
        prenom_label = new QLabel(centralwidget);
        prenom_label->setObjectName("prenom_label");
        prenom_label->setGeometry(QRect(120, 250, 251, 31));
        prenom_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        module_label_2 = new QLabel(centralwidget);
        module_label_2->setObjectName("module_label_2");
        module_label_2->setGeometry(QRect(40, 140, 181, 31));
        module_label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        link = new QCommandLinkButton(centralwidget);
        link->setObjectName("link");
        link->setGeometry(QRect(490, 310, 221, 41));
        butt_ensegnant = new QPushButton(centralwidget);
        butt_ensegnant->setObjectName("butt_ensegnant");
        butt_ensegnant->setGeometry(QRect(489, 250, 91, 31));
        titre = new QLabel(centralwidget);
        titre->setObjectName("titre");
        titre->setGeometry(QRect(10, 0, 891, 91));
        titre->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        butt_etudiant = new QPushButton(centralwidget);
        butt_etudiant->setObjectName("butt_etudiant");
        butt_etudiant->setGeometry(QRect(380, 250, 91, 31));
        lineEdit_email = new QLineEdit(centralwidget);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(238, 180, 161, 31));
        module_label_3 = new QLabel(centralwidget);
        module_label_3->setObjectName("module_label_3");
        module_label_3->setGeometry(QRect(40, 180, 181, 31));
        module_label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        butt_etudiant_2 = new QPushButton(centralwidget);
        butt_etudiant_2->setObjectName("butt_etudiant_2");
        butt_etudiant_2->setGeometry(QRect(610, 360, 101, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 906, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        prenom_label->setText(QCoreApplication::translate("MainWindow", "Se connecter en tant que :", nullptr));
        module_label_2->setText(QCoreApplication::translate("MainWindow", "Apogee (ou id) :", nullptr));
        link->setText(QCoreApplication::translate("MainWindow", "FPS", nullptr));
        butt_ensegnant->setText(QCoreApplication::translate("MainWindow", "Enseignant", nullptr));
        titre->setText(QCoreApplication::translate("MainWindow", "BIENVENUE \342\200\223 GESTION ACAD\303\211MIQUE", nullptr));
        butt_etudiant->setText(QCoreApplication::translate("MainWindow", "\303\211tudiant", nullptr));
        lineEdit_email->setText(QString());
        module_label_3->setText(QCoreApplication::translate("MainWindow", "Email acad\303\251mique  :", nullptr));
        butt_etudiant_2->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
