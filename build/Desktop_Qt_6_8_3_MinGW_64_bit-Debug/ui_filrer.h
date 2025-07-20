/********************************************************************************
** Form generated from reading UI file 'filrer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILRER_H
#define UI_FILRER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_filrer
{
public:
    QLabel *prenom_label;
    QLabel *label_7;
    QPushButton *moduleButt;
    QLabel *note_label;
    QLineEdit *note_inp_min;
    QLabel *label;
    QLineEdit *prenom_inp;
    QLabel *enseignant_label;
    QLabel *prenom_label_2;
    QPushButton *apogee_Butt;
    QLineEdit *enseignant_inp;
    QLineEdit *note_inp_max;
    QPushButton *note_Butt;
    QFrame *line;
    QLabel *module_label;
    QPushButton *prenom_Butt;
    QPushButton *enseignant_Butt;
    QLineEdit *apogee_inp;
    QTextEdit *text_result;
    QComboBox *module_inp;

    void setupUi(QDialog *filrer)
    {
        if (filrer->objectName().isEmpty())
            filrer->setObjectName("filrer");
        filrer->resize(1237, 560);
        prenom_label = new QLabel(filrer);
        prenom_label->setObjectName("prenom_label");
        prenom_label->setGeometry(QRect(90, 230, 181, 31));
        prenom_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        label_7 = new QLabel(filrer);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 340, 561, 51));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        moduleButt = new QPushButton(filrer);
        moduleButt->setObjectName("moduleButt");
        moduleButt->setGeometry(QRect(390, 110, 80, 31));
        note_label = new QLabel(filrer);
        note_label->setObjectName("note_label");
        note_label->setGeometry(QRect(90, 190, 181, 31));
        note_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        note_inp_min = new QLineEdit(filrer);
        note_inp_min->setObjectName("note_inp_min");
        note_inp_min->setGeometry(QRect(270, 190, 51, 31));
        label = new QLabel(filrer);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 641, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        prenom_inp = new QLineEdit(filrer);
        prenom_inp->setObjectName("prenom_inp");
        prenom_inp->setGeometry(QRect(270, 230, 113, 31));
        enseignant_label = new QLabel(filrer);
        enseignant_label->setObjectName("enseignant_label");
        enseignant_label->setGeometry(QRect(90, 150, 181, 31));
        enseignant_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        prenom_label_2 = new QLabel(filrer);
        prenom_label_2->setObjectName("prenom_label_2");
        prenom_label_2->setGeometry(QRect(90, 270, 181, 31));
        prenom_label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        apogee_Butt = new QPushButton(filrer);
        apogee_Butt->setObjectName("apogee_Butt");
        apogee_Butt->setGeometry(QRect(390, 270, 80, 31));
        enseignant_inp = new QLineEdit(filrer);
        enseignant_inp->setObjectName("enseignant_inp");
        enseignant_inp->setGeometry(QRect(270, 150, 113, 31));
        note_inp_max = new QLineEdit(filrer);
        note_inp_max->setObjectName("note_inp_max");
        note_inp_max->setGeometry(QRect(330, 190, 51, 31));
        note_Butt = new QPushButton(filrer);
        note_Butt->setObjectName("note_Butt");
        note_Butt->setGeometry(QRect(390, 190, 80, 31));
        line = new QFrame(filrer);
        line->setObjectName("line");
        line->setGeometry(QRect(-560, 310, 1591, 31));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        module_label = new QLabel(filrer);
        module_label->setObjectName("module_label");
        module_label->setGeometry(QRect(90, 110, 181, 31));
        module_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        prenom_Butt = new QPushButton(filrer);
        prenom_Butt->setObjectName("prenom_Butt");
        prenom_Butt->setGeometry(QRect(390, 230, 80, 31));
        enseignant_Butt = new QPushButton(filrer);
        enseignant_Butt->setObjectName("enseignant_Butt");
        enseignant_Butt->setGeometry(QRect(390, 150, 80, 31));
        apogee_inp = new QLineEdit(filrer);
        apogee_inp->setObjectName("apogee_inp");
        apogee_inp->setGeometry(QRect(270, 270, 113, 31));
        text_result = new QTextEdit(filrer);
        text_result->setObjectName("text_result");
        text_result->setGeometry(QRect(650, 330, 381, 181));
        module_inp = new QComboBox(filrer);
        module_inp->addItem(QString());
        module_inp->addItem(QString());
        module_inp->addItem(QString());
        module_inp->addItem(QString());
        module_inp->addItem(QString());
        module_inp->addItem(QString());
        module_inp->addItem(QString());
        module_inp->setObjectName("module_inp");
        module_inp->setGeometry(QRect(270, 110, 111, 31));

        retranslateUi(filrer);

        QMetaObject::connectSlotsByName(filrer);
    } // setupUi

    void retranslateUi(QDialog *filrer)
    {
        filrer->setWindowTitle(QCoreApplication::translate("filrer", "Dialog", nullptr));
        prenom_label->setText(QCoreApplication::translate("filrer", "Par pr\303\251nom :", nullptr));
        label_7->setText(QCoreApplication::translate("filrer", "Affichage :", nullptr));
        moduleButt->setText(QCoreApplication::translate("filrer", "Filtrer", nullptr));
        note_label->setText(QCoreApplication::translate("filrer", "Par note :", nullptr));
        label->setText(QCoreApplication::translate("filrer", "Filtrer les \303\251tudiants :", nullptr));
        enseignant_label->setText(QCoreApplication::translate("filrer", "Par enseignant :", nullptr));
        prenom_label_2->setText(QCoreApplication::translate("filrer", "Par apogee :", nullptr));
        apogee_Butt->setText(QCoreApplication::translate("filrer", "Filtrer", nullptr));
        note_Butt->setText(QCoreApplication::translate("filrer", "Filtrer", nullptr));
        module_label->setText(QCoreApplication::translate("filrer", "Par module :", nullptr));
        prenom_Butt->setText(QCoreApplication::translate("filrer", "Filtrer", nullptr));
        enseignant_Butt->setText(QCoreApplication::translate("filrer", "Filtrer", nullptr));
        module_inp->setItemText(0, QCoreApplication::translate("filrer", "Langues \303\251trang\303\250res", nullptr));
        module_inp->setItemText(1, QCoreApplication::translate("filrer", "D\303\251veloppement personnel", nullptr));
        module_inp->setItemText(2, QCoreApplication::translate("filrer", "Structure de donn\303\251es", nullptr));
        module_inp->setItemText(3, QCoreApplication::translate("filrer", "Syst\303\250me d\342\200\231exploitation", nullptr));
        module_inp->setItemText(4, QCoreApplication::translate("filrer", "Alg\303\250bre relationnel & SQL", nullptr));
        module_inp->setItemText(5, QCoreApplication::translate("filrer", "Programmation C++", nullptr));
        module_inp->setItemText(6, QCoreApplication::translate("filrer", "Programmation JavaScript", nullptr));

    } // retranslateUi

};

namespace Ui {
    class filrer: public Ui_filrer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILRER_H
