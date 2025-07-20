#include "modif_info.h"
#include "ui_modif_info.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

modif_info::modif_info(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::modif_info)
{
    ui->setupUi(this);
}

modif_info::~modif_info()
{
    delete ui;
}

void modif_info::on_pushButton_2_clicked()
{
    close();  // Quitter
}

void modif_info::on_commandLinkButton_clicked()
{
    close();  // Page précédente
}

void modif_info::on_pushButton_clicked()
{
    QString oldApogee = ui->appogee_inp->text().trimmed();
    QString newNom = ui->nom_inp->text().trimmed();
    QString newPrenom = ui->prenominp->text().trimmed();
    QString newApogee = ui->nvappo_inp->text().trimmed();
    QString newEmail = ui->email_inp->text().trimmed();

    if (oldApogee.isEmpty() || newNom.isEmpty() || newPrenom.isEmpty() || newApogee.isEmpty() || newEmail.isEmpty()) {
        QMessageBox::warning(this, "Champs manquants", "Veuillez remplir tous les champs.");
        return;
    }

    // Check if newApogee already exists and is not same as old one
    if (newApogee != oldApogee) {
        QSqlQuery checkQuery;
        checkQuery.prepare("SELECT COUNT(*) FROM Etudiant WHERE id_etudiant = :newApogee");
        checkQuery.bindValue(":newApogee", newApogee);
        if (checkQuery.exec() && checkQuery.next()) {
            if (checkQuery.value(0).toInt() > 0) {
                QMessageBox::warning(this, "Conflit ID", "Le nouvel Apogée existe déjà. Veuillez choisir un autre.");
                return;
            }
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de vérification: " + checkQuery.lastError().text());
            return;
        }
    }

    // Proceed with update
    QSqlQuery query;
    query.prepare("UPDATE Etudiant SET nom = :nom, prenom = :prenom, id_etudiant = :newApogee, email = :email WHERE id_etudiant = :oldApogee");
    query.bindValue(":nom", newNom);
    query.bindValue(":prenom", newPrenom);
    query.bindValue(":newApogee", newApogee);
    query.bindValue(":email", newEmail);
    query.bindValue(":oldApogee", oldApogee);

    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Les informations ont été mises à jour.");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la mise à jour: " + query.lastError().text());
    }
}
