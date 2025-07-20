/********************************************************************************
** Form generated from reading UI file 'lister.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTER_H
#define UI_LISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_lister
{
public:
    QLabel *label_2;
    QPushButton *quiter_butt;
    QRadioButton *radio_nom;
    QLabel *label_3;
    QRadioButton *radio_valid;
    QRadioButton *radio_ens;
    QRadioButton *radio_prenom;
    QPushButton *select_Button;
    QFrame *line;
    QLabel *label;
    QTextEdit *text_result;
    QComboBox *module_inp;

    void setupUi(QDialog *lister)
    {
        if (lister->objectName().isEmpty())
            lister->setObjectName("lister");
        lister->resize(721, 553);
        label_2 = new QLabel(lister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 581, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 25px;\n"
"}"));
        quiter_butt = new QPushButton(lister);
        quiter_butt->setObjectName("quiter_butt");
        quiter_butt->setGeometry(QRect(220, 280, 101, 24));
        radio_nom = new QRadioButton(lister);
        radio_nom->setObjectName("radio_nom");
        radio_nom->setGeometry(QRect(50, 180, 241, 22));
        label_3 = new QLabel(lister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 330, 281, 51));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 25px;\n"
"}"));
        radio_valid = new QRadioButton(lister);
        radio_valid->setObjectName("radio_valid");
        radio_valid->setGeometry(QRect(50, 240, 161, 22));
        radio_ens = new QRadioButton(lister);
        radio_ens->setObjectName("radio_ens");
        radio_ens->setGeometry(QRect(50, 210, 131, 22));
        radio_prenom = new QRadioButton(lister);
        radio_prenom->setObjectName("radio_prenom");
        radio_prenom->setGeometry(QRect(50, 150, 241, 22));
        select_Button = new QPushButton(lister);
        select_Button->setObjectName("select_Button");
        select_Button->setGeometry(QRect(109, 280, 101, 24));
        line = new QFrame(lister);
        line->setObjectName("line");
        line->setGeometry(QRect(-40, 310, 741, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(lister);
        label->setObjectName("label");
        label->setGeometry(QRect(20, -10, 631, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        text_result = new QTextEdit(lister);
        text_result->setObjectName("text_result");
        text_result->setGeometry(QRect(300, 330, 371, 211));
        module_inp = new QComboBox(lister);
        module_inp->setObjectName("module_inp");
        module_inp->setGeometry(QRect(210, 240, 201, 28));

        retranslateUi(lister);

        QMetaObject::connectSlotsByName(lister);
    } // setupUi

    void retranslateUi(QDialog *lister)
    {
        lister->setWindowTitle(QCoreApplication::translate("lister", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("lister", "s\303\251l\303\251ctionner tous les etudiants de meme :", nullptr));
        quiter_butt->setText(QCoreApplication::translate("lister", "Quitter", nullptr));
        radio_nom->setText(QCoreApplication::translate("lister", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("lister", "Affichage :", nullptr));
        radio_valid->setText(QCoreApplication::translate("lister", "Valid\303\251e un module", nullptr));
        radio_ens->setText(QCoreApplication::translate("lister", "Valid\303\251e la semestre", nullptr));
        radio_prenom->setText(QCoreApplication::translate("lister", "Pr\303\251nom", nullptr));
        select_Button->setText(QCoreApplication::translate("lister", "S\303\251lectionner", nullptr));
        label->setText(QCoreApplication::translate("lister", "Lister Les Etudiants :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lister: public Ui_lister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTER_H
