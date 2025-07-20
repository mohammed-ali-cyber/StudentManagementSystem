#ifndef MODIF_NOTE_H
#define MODIF_NOTE_H

#include <QDialog>

namespace Ui {
class modif_note;
}

class modif_note : public QDialog
{
    Q_OBJECT

public:
    explicit modif_note(QWidget *parent = nullptr);
    ~modif_note();

private slots:
    void on_pushButton_2_clicked();           // Fermer la fenêtre (bouton Annuler)
    void on_enregistrer_pushButton_clicked(); // Enregistrer la nouvelle note

private:
    Ui::modif_note *ui;
};

#endif // MODIF_NOTE_H
