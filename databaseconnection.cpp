#include "databaseconnection.h"

databaseConnection::databaseConnection(QObject *parent)
    : QObject{parent}
{
    qInfo()<<"Object is created. ";
    qInfo()<<"Drivers :"<<QSqlDatabase::drivers();
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("root");

}
