#include "modif_note.h"
#include "ui_modif_note.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

modif_note::modif_note(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::modif_note)
{
    ui->setupUi(this);

    // Remplir le comboBox module avec les noms des modules
    QStringList modules = {
        "Langues étrangères",
        "Développement personnel",
        "Structure de données",
        "Système d’exploitation",
        "Algèbre relationnel & SQL",
        "Programmation C++",
        "Programmation JavaScript"
    };
    ui->comboBox_module->addItems(modules);
}

modif_note::~modif_note()
{
    delete ui;
}

void modif_note::on_pushButton_2_clicked()
{
    close();
}

void modif_note::on_enregistrer_pushButton_clicked()
{
    // Récupérer les données
    QString idText = ui->lineEdit_id->text().trimmed();
    QString moduleName = ui->comboBox_module->currentText();
    QString noteText = ui->lineEdit_nouvelleNote->text().trimmed();

    if (idText.isEmpty() || noteText.isEmpty()) {
        QMessageBox::warning(this, "Champs manquants", "Veuillez remplir tous les champs.");
        return;
    }

    bool ok;
    int idEtudiant = idText.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur", "L'ID doit être un nombre entier valide.");
        return;
    }

    double nouvelleNote = noteText.toDouble(&ok);
    if (!ok || nouvelleNote < 0.0 || nouvelleNote > 20.0) {
        QMessageBox::warning(this, "Erreur", "La note doit être un nombre entre 0 et 20.");
        return;
    }

    // Trouver l'id_matiere correspondant au module sélectionné
    QSqlQuery query;
    query.prepare("SELECT id_matiere FROM Matiere WHERE nom = :nom");
    query.bindValue(":nom", moduleName);
    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "Erreur", "Impossible de trouver le module sélectionné.");
        return;
    }
    int idMatiere = query.value(0).toInt();

    // Vérifier si une note existe déjà pour cet étudiant et ce module
    query.prepare("SELECT id_note FROM Note WHERE id_etudiant = :idEtudiant AND id_matiere = :idMatiere");
    query.bindValue(":idEtudiant", idEtudiant);
    query.bindValue(":idMatiere", idMatiere);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la recherche de la note :\n" + query.lastError().text());
        return;
    }

    if (query.next()) {
        // Note existante : faire un UPDATE
        int idNote = query.value(0).toInt();
        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE Note SET valeur = :valeur WHERE id_note = :idNote");
        updateQuery.bindValue(":valeur", nouvelleNote);
        updateQuery.bindValue(":idNote", idNote);
        if (!updateQuery.exec()) {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la mise à jour de la note :\n" + updateQuery.lastError().text());
            return;
        }
        QMessageBox::information(this, "Succès", "Note mise à jour avec succès.");
    } else {
        // Pas de note existante : faire un INSERT
        QSqlQuery insertQuery;
        insertQuery.prepare("INSERT INTO Note (id_etudiant, id_matiere, valeur) VALUES (:idEtudiant, :idMatiere, :valeur)");
        insertQuery.bindValue(":idEtudiant", idEtudiant);
        insertQuery.bindValue(":idMatiere", idMatiere);
        insertQuery.bindValue(":valeur", nouvelleNote);
        if (!insertQuery.exec()) {
            QMessageBox::critical(this, "Erreur", "Erreur lors de l'insertion de la note :\n" + insertQuery.lastError().text());
            return;
        }
        QMessageBox::information(this, "Succès", "Note ajoutée avec succès.");
    }

    // Optionnel : vider les champs
    ui->lineEdit_id->clear();
    ui->lineEdit_nouvelleNote->clear();
    ui->comboBox_module->setCurrentIndex(0);
}
