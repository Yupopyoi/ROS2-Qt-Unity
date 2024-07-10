#ifndef JOINTANGLECHANGER_H
#define JOINTANGLECHANGER_H

#include <QObject>
#include <QVector>
#include <QDoubleSpinBox>

class JointAngleChanger : public QObject
{
    Q_OBJECT

public:
    JointAngleChanger(QVector<QDoubleSpinBox *> spinBoxes);
    QVector<double> JointAngles(){return jointAngles_;};

signals:
    void onAnyChanged();

private:
    void onSpinboxChanged(int jointNumber, double value);
    QVector<QDoubleSpinBox *> spinBoxes_;
    QVector<double> jointAngles_;
};

#endif // JOINTANGLECHANGER_H
