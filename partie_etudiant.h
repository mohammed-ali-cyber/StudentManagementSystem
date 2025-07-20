#ifndef PARTIE_ETUDIANT_H
#define PARTIE_ETUDIANT_H

#include <QDialog>
#include <QMap>
#include <QLineEdit>

namespace Ui {
class partie_etudiant;
}

class partie_etudiant : public QDialog
{
    Q_OBJECT

public:
    explicit partie_etudiant(int etudiantId, QWidget *parent = nullptr);
    ~partie_etudiant();

private slots:
    void on_Quitter_clicked();

    void on_fps_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::partie_etudiant *ui;
    int id_etudiant;
    QMap<QString, QLineEdit*> matiereChamps;

    void chargerNotes();
    void calculerMoyenne();
};

#endif // PARTIE_ETUDIANT_H
