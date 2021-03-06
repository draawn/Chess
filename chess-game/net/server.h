#ifndef SERVER_H
#define SERVER_H

#include <QString>
#include <QTcpServer>
#include <QMap>
#include <QTcpSocket>
#include <QDataStream>

class Server : public QTcpServer
{
    Q_OBJECT

public:
    Server(QObject *parent = 0);

public slots:
    //void readyRead();

protected:
    void incomingConnection(QTcpSocket ts);
    QMap<QString, QTcpSocket*> players;
    QDataStream in;
    QTcpSocket *tcpSocket;
    QTcpSocket *player;
    QByteArray data;
    qintptr playerSocketDescriptor;
};

#endif
