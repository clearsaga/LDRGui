#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define MODE_ON 0
#define MODE_OFF 1
#define MODE_DARK 2
#define MODE_LIGHT 3

#include <QMainWindow>
#include <QPixmap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    short ldr;
    short led;


private slots:

    void on_btn_on_clicked();

    void loop();

private:
    Ui::MainWindow *ui;

    QPixmap bulbOn;
    QPixmap bulbOff;

    void init();
    short parIn();
    void parOut( short data );
    short parCheck();

};



#endif // MAINWINDOW_H
