// databasesetup.cpp
#include "databasesetup.h"
#include <QRandomGenerator>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

DatabaseSetup::DatabaseSetup() {
    db = QSqlDatabase::database();
}

bool DatabaseSetup::createTables() {
    QSqlQuery query;

    // Etudiant table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Etudiant ("
                    "id_etudiant INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "nom VARCHAR(100) NOT NULL,"
                    "prenom VARCHAR(100) NOT NULL,"
                    "email VARCHAR(150) UNIQUE)")) {
        qDebug() << "Error creating Etudiant table:" << query.lastError().text();
        return false;
    }

    // Matiere table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Matiere ("
                    "id_matiere INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "nom VARCHAR(100) NOT NULL)")) {
        qDebug() << "Error creating Matiere table:" << query.lastError().text();
        return false;
    }

    // Professeur table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Professeur ("
                    "id_professeur INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "nom VARCHAR(100) NOT NULL,"
                    "prenom VARCHAR(100) NOT NULL,"
                    "email VARCHAR(150) UNIQUE,"
                    "id_matiere INTEGER UNIQUE,"
                    "FOREIGN KEY (id_matiere) REFERENCES Matiere(id_matiere))")) {
        qDebug() << "Error creating Professeur table:" << query.lastError().text();
        return false;
    }

    // Note table
    if (!query.exec("CREATE TABLE IF NOT EXISTS Note ("
                    "id_note INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "id_etudiant INTEGER,"
                    "id_matiere INTEGER,"
                    "valeur FLOAT CHECK (valeur >= 0 AND valeur <= 20),"
                    "FOREIGN KEY (id_etudiant) REFERENCES Etudiant(id_etudiant),"
                    "FOREIGN KEY (id_matiere) REFERENCES Matiere(id_matiere))")) {
        qDebug() << "Error creating Note table:" << query.lastError().text();
        return false;
    }

    qDebug() << "All tables created successfully";
    return true;
}

bool DatabaseSetup::insertInitialData() {
    QSqlQuery query;


    // Matiere data
    QStringList matieres = {
        "Langues étrangères",
        "Développement personnel",
        "Structure de données",
        "Système d’exploitation",
        "Algèbre relationnel & SQL",
        "Programmation C++",             // ✅ match with partie_etudiant.cpp
        "Programmation JavaScript"       // ✅ match with partie_etudiant.cpp
    };

    for (const QString &matiere : matieres) {
        query.prepare("INSERT INTO Matiere (nom) VALUES (?)");
        query.addBindValue(matiere);
        if (!query.exec()) {
            qDebug() << "Error inserting matiere:" << query.lastError().text();
            return false;
        }
    }

    // Etudiant data
    QStringList noms = {"Benali", "El Amrani", "Chakir", "Bouzidi", "Tazi",
                        "Harrak", "Saadi", "Mansouri", "Belkadi", "Daoudi"};
    QStringList prenoms = {"Mohamed", "Fatima", "Karim", "Amina", "Youssef",
                           "Leila", "Hassan", "Nadia", "Omar", "Samira"};

    for (int i = 0; i < noms.size(); ++i) {
        QString email = prenoms[i].toLower() + "." + noms[i].toLower() + "@email.com";

        query.prepare("INSERT INTO Etudiant (nom, prenom, email) VALUES (?, ?, ?)");
        query.addBindValue(noms[i]);
        query.addBindValue(prenoms[i]);
        query.addBindValue(email);
        if (!query.exec()) {
            qDebug() << "Error inserting etudiant:" << query.lastError().text();
            return false;
        }
    }

    // Professeur data (one per matiere)
    QStringList profNoms = {"El Fassi", "Rahmouni", "Berrada", "Cherkaoui",
                            "Bennani", "Lahlou", "Marrakchi"};
    QStringList profPrenoms = {"Ahmed", "Khadija", "Mustapha", "Zineb",
                               "Abdellah", "Nabil", "Salma"};

    for (int i = 0; i < profNoms.size(); ++i) {
        QString email = profPrenoms[i].toLower() + "." + profNoms[i].toLower() + "@email.com";
        int matiereId = i + 1;

        query.prepare("INSERT INTO Professeur (nom, prenom, email, id_matiere) VALUES (?, ?, ?, ?)");
        query.addBindValue(profNoms[i]);
        query.addBindValue(profPrenoms[i]);
        query.addBindValue(email);
        query.addBindValue(matiereId);
        if (!query.exec()) {
            qDebug() << "Error inserting professeur:" << query.lastError().text();
            return false;
        }
    }

    // Insert Notes: one per (etudiant, matiere)
    for (int etudiant = 1; etudiant <= 10; ++etudiant) {
        for (int matiere = 1; matiere <= 7; ++matiere) {
            float score = 10.0 + QRandomGenerator::global()->bounded(8) +
                          QRandomGenerator::global()->bounded(10) / 10.0;

            query.prepare("INSERT INTO Note (id_etudiant, id_matiere, valeur) VALUES (?, ?, ?)");
            query.addBindValue(etudiant);
            query.addBindValue(matiere);
            query.addBindValue(score);
            if (!query.exec()) {
                qDebug() << "Error inserting note:" << query.lastError().text();
                return false;
            }
        }
    }

    qDebug() << "Initial data inserted successfully";
    return true;
}
