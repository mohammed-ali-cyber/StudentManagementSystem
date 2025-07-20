#ifndef AJOU_SUP_H
#define AJOU_SUP_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class ajou_sup;
}

class ajou_sup : public QDialog
{
    Q_OBJECT

public:
    explicit ajou_sup(QWidget *parent = nullptr);
    ~ajou_sup();

private slots:
    void on_quiter_pushButton_clicked();
    void on_ajouter_pushButton_clicked();
    void on_supprimer_pushButton_clicked();

private:
    Ui::ajou_sup *ui;
    QSqlDatabase db;

    bool connectToDatabase();
    void clearFields();
};

#endif // AJOU_SUP_H
