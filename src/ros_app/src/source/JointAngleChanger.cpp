#include "JointAngleChanger.h"

JointAngleChanger::JointAngleChanger(QVector<QDoubleSpinBox *> spinBoxes)
{
    spinBoxes_ = QVector<QDoubleSpinBox *>(spinBoxes.size());

    for(int i = 0; i < spinBoxes.size(); i++)
    {
        spinBoxes_[i] = spinBoxes[i];
        spinBoxes_[i]->setRange(-170.0, 170.0);
        spinBoxes_[i]->setSingleStep(1.0);

        QObject::connect(spinBoxes_[i],
                         QOverload<double>::of(&QDoubleSpinBox::valueChanged),this,
                         [=](double value)
                         {
                            onSpinboxChanged(i, value);
                         });
    }

    jointAngles_ = QVector<double>(spinBoxes.size());
}

void JointAngleChanger::onSpinboxChanged(int jointNumber, double value)
{
    jointAngles_[jointNumber] = value;

    emit onAnyChanged();
}
