#ifndef PARTIE_ENSEG_H
#define PARTIE_ENSEG_H
#include"mainwindow.h"
#include"filrer.h"
#include"ajou_sup.h"
#include"lister.h"
#include"modif_info.h"
#include"modif_note.h"

#include <QDialog>

namespace Ui {
class partie_enseg;
}

class partie_enseg : public QDialog
{
    Q_OBJECT

public:
    explicit partie_enseg(QWidget *parent = nullptr);
    ~partie_enseg();

private slots:
    void on_select_clicked();

    void on_fps_clicked();

    void on_commandLinkButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::partie_enseg *ui;
};

#endif // PARTIE_ENSEG_H
