#include "lister.h"
#include "ui_lister.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

lister::lister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::lister)
{
    ui->setupUi(this);

    // Vider puis remplir le combo des modules pour éviter les doublons
    ui->module_inp->clear();

    QStringList modules = {
        "Langues étrangères",
        "Développement personnel",
        "Structure de données",
        "Système d’exploitation",
        "Algèbre relationnel & SQL",
        "Programmation C++",
        "Programmation JavaScript"
    };
    ui->module_inp->addItems(modules);
}

lister::~lister()
{
    delete ui;
}

void lister::on_quiter_butt_clicked()
{
    this->close();
}

void lister::on_select_Button_clicked()
{
    QSqlQuery query;
    ui->text_result->clear();

    if (ui->radio_prenom->isChecked()) {
        query.prepare("SELECT prenom, nom FROM Etudiant ORDER BY prenom ASC");
    }
    else if (ui->radio_nom->isChecked()) {
        query.prepare("SELECT prenom, nom FROM Etudiant ORDER BY nom ASC");
    }
    else if (ui->radio_ens->isChecked()) {
        query.prepare(R"(
            SELECT E.prenom, E.nom
            FROM Etudiant E
            WHERE NOT EXISTS (
                SELECT 1 FROM Note N
                WHERE N.id_etudiant = E.id_etudiant AND N.valeur < 10
            )
        )");
    }
    else if (ui->radio_valid->isChecked()) {
        QString module = ui->module_inp->currentText();  // ✅ corrigé ici
        if (module.isEmpty()) {
            QMessageBox::warning(this, "Module manquant", "Veuillez sélectionner un module.");
            return;
        }
        query.prepare(R"(
            SELECT E.prenom, E.nom
            FROM Etudiant E
            JOIN Note N ON E.id_etudiant = N.id_etudiant
            JOIN Matiere M ON N.id_matiere = M.id_matiere
            WHERE M.nom = :module AND N.valeur >= 10
        )");
        query.bindValue(":module", module);
    }
    else {
        QMessageBox::warning(this, "Filtre manquant", "Veuillez sélectionner un critère.");
        return;
    }

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur SQL", query.lastError().text());
        return;
    }

    while (query.next()) {
        QString prenom = query.value(0).toString();
        QString nom = query.value(1).toString();
        ui->text_result->append(prenom + " " + nom);
    }
}
