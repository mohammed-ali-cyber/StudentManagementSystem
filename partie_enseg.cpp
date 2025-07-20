#include "partie_enseg.h"
#include "ui_partie_enseg.h"
#include <QDesktopServices>
#include <QUrl>
#include "mainwindow.h"


partie_enseg::partie_enseg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::partie_enseg)
{
    ui->setupUi(this);
}

partie_enseg::~partie_enseg()
{
    delete ui;
}

void partie_enseg::on_select_clicked()
{
    if(ui->modif_note->isChecked()){
        //      this->hide();
        modif_note  modif_note;
        modif_note.setModal(true);
        modif_note.exec();
    }
    else if(ui->modif_info->isChecked()){
        //      this->hide();
        modif_info  modif_info;
        modif_info.setModal(true);
        modif_info.exec();
    }
    else if(ui->lister->isChecked()){
        //      this->hide();
        lister  lister;
        lister.setModal(true);
        lister.exec();
    }
    else if(ui->ajouter->isChecked()){
        //      this->hide();
        ajou_sup  ajou_sup;
        ajou_sup.setModal(true);
        ajou_sup.exec();
    }
    else if(ui->suprimer->isChecked()){
        //      this->hide();
        ajou_sup  ajou_sup;
        ajou_sup.setModal(true);
        ajou_sup.exec();
    }
    else if(ui->filtrer->isChecked()){
        //    this->hide();
        filrer  filrer;
        filrer.setModal(true);
        filrer.exec();
    }
}


void partie_enseg::on_fps_clicked()
{
    QString link="https://fps.uca.ma/#";
    QDesktopServices::openUrl(QUrl(link));
}


void partie_enseg::on_commandLinkButton_clicked()
{
    close();

}


void partie_enseg::on_pushButton_2_clicked()
{
        close();
}

