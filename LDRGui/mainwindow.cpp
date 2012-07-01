#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>

QStatusBar *gStatus;
QLabel *gBulb;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gStatus = ui->statusBar;
    gBulb = ui->lbl_bulb;
    MainWindow::init();
    QTimer::singleShot(100,this,SLOT(loop()));

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_on_clicked()
{

}

void MainWindow::loop(void){
    // input from 0x379
    ldr = parIn();int modest = 3;

    if( modest == MODE_ON ){
        parOut(1);
    } else if( modest == MODE_OFF ){
        parOut(0);
    } else if( modest == MODE_DARK ){
        if( ldr == 0 ){
            parOut(1);
        } else {
            parOut(0);
        }
    } else if( modest == MODE_LIGHT ){
        if( ldr == 1 ){
            parOut(1);
        } else {
            parOut(0);
        }
    } else {
        QString err = "Mode:Error";
        gStatus->showMessage(err);
        return;
    }

    led = parCheck();
    if( led == 0 ){
        gBulb->setPixmap(bulbOff);
    } else {

    }

    //gStatus->showMessage("Mode:" + (char)mode + " Sensor:" + (char)ldr + "Output:" + (char)led);
}

void MainWindow::init(){
    bulbOn.load("BulbOn.png");
    bulbOff.load("BulbOff.png");
}

short MainWindow::parIn(){
    return 1;
}

void MainWindow::parOut( short datar ){
   ;
}

short MainWindow::parCheck(){
    return 0;
}
