#ifndef LISTER_H
#define LISTER_H

#include <QDialog>

namespace Ui {
class lister;
}

class lister : public QDialog
{
    Q_OBJECT

public:
    explicit lister(QWidget *parent = nullptr);
    ~lister();

private slots:

    void on_quiter_butt_clicked();
    void on_select_Button_clicked();


private:
    Ui::lister *ui;
};

#endif // LISTER_H
