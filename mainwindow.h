#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_butt_etudiant_clicked();
    void on_butt_ensegnant_clicked();
    void on_link_clicked();

    void on_butt_etudiant_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
