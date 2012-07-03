#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ldr.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LDR *ldr = new LDR( ui->statusBar , ui->lbl_bulb );
    ldr->start(100);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_on_clicked()
{

}
