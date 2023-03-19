#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include "user.h"
#include "administrator.h"
#include <QMainWindow>
#include <QTableView>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class Authorization; }
QT_END_NAMESPACE

class Authorization : public QMainWindow
{
    Q_OBJECT

public:
    void ConnectingDatabase();
    Authorization(QWidget *parent = nullptr);
    ~Authorization();
private slots:

    void on_EnteringPushButton_clicked();

    void on_EnteringPushButton_2_clicked();

private:
    Ui::Authorization *ui;
    QSqlDatabase db;
    Administrator *AWindow;
    User *UWindow;
signals:
    void signal1();
    void signal2();

};


#endif // AUTHORIZATION_H
