#ifndef FILRER_H
#define FILRER_H

#include <QDialog>

namespace Ui {
class filrer;
}

class filrer : public QDialog
{
    Q_OBJECT

public:
    explicit filrer(QWidget *parent = nullptr);
    ~filrer();

private slots:
    void filterByModule();
    void filterByEnseignant();
    void filterByNote();
    void filterByPrenom();
    void filterByApogee();

private:
    Ui::filrer *ui;
};

#endif // FILRER_H
