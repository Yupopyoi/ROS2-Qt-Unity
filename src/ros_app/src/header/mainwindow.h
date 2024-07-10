#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QtWidgets/QMainWindow>

#include <QLabel>
#include <QVector>

#include "ui_mainwindow.h"
#include "JointAngleChanger.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    QVector<double> JointAngles() const;
    void UpdateStateLog(const QString &angle, const QString &position, const std::vector<double> &angles, const std::vector<double> &transform);

signals:
    void onAngleChanged();
    //void onPositionTargetChanged();

private:
    std::unique_ptr<Ui::MainWindow> ui = nullptr;
    std::unique_ptr<JointAngleChanger> jointAngleChanger = nullptr;

    QVector<QDoubleSpinBox *> spinBoxes_FK;
    QVector<QDoubleSpinBox *> spinBoxes_IK;
    QTabWidget *kinemaTab = nullptr;

    std::shared_ptr<QLabel> angleLog = nullptr;
    std::shared_ptr<QLabel> positionLog = nullptr;
};
#endif // MAINWINDOW_H
