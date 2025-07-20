#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QObject>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>


class databaseConnection : public QObject
{
    Q_OBJECT
public:
    explicit databaseConnection(QObject *parent = nullptr);

private:
    QSqlDatabase db;  // Déclaration ici
};

#endif // DATABASECONNECTION_H
