/********************************************************************************
** Form generated from reading UI file 'partie_etudiant.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIE_ETUDIANT_H
#define UI_PARTIE_ETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_partie_etudiant
{
public:
    QLabel *label_3;
    QLabel *titre;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *Quitter;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *fps;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_moyenne;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *partie_etudiant)
    {
        if (partie_etudiant->objectName().isEmpty())
            partie_etudiant->setObjectName("partie_etudiant");
        partie_etudiant->resize(878, 584);
        label_3 = new QLabel(partie_etudiant);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 280, 151, 31));
        titre = new QLabel(partie_etudiant);
        titre->setObjectName("titre");
        titre->setGeometry(QRect(10, 0, 251, 91));
        titre->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        label = new QLabel(partie_etudiant);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 130, 151, 31));
        label_8 = new QLabel(partie_etudiant);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 490, 151, 31));
        label_4 = new QLabel(partie_etudiant);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 230, 151, 31));
        label_7 = new QLabel(partie_etudiant);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 330, 151, 31));
        label_6 = new QLabel(partie_etudiant);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 380, 151, 31));
        Quitter = new QPushButton(partie_etudiant);
        Quitter->setObjectName("Quitter");
        Quitter->setGeometry(QRect(680, 480, 80, 24));
        commandLinkButton = new QCommandLinkButton(partie_etudiant);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(410, 360, 251, 41));
        fps = new QCommandLinkButton(partie_etudiant);
        fps->setObjectName("fps");
        fps->setGeometry(QRect(410, 400, 251, 41));
        label_2 = new QLabel(partie_etudiant);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 180, 151, 31));
        label_5 = new QLabel(partie_etudiant);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 430, 151, 31));
        lineEdit_1 = new QLineEdit(partie_etudiant);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(180, 133, 71, 31));
        lineEdit_2 = new QLineEdit(partie_etudiant);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 180, 71, 31));
        lineEdit_4 = new QLineEdit(partie_etudiant);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(180, 277, 71, 31));
        lineEdit_3 = new QLineEdit(partie_etudiant);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(180, 230, 71, 31));
        lineEdit_7 = new QLineEdit(partie_etudiant);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(180, 427, 71, 31));
        lineEdit_moyenne = new QLineEdit(partie_etudiant);
        lineEdit_moyenne->setObjectName("lineEdit_moyenne");
        lineEdit_moyenne->setGeometry(QRect(230, 490, 71, 31));
        lineEdit_6 = new QLineEdit(partie_etudiant);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(180, 377, 71, 31));
        lineEdit_5 = new QLineEdit(partie_etudiant);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(180, 330, 71, 31));

        retranslateUi(partie_etudiant);

        QMetaObject::connectSlotsByName(partie_etudiant);
    } // setupUi

    void retranslateUi(QDialog *partie_etudiant)
    {
        partie_etudiant->setWindowTitle(QCoreApplication::translate("partie_etudiant", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("partie_etudiant", "Programmation JavaScript", nullptr));
        titre->setText(QCoreApplication::translate("partie_etudiant", "BIENVENUE \342\200\223 ", nullptr));
        label->setText(QCoreApplication::translate("partie_etudiant", "Alg\303\250bre relationnel & SQL", nullptr));
        label_8->setText(QCoreApplication::translate("partie_etudiant", "La note moyenne", nullptr));
        label_4->setText(QCoreApplication::translate("partie_etudiant", "Structure de donn\303\251es", nullptr));
        label_7->setText(QCoreApplication::translate("partie_etudiant", "Syst\303\250me d''exploitation", nullptr));
        label_6->setText(QCoreApplication::translate("partie_etudiant", "D\303\251veloppement personnel", nullptr));
        Quitter->setText(QCoreApplication::translate("partie_etudiant", "Quitter", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("partie_etudiant", "Se connecter en tant qu'enseignant", nullptr));
        fps->setText(QCoreApplication::translate("partie_etudiant", "FPS", nullptr));
        label_2->setText(QCoreApplication::translate("partie_etudiant", "Programmation C++", nullptr));
        label_5->setText(QCoreApplication::translate("partie_etudiant", "Langues \303\251trang\303\250res", nullptr));
    } // retranslateUi

};

namespace Ui {
    class partie_etudiant: public Ui_partie_etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIE_ETUDIANT_H
