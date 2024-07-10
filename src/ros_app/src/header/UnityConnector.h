#ifndef UNITYCONNECTOR_H
#define UNITYCONNECTOR_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class UnityConnector : public QTcpServer
{
    Q_OBJECT

public:
    explicit UnityConnector(int port = 10000, QObject *parent = nullptr);
    int startListen();
    int Publish(std::shared_ptr<const QByteArray> message);
    QByteArray SubscribedData();

signals:
    void onSubscribedDataFromUnity();

private slots:
    void onNewConnection();
    void Read();

private:
    QTcpSocket *socket;
    int port_;
    QByteArray subscribedData_;
};

#endif // UNITYCONNECTOR_H
