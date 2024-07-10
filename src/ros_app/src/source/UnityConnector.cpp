#include "UnityConnector.h"

UnityConnector::UnityConnector(int port, QObject *parent) : QTcpServer(parent), socket(nullptr)
{
    port_ = port;
    connect(this, &QTcpServer::newConnection, this, &UnityConnector::onNewConnection);
}

int UnityConnector::startListen()
{
    if (this->listen(QHostAddress::Any, port_))
    {
        return 1;
    }

    return 0;
}

int UnityConnector::Publish(std::shared_ptr<const QByteArray> message)
{
    if(socket == nullptr) return 0;

    if (socket->isOpen()) {

        socket->write(message->constData(), message->size());
        return 1;
    }

    return 0;
}

QByteArray UnityConnector::SubscribedData()
{
    return subscribedData_;
}

void UnityConnector::onNewConnection()
{
    socket = this->nextPendingConnection();

    connect(socket, &QTcpSocket::readyRead, this, &UnityConnector::Read);
}

void UnityConnector::Read()
{
    subscribedData_ = socket->readAll();

    emit onSubscribedDataFromUnity();
}
