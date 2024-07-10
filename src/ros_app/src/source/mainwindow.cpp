#include "mainwindow.h"

mainwindow::mainwindow(QWidget *parent) : QMainWindow(parent)
{
    ui = std::make_unique<Ui::MainWindow>();
    ui->setupUi(this);
    kinemaTab = ui->KinemaTab;

    // ----- GUI Angle / Pose Inputs -----

    spinBoxes_FK.clear();
    spinBoxes_FK.append(ui->AngleSpinBox_1);
    spinBoxes_FK.append(ui->AngleSpinBox_2);
    spinBoxes_FK.append(ui->AngleSpinBox_3);
    spinBoxes_FK.append(ui->AngleSpinBox_4);
    spinBoxes_FK.append(ui->AngleSpinBox_5);
    spinBoxes_FK.append(ui->AngleSpinBox_6);

    jointAngleChanger = std::make_unique<JointAngleChanger>(spinBoxes_FK);
    QObject::connect(jointAngleChanger.get(), &JointAngleChanger::onAnyChanged, this, [this](){emit onAngleChanged();});

    spinBoxes_IK.clear();
    spinBoxes_IK.append(ui->AngleSpinBox_posx);
    spinBoxes_IK.append(ui->AngleSpinBox_posy);
    spinBoxes_IK.append(ui->AngleSpinBox_posz);
    spinBoxes_IK.append(ui->AngleSpinBox_rr);
    spinBoxes_IK.append(ui->AngleSpinBox_rp);
    spinBoxes_IK.append(ui->AngleSpinBox_ry);

    //positionTargetChanger = std::make_unique<PositionTargetChanger>(spinBoxes_IK);
    //QObject::connect(positionTargetChanger.get(), &PositionTargetChanger::onAnyChanged, this, [this](){emit onPositionTargetChanged();});

    // ----- Log -----
    angleLog = std::make_shared<QLabel>(ui->AnglesLog);
    positionLog = std::make_shared<QLabel>(ui->PositionLog);
    angleLog->setText("Joint angle information is displayed here. This sentence will be overwritten later.");
    positionLog->setText("Position and orientation information is displayed here. This sentence will be overwritten later.");
}

QVector<double> mainwindow::JointAngles() const
{
    return jointAngleChanger->JointAngles();
}

void mainwindow::UpdateStateLog(const QString &angle, const QString &position, const std::vector<double> &angles, const std::vector<double> &transform)
{
    angleLog->setText(angle);
    positionLog->setText(position);

    int tabIndex = kinemaTab->currentIndex();

    if(tabIndex == 0) // FK
    {
        for(int boxIndex = 0; boxIndex < spinBoxes_FK.size(); boxIndex++)
        {
            spinBoxes_FK[boxIndex]->blockSignals(false);
            spinBoxes_IK[boxIndex]->blockSignals(true);
        }

        for(int boxIndex = 0; boxIndex < spinBoxes_IK.size(); boxIndex++)
        {
            spinBoxes_IK[boxIndex]->setValue(transform[boxIndex]);
        }
    }
    else if(tabIndex == 1) //IK
    {
        for(int boxIndex = 0; boxIndex < spinBoxes_FK.size(); boxIndex++)
        {
            spinBoxes_FK[boxIndex]->blockSignals(true);
            spinBoxes_IK[boxIndex]->blockSignals(false);
        }

        if(angles.size() == 0) return;

        for(int boxIndex = 0; boxIndex < spinBoxes_IK.size(); boxIndex++)
        {
            spinBoxes_FK[boxIndex]->setValue(angles[boxIndex] * 180 / M_PI); // unit : deg
        }
    }
}
