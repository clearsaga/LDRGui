#ifndef LDR_H
#define LDR_H

#include <QObject>
#include <QTimer>
#include <QStatusBar>
#include <QLabel>

#define MODE_ON 0
#define MODE_OFF 1
#define MODE_DARK 2
#define MODE_LIGHT 3

class LDR : public QObject
{
    Q_OBJECT

public :

    short sensor;
    short led;
    int mode;

    QPixmap bulbOn;
    QPixmap bulbOff;
    QStatusBar *xStat;
    QLabel *gStatus;
    QLabel *gBulb;

    LDR( QStatusBar *sb, QLabel *lb ){
        mode = MODE_OFF;

        bulbOn.load("BulbOn.png");
        bulbOff.load("BulbOff.png");

        xStat = sb;
        gBulb = lb;

        gStatus = new QLabel("Mode");
        xStat->addWidget(gStatus);
    }

    void start( int interval ){
        QTimer *timer = new QTimer();
        connect( timer , SIGNAL(timeout()) , this , SLOT(update()));
        timer->start(interval);
    }


private slots :

    short parIn(){
        return 1;
    }

    void parOut( short data ){
       led = data;
    }

    short parCheck(){
        return 1;
    }

    void update(){

        sensor = parIn();

        if( mode == MODE_ON ){
            parOut(1);
        } else if( mode == MODE_OFF ){
            parOut(0);
        } else if( mode == MODE_DARK ){
            if( sensor == 0 ){
                parOut(1);
            } else {
                parOut(0);
            }
        } else if( mode == MODE_LIGHT ){
            if( sensor == 1 ){
                parOut(1);
            } else {
                parOut(0);
            }
        } else {
            QString err = "Mode:Error";
            gStatus->setText( "Err");
            return;
        }

        gStatus->setText("Mode:");

        led = parCheck();
        if( led == 0 ){
            gBulb->setPixmap(bulbOff);
        } else {
            gBulb->setPixmap(bulbOn);
        }
    }

};

#endif // LDR_H
