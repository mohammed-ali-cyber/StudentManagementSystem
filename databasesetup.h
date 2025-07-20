// databasesetup.h
#ifndef DATABASESETUP_H
#define DATABASESETUP_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QString>

class DatabaseSetup {
public:
    DatabaseSetup();
    bool createTables();
    bool insertInitialData();

private:
    QSqlDatabase db;
};

#endif // DATABASESETUP_H
