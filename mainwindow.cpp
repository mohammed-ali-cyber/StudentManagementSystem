#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "partie_etudiant.h"
#include "partie_enseg.h"
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_butt_etudiant_clicked()
{
    QString apogee = ui->lineEdit_apogee->text().trimmed();
    QString email = ui->lineEdit_email->text().trimmed();

    if (apogee.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Veuillez remplir tous les champs.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM Etudiant WHERE id_etudiant = :id AND email = :email");
    query.bindValue(":id", apogee);
    query.bindValue(":email", email);

    if (query.exec()) {
        if (query.next()) {
            int id_etudiant = query.value("id_etudiant").toInt();
            partie_etudiant partie(id_etudiant);
            partie.setModal(true);
            partie.exec();
        } else {
            QMessageBox::critical(this, "Échec de connexion", "Identifiants étudiant incorrects.");
        }
    } else {
        QMessageBox::critical(this, "Erreur SQL", query.lastError().text());
    }
}

void MainWindow::on_butt_ensegnant_clicked()
{
    QString id = ui->lineEdit_apogee->text().trimmed();
    QString email = ui->lineEdit_email->text().trimmed();

    if (id.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Veuillez remplir tous les champs.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM Professeur WHERE id_professeur = :id AND email = :email");
    query.bindValue(":id", id);
    query.bindValue(":email", email);

    if (query.exec()) {
        if (query.next()) {
            partie_enseg partie_enseg;
            partie_enseg.setModal(true);
            partie_enseg.exec();
        } else {
            QMessageBox::critical(this, "Échec de connexion", "Identifiants enseignant incorrects.");
        }
    } else {
        QMessageBox::critical(this, "Erreur SQL", query.lastError().text());
    }
}

void MainWindow::on_link_clicked()
{
    QDesktopServices::openUrl(QUrl("https://fps.uca.ma/#"));
}

void MainWindow::on_butt_etudiant_2_clicked()
{
    close();
}

