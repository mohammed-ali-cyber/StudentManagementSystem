/********************************************************************************
** Form generated from reading UI file 'modif_note.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIF_NOTE_H
#define UI_MODIF_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modif_note
{
public:
    QLabel *enseignant_label;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_2;
    QLabel *label;
    QFrame *line;
    QPushButton *enregistrer_pushButton;
    QLabel *module_label;
    QComboBox *comboBox_module;
    QLineEdit *lineEdit_nouvelleNote;
    QLabel *enseignant_label_2;

    void setupUi(QDialog *modif_note)
    {
        if (modif_note->objectName().isEmpty())
            modif_note->setObjectName("modif_note");
        modif_note->resize(961, 497);
        enseignant_label = new QLabel(modif_note);
        enseignant_label->setObjectName("enseignant_label");
        enseignant_label->setGeometry(QRect(80, 150, 91, 31));
        enseignant_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        lineEdit_id = new QLineEdit(modif_note);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(180, 100, 61, 31));
        pushButton_2 = new QPushButton(modif_note);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 220, 80, 24));
        label = new QLabel(modif_note);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 641, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:40px;\n"
"	}"));
        line = new QFrame(modif_note);
        line->setObjectName("line");
        line->setGeometry(QRect(-30, 260, 441, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        enregistrer_pushButton = new QPushButton(modif_note);
        enregistrer_pushButton->setObjectName("enregistrer_pushButton");
        enregistrer_pushButton->setGeometry(QRect(230, 220, 80, 24));
        module_label = new QLabel(modif_note);
        module_label->setObjectName("module_label");
        module_label->setGeometry(QRect(80, 100, 91, 31));
        module_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        comboBox_module = new QComboBox(modif_note);
        comboBox_module->setObjectName("comboBox_module");
        comboBox_module->setGeometry(QRect(190, 150, 181, 31));
        lineEdit_nouvelleNote = new QLineEdit(modif_note);
        lineEdit_nouvelleNote->setObjectName("lineEdit_nouvelleNote");
        lineEdit_nouvelleNote->setGeometry(QRect(350, 100, 61, 31));
        enseignant_label_2 = new QLabel(modif_note);
        enseignant_label_2->setObjectName("enseignant_label_2");
        enseignant_label_2->setGeometry(QRect(270, 100, 61, 31));
        enseignant_label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));

        retranslateUi(modif_note);

        QMetaObject::connectSlotsByName(modif_note);
    } // setupUi

    void retranslateUi(QDialog *modif_note)
    {
        modif_note->setWindowTitle(QCoreApplication::translate("modif_note", "Dialog", nullptr));
        enseignant_label->setText(QCoreApplication::translate("modif_note", "Module :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("modif_note", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("modif_note", "Modifier Les Notes D'un Etudiant :", nullptr));
        enregistrer_pushButton->setText(QCoreApplication::translate("modif_note", "Enregistrer", nullptr));
        module_label->setText(QCoreApplication::translate("modif_note", "Apogee :", nullptr));
        enseignant_label_2->setText(QCoreApplication::translate("modif_note", "Note :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modif_note: public Ui_modif_note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIF_NOTE_H
