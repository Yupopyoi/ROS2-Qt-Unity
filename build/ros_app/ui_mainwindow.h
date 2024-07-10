/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *PositionLog;
    QTabWidget *KinemaTab;
    QWidget *FK;
    QDoubleSpinBox *AngleSpinBox_1;
    QLabel *LinkName_1;
    QLabel *LinkName_2;
    QLabel *LinkName_6;
    QDoubleSpinBox *AngleSpinBox_2;
    QDoubleSpinBox *AngleSpinBox_6;
    QLabel *LinkName_4;
    QDoubleSpinBox *AngleSpinBox_4;
    QLabel *LinkName_3;
    QDoubleSpinBox *AngleSpinBox_3;
    QDoubleSpinBox *AngleSpinBox_5;
    QLabel *LinkName_5;
    QLabel *Base;
    QFrame *line;
    QWidget *IK;
    QDoubleSpinBox *AngleSpinBox_rp;
    QLabel *PositionY;
    QDoubleSpinBox *AngleSpinBox_ry;
    QDoubleSpinBox *AngleSpinBox_posx;
    QLabel *Yaw;
    QLabel *PositionX;
    QDoubleSpinBox *AngleSpinBox_posy;
    QLabel *PositionZ;
    QDoubleSpinBox *AngleSpinBox_posz;
    QLabel *Pitch;
    QDoubleSpinBox *AngleSpinBox_rr;
    QLabel *Roll;
    QLabel *Yaw_2;
    QLabel *AnglesLog;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        PositionLog = new QLabel(centralwidget);
        PositionLog->setObjectName("PositionLog");
        PositionLog->setGeometry(QRect(25, 550, 740, 30));
        QFont font;
        font.setPointSize(16);
        PositionLog->setFont(font);
        KinemaTab = new QTabWidget(centralwidget);
        KinemaTab->setObjectName("KinemaTab");
        KinemaTab->setGeometry(QRect(240, 10, 301, 481));
        FK = new QWidget();
        FK->setObjectName("FK");
        AngleSpinBox_1 = new QDoubleSpinBox(FK);
        AngleSpinBox_1->setObjectName("AngleSpinBox_1");
        AngleSpinBox_1->setGeometry(QRect(120, 320, 160, 50));
        QFont font1;
        font1.setPointSize(18);
        AngleSpinBox_1->setFont(font1);
        AngleSpinBox_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_1->setDecimals(1);
        AngleSpinBox_1->setMinimum(-120.000000000000000);
        AngleSpinBox_1->setMaximum(120.000000000000000);
        LinkName_1 = new QLabel(FK);
        LinkName_1->setObjectName("LinkName_1");
        LinkName_1->setGeometry(QRect(8, 320, 100, 50));
        QFont font2;
        font2.setPointSize(15);
        LinkName_1->setFont(font2);
        LinkName_1->setAlignment(Qt::AlignCenter);
        LinkName_2 = new QLabel(FK);
        LinkName_2->setObjectName("LinkName_2");
        LinkName_2->setGeometry(QRect(8, 260, 100, 50));
        LinkName_2->setFont(font2);
        LinkName_2->setAlignment(Qt::AlignCenter);
        LinkName_6 = new QLabel(FK);
        LinkName_6->setObjectName("LinkName_6");
        LinkName_6->setGeometry(QRect(8, 20, 100, 50));
        LinkName_6->setFont(font2);
        LinkName_6->setAlignment(Qt::AlignCenter);
        AngleSpinBox_2 = new QDoubleSpinBox(FK);
        AngleSpinBox_2->setObjectName("AngleSpinBox_2");
        AngleSpinBox_2->setGeometry(QRect(120, 260, 160, 50));
        AngleSpinBox_2->setFont(font1);
        AngleSpinBox_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_2->setDecimals(1);
        AngleSpinBox_2->setMinimum(-120.000000000000000);
        AngleSpinBox_2->setMaximum(120.000000000000000);
        AngleSpinBox_6 = new QDoubleSpinBox(FK);
        AngleSpinBox_6->setObjectName("AngleSpinBox_6");
        AngleSpinBox_6->setGeometry(QRect(120, 20, 160, 50));
        AngleSpinBox_6->setFont(font1);
        AngleSpinBox_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_6->setDecimals(1);
        AngleSpinBox_6->setMinimum(-120.000000000000000);
        AngleSpinBox_6->setMaximum(120.000000000000000);
        AngleSpinBox_6->setValue(0.000000000000000);
        LinkName_4 = new QLabel(FK);
        LinkName_4->setObjectName("LinkName_4");
        LinkName_4->setGeometry(QRect(8, 140, 100, 50));
        LinkName_4->setFont(font2);
        LinkName_4->setAlignment(Qt::AlignCenter);
        AngleSpinBox_4 = new QDoubleSpinBox(FK);
        AngleSpinBox_4->setObjectName("AngleSpinBox_4");
        AngleSpinBox_4->setGeometry(QRect(120, 140, 160, 50));
        AngleSpinBox_4->setFont(font1);
        AngleSpinBox_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_4->setDecimals(1);
        AngleSpinBox_4->setMinimum(-120.000000000000000);
        AngleSpinBox_4->setMaximum(120.000000000000000);
        LinkName_3 = new QLabel(FK);
        LinkName_3->setObjectName("LinkName_3");
        LinkName_3->setGeometry(QRect(8, 200, 100, 50));
        LinkName_3->setFont(font2);
        LinkName_3->setAlignment(Qt::AlignCenter);
        AngleSpinBox_3 = new QDoubleSpinBox(FK);
        AngleSpinBox_3->setObjectName("AngleSpinBox_3");
        AngleSpinBox_3->setGeometry(QRect(120, 200, 160, 50));
        AngleSpinBox_3->setFont(font1);
        AngleSpinBox_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_3->setDecimals(1);
        AngleSpinBox_3->setMinimum(-120.000000000000000);
        AngleSpinBox_3->setMaximum(120.000000000000000);
        AngleSpinBox_5 = new QDoubleSpinBox(FK);
        AngleSpinBox_5->setObjectName("AngleSpinBox_5");
        AngleSpinBox_5->setGeometry(QRect(120, 80, 160, 50));
        AngleSpinBox_5->setFont(font1);
        AngleSpinBox_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_5->setDecimals(1);
        AngleSpinBox_5->setMinimum(-120.000000000000000);
        AngleSpinBox_5->setMaximum(120.000000000000000);
        LinkName_5 = new QLabel(FK);
        LinkName_5->setObjectName("LinkName_5");
        LinkName_5->setGeometry(QRect(8, 80, 100, 50));
        LinkName_5->setFont(font2);
        LinkName_5->setAlignment(Qt::AlignCenter);
        Base = new QLabel(FK);
        Base->setObjectName("Base");
        Base->setGeometry(QRect(100, 380, 100, 50));
        Base->setFont(font2);
        Base->setAlignment(Qt::AlignCenter);
        line = new QFrame(FK);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 420, 280, 10));
        line->setAutoFillBackground(false);
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setFrameShape(QFrame::Shape::HLine);
        KinemaTab->addTab(FK, QString());
        IK = new QWidget();
        IK->setObjectName("IK");
        AngleSpinBox_rp = new QDoubleSpinBox(IK);
        AngleSpinBox_rp->setObjectName("AngleSpinBox_rp");
        AngleSpinBox_rp->setGeometry(QRect(120, 260, 160, 50));
        AngleSpinBox_rp->setFont(font1);
        AngleSpinBox_rp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_rp->setDecimals(1);
        AngleSpinBox_rp->setMinimum(-360.000000000000000);
        AngleSpinBox_rp->setMaximum(360.000000000000000);
        PositionY = new QLabel(IK);
        PositionY->setObjectName("PositionY");
        PositionY->setGeometry(QRect(8, 80, 100, 50));
        PositionY->setFont(font2);
        PositionY->setAlignment(Qt::AlignCenter);
        AngleSpinBox_ry = new QDoubleSpinBox(IK);
        AngleSpinBox_ry->setObjectName("AngleSpinBox_ry");
        AngleSpinBox_ry->setGeometry(QRect(120, 320, 160, 50));
        AngleSpinBox_ry->setFont(font1);
        AngleSpinBox_ry->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_ry->setDecimals(1);
        AngleSpinBox_ry->setMinimum(-360.000000000000000);
        AngleSpinBox_ry->setMaximum(360.000000000000000);
        AngleSpinBox_posx = new QDoubleSpinBox(IK);
        AngleSpinBox_posx->setObjectName("AngleSpinBox_posx");
        AngleSpinBox_posx->setGeometry(QRect(120, 20, 160, 50));
        AngleSpinBox_posx->setFont(font1);
        AngleSpinBox_posx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_posx->setDecimals(1);
        AngleSpinBox_posx->setMinimum(-200.000000000000000);
        AngleSpinBox_posx->setMaximum(200.000000000000000);
        AngleSpinBox_posx->setValue(0.000000000000000);
        Yaw = new QLabel(IK);
        Yaw->setObjectName("Yaw");
        Yaw->setGeometry(QRect(8, 320, 100, 50));
        Yaw->setFont(font2);
        Yaw->setAlignment(Qt::AlignCenter);
        PositionX = new QLabel(IK);
        PositionX->setObjectName("PositionX");
        PositionX->setGeometry(QRect(8, 20, 100, 50));
        PositionX->setFont(font2);
        PositionX->setAlignment(Qt::AlignCenter);
        AngleSpinBox_posy = new QDoubleSpinBox(IK);
        AngleSpinBox_posy->setObjectName("AngleSpinBox_posy");
        AngleSpinBox_posy->setGeometry(QRect(120, 80, 160, 50));
        AngleSpinBox_posy->setFont(font1);
        AngleSpinBox_posy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_posy->setDecimals(1);
        AngleSpinBox_posy->setMinimum(-200.000000000000000);
        AngleSpinBox_posy->setMaximum(200.000000000000000);
        PositionZ = new QLabel(IK);
        PositionZ->setObjectName("PositionZ");
        PositionZ->setGeometry(QRect(8, 140, 100, 50));
        PositionZ->setFont(font2);
        PositionZ->setAlignment(Qt::AlignCenter);
        AngleSpinBox_posz = new QDoubleSpinBox(IK);
        AngleSpinBox_posz->setObjectName("AngleSpinBox_posz");
        AngleSpinBox_posz->setGeometry(QRect(120, 140, 160, 50));
        AngleSpinBox_posz->setFont(font1);
        AngleSpinBox_posz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_posz->setDecimals(1);
        AngleSpinBox_posz->setMinimum(-50.000000000000000);
        AngleSpinBox_posz->setMaximum(600.000000000000000);
        Pitch = new QLabel(IK);
        Pitch->setObjectName("Pitch");
        Pitch->setGeometry(QRect(8, 260, 100, 50));
        Pitch->setFont(font2);
        Pitch->setAlignment(Qt::AlignCenter);
        AngleSpinBox_rr = new QDoubleSpinBox(IK);
        AngleSpinBox_rr->setObjectName("AngleSpinBox_rr");
        AngleSpinBox_rr->setGeometry(QRect(120, 200, 160, 50));
        AngleSpinBox_rr->setFont(font1);
        AngleSpinBox_rr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AngleSpinBox_rr->setDecimals(1);
        AngleSpinBox_rr->setMinimum(-360.000000000000000);
        AngleSpinBox_rr->setMaximum(360.000000000000000);
        Roll = new QLabel(IK);
        Roll->setObjectName("Roll");
        Roll->setGeometry(QRect(8, 200, 100, 50));
        Roll->setFont(font2);
        Roll->setAlignment(Qt::AlignCenter);
        Yaw_2 = new QLabel(IK);
        Yaw_2->setObjectName("Yaw_2");
        Yaw_2->setGeometry(QRect(8, 380, 100, 50));
        Yaw_2->setFont(font2);
        Yaw_2->setAlignment(Qt::AlignCenter);
        KinemaTab->addTab(IK, QString());
        AnglesLog = new QLabel(centralwidget);
        AnglesLog->setObjectName("AnglesLog");
        AnglesLog->setEnabled(true);
        AnglesLog->setGeometry(QRect(25, 510, 740, 30));
        AnglesLog->setFont(font);
        AnglesLog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        KinemaTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PositionLog->setText(QString());
        AngleSpinBox_1->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        LinkName_1->setText(QCoreApplication::translate("MainWindow", "Joint 1", nullptr));
        LinkName_2->setText(QCoreApplication::translate("MainWindow", "Joint 2", nullptr));
        LinkName_6->setText(QCoreApplication::translate("MainWindow", "Joint 6", nullptr));
        AngleSpinBox_2->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        AngleSpinBox_6->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        LinkName_4->setText(QCoreApplication::translate("MainWindow", "Joint 4", nullptr));
        AngleSpinBox_4->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        LinkName_3->setText(QCoreApplication::translate("MainWindow", "Joint 3", nullptr));
        AngleSpinBox_3->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        AngleSpinBox_5->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        LinkName_5->setText(QCoreApplication::translate("MainWindow", "Joint 5", nullptr));
        Base->setText(QCoreApplication::translate("MainWindow", "Base", nullptr));
        KinemaTab->setTabText(KinemaTab->indexOf(FK), QCoreApplication::translate("MainWindow", "FK", nullptr));
        AngleSpinBox_rp->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        PositionY->setText(QCoreApplication::translate("MainWindow", "Position Y", nullptr));
        AngleSpinBox_ry->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        AngleSpinBox_posx->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        Yaw->setText(QCoreApplication::translate("MainWindow", "Yaw", nullptr));
        PositionX->setText(QCoreApplication::translate("MainWindow", "Position X", nullptr));
        AngleSpinBox_posy->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        PositionZ->setText(QCoreApplication::translate("MainWindow", "Position Z", nullptr));
        AngleSpinBox_posz->setSuffix(QCoreApplication::translate("MainWindow", " mm", nullptr));
        Pitch->setText(QCoreApplication::translate("MainWindow", "Pitch", nullptr));
        AngleSpinBox_rr->setSuffix(QCoreApplication::translate("MainWindow", " deg", nullptr));
        Roll->setText(QCoreApplication::translate("MainWindow", "Roll", nullptr));
        Yaw_2->setText(QString());
        KinemaTab->setTabText(KinemaTab->indexOf(IK), QCoreApplication::translate("MainWindow", "IK", nullptr));
        AnglesLog->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
