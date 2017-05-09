#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushNew,SIGNAL(clicked()), this, SLOT(on_pushNew_clicked()));
    connect(ui->test,SIGNAL(clicked()), this, SLOT(on_test_clicked()));

    ui->result->setText("Tryk start");

    number = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushNew_clicked()
{
    number = qrand() % 20 +1;
    ui->result->setText("Gæt en lort");
}


void MainWindow::on_test_clicked()
{
    int g = ui->guess->text().toInt();

    if (g==number)
        ui->result->setText("RIGTIGT");
    else if (g<number)
        ui->result->setText("Lidt mere");
    else if (g>number)
        ui->result->setText("For meget");

}
