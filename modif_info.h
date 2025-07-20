#ifndef MODIF_INFO_H
#define MODIF_INFO_H

#include <QDialog>

namespace Ui {
class modif_info;
}

class modif_info : public QDialog
{
    Q_OBJECT

public:
    explicit modif_info(QWidget *parent = nullptr);
    ~modif_info();

private slots:
    void on_pushButton_2_clicked();
    void on_commandLinkButton_clicked();
    void on_pushButton_clicked();  // ✅ Add this

private:
    Ui::modif_info *ui;
};

#endif // MODIF_INFO_H
