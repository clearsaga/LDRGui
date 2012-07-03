/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jul 3 09:27:35 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_LDRGui;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frm_ctrl;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_manual;
    QPushButton *btn_on;
    QPushButton *btn_off;
    QLabel *lbl_auto;
    QPushButton *btn_dark;
    QPushButton *btn_light;
    QFrame *frm_bulb;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_bulb;
    QMenuBar *menuBar;
    QMenu *menuAbotu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(420, 258);
        actionAbout_LDRGui = new QAction(MainWindow);
        actionAbout_LDRGui->setObjectName(QString::fromUtf8("actionAbout_LDRGui"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frm_ctrl = new QFrame(centralWidget);
        frm_ctrl->setObjectName(QString::fromUtf8("frm_ctrl"));
        frm_ctrl->setFrameShape(QFrame::StyledPanel);
        frm_ctrl->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frm_ctrl);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_manual = new QLabel(frm_ctrl);
        lbl_manual->setObjectName(QString::fromUtf8("lbl_manual"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_manual->sizePolicy().hasHeightForWidth());
        lbl_manual->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lbl_manual->setFont(font);
        lbl_manual->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_manual);

        btn_on = new QPushButton(frm_ctrl);
        btn_on->setObjectName(QString::fromUtf8("btn_on"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_on->sizePolicy().hasHeightForWidth());
        btn_on->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btn_on);

        btn_off = new QPushButton(frm_ctrl);
        btn_off->setObjectName(QString::fromUtf8("btn_off"));
        sizePolicy1.setHeightForWidth(btn_off->sizePolicy().hasHeightForWidth());
        btn_off->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btn_off);

        lbl_auto = new QLabel(frm_ctrl);
        lbl_auto->setObjectName(QString::fromUtf8("lbl_auto"));
        sizePolicy.setHeightForWidth(lbl_auto->sizePolicy().hasHeightForWidth());
        lbl_auto->setSizePolicy(sizePolicy);
        lbl_auto->setFont(font);
        lbl_auto->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_auto);

        btn_dark = new QPushButton(frm_ctrl);
        btn_dark->setObjectName(QString::fromUtf8("btn_dark"));
        sizePolicy1.setHeightForWidth(btn_dark->sizePolicy().hasHeightForWidth());
        btn_dark->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btn_dark);

        btn_light = new QPushButton(frm_ctrl);
        btn_light->setObjectName(QString::fromUtf8("btn_light"));
        sizePolicy1.setHeightForWidth(btn_light->sizePolicy().hasHeightForWidth());
        btn_light->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btn_light);


        horizontalLayout->addWidget(frm_ctrl);

        frm_bulb = new QFrame(centralWidget);
        frm_bulb->setObjectName(QString::fromUtf8("frm_bulb"));
        frm_bulb->setFrameShape(QFrame::StyledPanel);
        frm_bulb->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frm_bulb);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbl_bulb = new QLabel(frm_bulb);
        lbl_bulb->setObjectName(QString::fromUtf8("lbl_bulb"));
        lbl_bulb->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_bulb);


        horizontalLayout->addWidget(frm_bulb);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 420, 23));
        menuBar->setLayoutDirection(Qt::RightToLeft);
        menuAbotu = new QMenu(menuBar);
        menuAbotu->setObjectName(QString::fromUtf8("menuAbotu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbotu->menuAction());
        menuAbotu->addAction(actionAbout_LDRGui);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LDRGui", 0, QApplication::UnicodeUTF8));
        actionAbout_LDRGui->setText(QApplication::translate("MainWindow", "About LDRGui", 0, QApplication::UnicodeUTF8));
        lbl_manual->setText(QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
        btn_on->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        btn_off->setText(QApplication::translate("MainWindow", "Off", 0, QApplication::UnicodeUTF8));
        lbl_auto->setText(QApplication::translate("MainWindow", "Auto", 0, QApplication::UnicodeUTF8));
        btn_dark->setText(QApplication::translate("MainWindow", "Dark Triggered", 0, QApplication::UnicodeUTF8));
        btn_light->setText(QApplication::translate("MainWindow", "Light Triggered", 0, QApplication::UnicodeUTF8));
        lbl_bulb->setText(QApplication::translate("MainWindow", "Bulb Image", 0, QApplication::UnicodeUTF8));
        menuAbotu->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
