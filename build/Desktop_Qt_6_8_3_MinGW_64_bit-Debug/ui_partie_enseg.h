/********************************************************************************
** Form generated from reading UI file 'partie_enseg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIE_ENSEG_H
#define UI_PARTIE_ENSEG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_partie_enseg
{
public:
    QCommandLinkButton *fps;
    QRadioButton *lister;
    QRadioButton *filtrer;
    QRadioButton *modif_info;
    QLabel *label;
    QRadioButton *suprimer;
    QCommandLinkButton *commandLinkButton;
    QLabel *label_2;
    QPushButton *select;
    QRadioButton *ajouter;
    QRadioButton *modif_note;
    QPushButton *pushButton_2;

    void setupUi(QDialog *partie_enseg)
    {
        if (partie_enseg->objectName().isEmpty())
            partie_enseg->setObjectName("partie_enseg");
        partie_enseg->resize(776, 580);
        fps = new QCommandLinkButton(partie_enseg);
        fps->setObjectName("fps");
        fps->setGeometry(QRect(380, 440, 231, 41));
        lister = new QRadioButton(partie_enseg);
        lister->setObjectName("lister");
        lister->setGeometry(QRect(40, 220, 241, 22));
        filtrer = new QRadioButton(partie_enseg);
        filtrer->setObjectName("filtrer");
        filtrer->setGeometry(QRect(40, 310, 241, 22));
        modif_info = new QRadioButton(partie_enseg);
        modif_info->setObjectName("modif_info");
        modif_info->setGeometry(QRect(40, 190, 241, 22));
        label = new QLabel(partie_enseg);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 631, 91));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        suprimer = new QRadioButton(partie_enseg);
        suprimer->setObjectName("suprimer");
        suprimer->setGeometry(QRect(40, 280, 241, 22));
        commandLinkButton = new QCommandLinkButton(partie_enseg);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(380, 390, 231, 41));
        label_2 = new QLabel(partie_enseg);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 391, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 25px;\n"
"}"));
        select = new QPushButton(partie_enseg);
        select->setObjectName("select");
        select->setGeometry(QRect(40, 350, 80, 24));
        ajouter = new QRadioButton(partie_enseg);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(40, 250, 241, 22));
        modif_note = new QRadioButton(partie_enseg);
        modif_note->setObjectName("modif_note");
        modif_note->setGeometry(QRect(40, 160, 241, 22));
        pushButton_2 = new QPushButton(partie_enseg);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 350, 80, 24));

        retranslateUi(partie_enseg);

        QMetaObject::connectSlotsByName(partie_enseg);
    } // setupUi

    void retranslateUi(QDialog *partie_enseg)
    {
        partie_enseg->setWindowTitle(QCoreApplication::translate("partie_enseg", "Dialog", nullptr));
        fps->setText(QCoreApplication::translate("partie_enseg", "FPS", nullptr));
        lister->setText(QCoreApplication::translate("partie_enseg", "Lister les \303\251tudiant", nullptr));
        filtrer->setText(QCoreApplication::translate("partie_enseg", "Filtrer les e\314\201tudiants", nullptr));
        modif_info->setText(QCoreApplication::translate("partie_enseg", "Modifier les informations d\342\200\231un \303\251tudiant", nullptr));
        label->setText(QCoreApplication::translate("partie_enseg", "D\303\251di\303\251 Aux Enseignants :", nullptr));
        suprimer->setText(QCoreApplication::translate("partie_enseg", "Supprimer un \303\251tudiant", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("partie_enseg", "se connecter tant que \303\251tudiant", nullptr));
        label_2->setText(QCoreApplication::translate("partie_enseg", "Veuillez s\303\251lectionner une t\303\242che:", nullptr));
        select->setText(QCoreApplication::translate("partie_enseg", "S\303\251lectionner", nullptr));
        ajouter->setText(QCoreApplication::translate("partie_enseg", "Ajouter un \303\251tudiant", nullptr));
        modif_note->setText(QCoreApplication::translate("partie_enseg", "Modifier les notes d\342\200\231un \303\251tudiant", nullptr));
        pushButton_2->setText(QCoreApplication::translate("partie_enseg", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class partie_enseg: public Ui_partie_enseg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIE_ENSEG_H
