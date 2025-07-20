#include "partie_etudiant.h"
#include "ui_partie_etudiant.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QUrl>
#include <QDesktopServices>


partie_etudiant::partie_etudiant(int etudiantId, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::partie_etudiant)
    , id_etudiant(etudiantId)
{
    ui->setupUi(this);

    // Associez les noms des matières aux QLineEdit
    matiereChamps["Algèbre relationnel & SQL"] = ui->lineEdit_1;
    matiereChamps["Programmation C++"] = ui->lineEdit_2;
    matiereChamps["Structure de données"] = ui->lineEdit_4;
    matiereChamps["Programmation JavaScript"] = ui->lineEdit_3;
    matiereChamps["Système d’exploitation"] = ui->lineEdit_7;
    matiereChamps["Développement personnel"] = ui->lineEdit_moyenne;
    matiereChamps["Langues étrangères"] = ui->lineEdit_6;

    chargerNotes();
    calculerMoyenne();
}

partie_etudiant::~partie_etudiant()
{
    delete ui;
}

void partie_etudiant::chargerNotes()
{
    QSqlQuery query;
    query.prepare(R"(
        SELECT m.nom, n.valeur
        FROM Note n
        JOIN Matiere m ON m.id_matiere = n.id_matiere
        WHERE n.id_etudiant = :id
    )");
    query.bindValue(":id", id_etudiant);

    if (query.exec()) {
        while (query.next()) {
            QString matiere = query.value(0).toString();
            double note = query.value(1).toDouble();

            if (matiereChamps.contains(matiere)) {
                matiereChamps[matiere]->setText(QString::number(note));
            }
        }
    } else {
        QMessageBox::critical(this, "Erreur SQL", query.lastError().text());
    }
}

void partie_etudiant::calculerMoyenne()
{
    double total = 0;
    int count = 0;

    for (auto champ : matiereChamps) {
        bool ok;
        double note = champ->text().toDouble(&ok);
        if (ok) {
            total += note;
            count++;
        }
    }

    double moyenne = (count > 0) ? (total / count) : 0;
    ui->lineEdit_moyenne->setText(QString::number(moyenne, 'f', 2));
}

void partie_etudiant::on_Quitter_clicked()
{
    close();
}


void partie_etudiant::on_fps_clicked()
{
    QDesktopServices::openUrl(QUrl("https://fps.uca.ma/#"));

}


void partie_etudiant::on_commandLinkButton_clicked()
{
    close();
    }

