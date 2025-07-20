/********************************************************************************
** Form generated from reading UI file 'modif_info.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIF_INFO_H
#define UI_MODIF_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modif_info
{
public:
    QLineEdit *nom_inp;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *pushButton_2;
    QLabel *note_label;
    QCommandLinkButton *commandLinkButton;
    QLineEdit *email_inp;
    QLabel *prenom_label;
    QLabel *module_label_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *prenominp;
    QLabel *enseignant_label;
    QLineEdit *nvappo_inp;
    QLabel *module_label;
    QLineEdit *appogee_inp;

    void setupUi(QDialog *modif_info)
    {
        if (modif_info->objectName().isEmpty())
            modif_info->setObjectName("modif_info");
        modif_info->resize(712, 538);
        nom_inp = new QLineEdit(modif_info);
        nom_inp->setObjectName("nom_inp");
        nom_inp->setGeometry(QRect(270, 210, 113, 31));
        pushButton = new QPushButton(modif_info);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 380, 80, 24));
        line = new QFrame(modif_info);
        line->setObjectName("line");
        line->setGeometry(QRect(-40, 190, 431, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_2 = new QPushButton(modif_info);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 380, 80, 24));
        note_label = new QLabel(modif_info);
        note_label->setObjectName("note_label");
        note_label->setGeometry(QRect(10, 290, 181, 31));
        note_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        commandLinkButton = new QCommandLinkButton(modif_info);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(460, 450, 172, 41));
        email_inp = new QLineEdit(modif_info);
        email_inp->setObjectName("email_inp");
        email_inp->setGeometry(QRect(270, 330, 113, 31));
        prenom_label = new QLabel(modif_info);
        prenom_label->setObjectName("prenom_label");
        prenom_label->setGeometry(QRect(10, 330, 261, 31));
        prenom_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        module_label_2 = new QLabel(modif_info);
        module_label_2->setObjectName("module_label_2");
        module_label_2->setGeometry(QRect(20, 140, 181, 31));
        module_label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        label_2 = new QLabel(modif_info);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 391, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 25px;\n"
"}"));
        label = new QLabel(modif_info);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 631, 91));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        prenominp = new QLineEdit(modif_info);
        prenominp->setObjectName("prenominp");
        prenominp->setGeometry(QRect(270, 250, 113, 31));
        enseignant_label = new QLabel(modif_info);
        enseignant_label->setObjectName("enseignant_label");
        enseignant_label->setGeometry(QRect(10, 250, 181, 31));
        enseignant_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        nvappo_inp = new QLineEdit(modif_info);
        nvappo_inp->setObjectName("nvappo_inp");
        nvappo_inp->setGeometry(QRect(270, 290, 111, 31));
        module_label = new QLabel(modif_info);
        module_label->setObjectName("module_label");
        module_label->setGeometry(QRect(10, 210, 181, 31));
        module_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        appogee_inp = new QLineEdit(modif_info);
        appogee_inp->setObjectName("appogee_inp");
        appogee_inp->setGeometry(QRect(120, 140, 113, 31));

        retranslateUi(modif_info);

        QMetaObject::connectSlotsByName(modif_info);
    } // setupUi

    void retranslateUi(QDialog *modif_info)
    {
        modif_info->setWindowTitle(QCoreApplication::translate("modif_info", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("modif_info", "Modifier", nullptr));
        pushButton_2->setText(QCoreApplication::translate("modif_info", "Quitter", nullptr));
        note_label->setText(QCoreApplication::translate("modif_info", "nouveau Apogee :", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("modif_info", "Page pr\303\251c\303\251dente", nullptr));
        prenom_label->setText(QCoreApplication::translate("modif_info", "nouveau email :", nullptr));
        module_label_2->setText(QCoreApplication::translate("modif_info", "Apogee :", nullptr));
        label_2->setText(QCoreApplication::translate("modif_info", "S\303\251lectionner l'etudiant  :", nullptr));
        label->setText(QCoreApplication::translate("modif_info", "Modifier les infos d'un \303\251tudiant :", nullptr));
        enseignant_label->setText(QCoreApplication::translate("modif_info", "nouveau pr\303\251nom :", nullptr));
        module_label->setText(QCoreApplication::translate("modif_info", "nouveau nom :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modif_info: public Ui_modif_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIF_INFO_H
