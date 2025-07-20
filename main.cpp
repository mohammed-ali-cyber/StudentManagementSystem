#include <QApplication> // ✅ Pour les interfaces graphiques
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QString>
#include <QDir>
#include <QFile>
#include "databasesetup.h"
#include "mainwindow.h" // ✅ N'oublie pas si tu as une fenêtre principale

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);  // ✅ QApplication au lieu de QCoreApplication

    // === Connexion à la base de données SQLite ===
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    // Optionnel : supprimer le fichier existant pour repartir de zéro
    QString dbPath = QDir::currentPath() + "/gestion_etudiants.db";
    // QFile::remove(dbPath); // ← décommente pour recréer la base à chaque fois

    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qCritical() << "Erreur de connexion à la base de données:" << db.lastError().text();
        return 1;
    }

    qDebug() << "Database: connection ok";
    qDebug() << "Database path:" << dbPath;

    // === Création des tables et insertion des données initiales ===
    DatabaseSetup dbSetup;

    if (dbSetup.createTables()) {
        qDebug() << "Tables created successfully";

        if (dbSetup.insertInitialData()) {
            qDebug() << "Initial data inserted successfully";
        } else {
            qDebug() << "Failed to insert initial data";
        }
    } else {
        qDebug() << "Failed to create tables";
    }

    // === Lancer l'application avec interface graphique ===
    MainWindow w;
    w.show();

    return app.exec();
}
