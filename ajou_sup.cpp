#include "ajou_sup.h"
#include "ui_ajou_sup.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

ajou_sup::ajou_sup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ajou_sup)
{
    ui->setupUi(this);
}

ajou_sup::~ajou_sup()
{
    delete ui;
}

void ajou_sup::on_quiter_pushButton_clicked()
{
    close();
}

void ajou_sup::on_ajouter_pushButton_clicked()
{
    QString nom = ui->lineEdit_nom->text().trimmed();
    QString prenom = ui->lineEdit_prenom->text().trimmed();
    QString email = ui->lineEdit_email->text().trimmed();

    if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Champs manquants", "Veuillez remplir tous les champs (nom, prénom, email).");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO Etudiant (nom, prenom, email) VALUES (:nom, :prenom, :email)");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout :\n" + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Succès", "Étudiant ajouté avec succès !");
    ui->lineEdit_nom->clear();
    ui->lineEdit_prenom->clear();
    ui->lineEdit_email->clear();
    ui->lineEdit_id->clear();
}

void ajou_sup::on_supprimer_pushButton_clicked()
{
    QString id = ui->lineEdit_id->text().trimmed();

    if (id.isEmpty()) {
        QMessageBox::warning(this, "Champ manquant", "Veuillez renseigner l'ID de l'étudiant à supprimer.");
        return;
    }

    bool ok;
    int idInt = id.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur", "L'ID doit être un nombre entier valide.");
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM Etudiant WHERE id_etudiant = :id");
    query.bindValue(":id", idInt);

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression :\n" + query.lastError().text());
        return;
    }

    if (query.numRowsAffected() == 0) {
        QMessageBox::information(this, "Info", "Aucun étudiant trouvé avec cet ID.");
        return;
    }

    QMessageBox::information(this, "Succès", "Étudiant supprimé !");
    ui->lineEdit_id->clear();
    ui->lineEdit_nom->clear();
    ui->lineEdit_prenom->clear();
    ui->lineEdit_email->clear();
}
