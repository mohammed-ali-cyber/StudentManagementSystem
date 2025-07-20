#include "filrer.h"
#include "ui_filrer.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>

filrer::filrer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::filrer)
{
    ui->setupUi(this);

    // Vider d'abord pour éviter les doublons
    ui->module_inp->clear();

    // Ajouter les modules
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

    connect(ui->moduleButt, &QPushButton::clicked, this, &filrer::filterByModule);
    connect(ui->enseignant_Butt, &QPushButton::clicked, this, &filrer::filterByEnseignant);
    connect(ui->note_Butt, &QPushButton::clicked, this, &filrer::filterByNote);
    connect(ui->prenom_Butt, &QPushButton::clicked, this, &filrer::filterByPrenom);
    connect(ui->apogee_Butt, &QPushButton::clicked, this, &filrer::filterByApogee);
}

filrer::~filrer()
{
    delete ui;
}

void filrer::filterByModule()
{
    QString module = ui->module_inp->currentText();

    if (module.isEmpty()) {
        QMessageBox::warning(this, "Champ vide", "Veuillez saisir un nom de module.");
        return;
    }

    QSqlQuery query;
    query.prepare(R"(
        SELECT E.prenom, E.nom, M.nom, N.valeur
        FROM Etudiant E
        JOIN Note N ON E.id_etudiant = N.id_etudiant
        JOIN Matiere M ON M.id_matiere = N.id_matiere
        WHERE M.nom = :module
    )");
    query.bindValue(":module", module);

    if (query.exec()) {
        ui->text_result->clear();
        while (query.next()) {
            QString prenom = query.value(0).toString();
            QString nom = query.value(1).toString();
            QString matiere = query.value(2).toString();
            double note = query.value(3).toDouble();

            QString line = QString("%1 %2 - %3: %4")
                               .arg(prenom)
                               .arg(nom)
                               .arg(matiere)
                               .arg(QString::number(note, 'f', 1));  // ✅ une seule décimale
            ui->text_result->append(line);
        }
    } else {
        ui->text_result->setText("Erreur: " + query.lastError().text());
    }
}

void filrer::filterByEnseignant()
{
    QString enseignant = ui->enseignant_inp->text().trimmed();

    if (enseignant.isEmpty()) {
        QMessageBox::warning(this, "Champ vide", "Veuillez saisir un nom d'enseignant.");
        return;
    }

    QSqlQuery query;
    query.prepare(R"(
        SELECT E.prenom, E.nom, M.nom, N.valeur
        FROM Professeur P
        JOIN Matiere M ON M.id_matiere = P.id_matiere
        JOIN Note N ON N.id_matiere = M.id_matiere
        JOIN Etudiant E ON E.id_etudiant = N.id_etudiant
        WHERE P.nom = :enseignant OR P.prenom = :enseignant
    )");
    query.bindValue(":enseignant", enseignant);

    if (query.exec()) {
        ui->text_result->clear();
        while (query.next()) {
            QString line = QString("%1 %2 - %3: %4")
            .arg(query.value(0).toString())
                .arg(query.value(1).toString())
                .arg(query.value(2).toString())
                .arg(QString::number(query.value(3).toDouble(), 'f', 1));
            ui->text_result->append(line);
        }
    } else {
        ui->text_result->setText("Erreur: " + query.lastError().text());
    }
}

void filrer::filterByNote()
{
    QString minNoteStr = ui->note_inp_min->text().trimmed();
    QString maxNoteStr = ui->note_inp_max->text().trimmed();

    bool okMin, okMax;
    float minNote = minNoteStr.toFloat(&okMin);
    float maxNote = maxNoteStr.toFloat(&okMax);

    if (!okMin || !okMax) {
        QMessageBox::warning(this, "Valeurs invalides", "Veuillez saisir des notes valides.");
        return;
    }

    QSqlQuery query;
    query.prepare(R"(
        SELECT E.prenom, E.nom, M.nom, N.valeur
        FROM Etudiant E
        JOIN Note N ON N.id_etudiant = E.id_etudiant
        JOIN Matiere M ON M.id_matiere = N.id_matiere
        WHERE N.valeur BETWEEN :minNote AND :maxNote
    )");
    query.bindValue(":minNote", minNote);
    query.bindValue(":maxNote", maxNote);

    if (query.exec()) {
        ui->text_result->clear();
        while (query.next()) {
            QString line = QString("%1 %2 - %3: %4")
            .arg(query.value(0).toString())
                .arg(query.value(1).toString())
                .arg(query.value(2).toString())
                .arg(QString::number(query.value(3).toDouble(), 'f', 1));
            ui->text_result->append(line);
        }
    } else {
        ui->text_result->setText("Erreur: " + query.lastError().text());
    }
}

void filrer::filterByPrenom()
{
    QString prenom = ui->prenom_inp->text().trimmed();

    if (prenom.isEmpty()) {
        QMessageBox::warning(this, "Champ vide", "Veuillez saisir un prénom.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT prenom, nom FROM Etudiant WHERE prenom = :prenom");
    query.bindValue(":prenom", prenom);

    if (query.exec()) {
        ui->text_result->clear();
        while (query.next()) {
            ui->text_result->append(query.value(0).toString() + " " + query.value(1).toString());
        }
    } else {
        ui->text_result->setText("Erreur: " + query.lastError().text());
    }
}

void filrer::filterByApogee()
{
    QString apogee = ui->apogee_inp->text().trimmed();

    if (apogee.isEmpty()) {
        QMessageBox::warning(this, "Champ vide", "Veuillez saisir l'ID (apogée).");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT prenom, nom FROM Etudiant WHERE id_etudiant = :id");
    query.bindValue(":id", apogee);

    if (query.exec()) {
        ui->text_result->clear();
        if (query.next()) {
            ui->text_result->append(query.value(0).toString() + " " + query.value(1).toString());
        } else {
            ui->text_result->setText("Aucun étudiant trouvé.");
        }
    } else {
        ui->text_result->setText("Erreur SQL: " + query.lastError().text());
    }
}
