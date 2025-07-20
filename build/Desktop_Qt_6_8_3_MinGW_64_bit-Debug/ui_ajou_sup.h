/********************************************************************************
** Form generated from reading UI file 'ajou_sup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOU_SUP_H
#define UI_AJOU_SUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajou_sup
{
public:
    QLabel *label;
    QLabel *prenom_label_2;
    QLabel *enseignant_label;
    QPushButton *ajouter_pushButton;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_nom;
    QPushButton *supprimer_pushButton;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_id;
    QLabel *prenom_label;
    QLabel *module_label;
    QPushButton *quiter_pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *ajou_sup)
    {
        if (ajou_sup->objectName().isEmpty())
            ajou_sup->setObjectName("ajou_sup");
        ajou_sup->resize(866, 530);
        label = new QLabel(ajou_sup);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 631, 91));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        prenom_label_2 = new QLabel(ajou_sup);
        prenom_label_2->setObjectName("prenom_label_2");
        prenom_label_2->setGeometry(QRect(30, 220, 181, 31));
        prenom_label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        enseignant_label = new QLabel(ajou_sup);
        enseignant_label->setObjectName("enseignant_label");
        enseignant_label->setGeometry(QRect(30, 180, 181, 31));
        enseignant_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        ajouter_pushButton = new QPushButton(ajou_sup);
        ajouter_pushButton->setObjectName("ajouter_pushButton");
        ajouter_pushButton->setGeometry(QRect(160, 320, 80, 24));
        lineEdit_email = new QLineEdit(ajou_sup);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(210, 220, 113, 31));
        lineEdit_nom = new QLineEdit(ajou_sup);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(210, 140, 113, 31));
        supprimer_pushButton = new QPushButton(ajou_sup);
        supprimer_pushButton->setObjectName("supprimer_pushButton");
        supprimer_pushButton->setGeometry(QRect(260, 320, 80, 24));
        lineEdit_prenom = new QLineEdit(ajou_sup);
        lineEdit_prenom->setObjectName("lineEdit_prenom");
        lineEdit_prenom->setGeometry(QRect(210, 180, 113, 31));
        lineEdit_id = new QLineEdit(ajou_sup);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(210, 260, 113, 31));
        prenom_label = new QLabel(ajou_sup);
        prenom_label->setObjectName("prenom_label");
        prenom_label->setGeometry(QRect(30, 260, 181, 31));
        prenom_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        module_label = new QLabel(ajou_sup);
        module_label->setObjectName("module_label");
        module_label->setGeometry(QRect(30, 140, 181, 31));
        module_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        quiter_pushButton = new QPushButton(ajou_sup);
        quiter_pushButton->setObjectName("quiter_pushButton");
        quiter_pushButton->setGeometry(QRect(360, 320, 80, 24));
        label_2 = new QLabel(ajou_sup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 90, 391, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 25px;\n"
"}"));
        label_3 = new QLabel(ajou_sup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 265, 241, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        retranslateUi(ajou_sup);

        QMetaObject::connectSlotsByName(ajou_sup);
    } // setupUi

    void retranslateUi(QDialog *ajou_sup)
    {
        ajou_sup->setWindowTitle(QCoreApplication::translate("ajou_sup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ajou_sup", "Ajout & Supression :", nullptr));
        prenom_label_2->setText(QCoreApplication::translate("ajou_sup", "Email :", nullptr));
        enseignant_label->setText(QCoreApplication::translate("ajou_sup", "Pr\303\251nom :", nullptr));
        ajouter_pushButton->setText(QCoreApplication::translate("ajou_sup", "Ajouter", nullptr));
        supprimer_pushButton->setText(QCoreApplication::translate("ajou_sup", "Sumpimer", nullptr));
        prenom_label->setText(QCoreApplication::translate("ajou_sup", "Apogee :", nullptr));
        module_label->setText(QCoreApplication::translate("ajou_sup", "Nom :", nullptr));
        quiter_pushButton->setText(QCoreApplication::translate("ajou_sup", "Quitter", nullptr));
        label_2->setText(QCoreApplication::translate("ajou_sup", "Veuillez remplire la formulaire :", nullptr));
        label_3->setText(QCoreApplication::translate("ajou_sup", "*Ce champ sert uniquement \303\240 la supression.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajou_sup: public Ui_ajou_sup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOU_SUP_H
