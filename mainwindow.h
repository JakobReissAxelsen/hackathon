#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushNew_clicked();

    void on_test_clicked();

private:
    Ui::MainWindow *ui;



    long number;
};

#endif // MAINWINDOW_H
