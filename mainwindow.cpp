#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "time.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->result->setText("Tryk start");

    qsrand(time(NULL));

    ui->count->setText("");
    count = 0;
    number = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushNew_clicked()
{
    number = (qrand() % 20) +1;
    count =0;
    ui->result->setText("Gæt en lort");
}


void MainWindow::on_test_clicked()
{
    if (number==-1) {
        ui->result->setText("Kender du ikke reglerne. Du skal trykke start");
        return;
    }


    count++;
    int g = ui->guess->text().toInt();

    ui->count->setText(QString("%1").arg(count));
    if (g==number) {
        ui->result->setText("RIGTIGT. Prøv igen");
        number = -1;
    } else if (g<number)
        ui->result->setText("Lidt mere");
    else if (g>number)
        ui->result->setText("For meget");

}
