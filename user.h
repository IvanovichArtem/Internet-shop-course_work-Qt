#ifndef USER_H
#define USER_H
#include "abstract.h"
#include "busket.h"
#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class User;
}

class User : public Abstract
{
    Q_OBJECT

public:

    explicit User(QWidget *parent = nullptr);
    ~User();
    virtual void ConnectingDatabase();
    virtual void TableShow();
private:
    Ui::User *ui;
    QSqlDatabase ProductsDB;
    QTableView *tv;
    QSqlTableModel *model;
    bool X[15];
    QString Name[15];
    int row;
    bool Count =0;
    QString rowName;
    Busket *BWindow;
public slots:
    void slot();
private slots:
    void on_searchLineEdit_textChanged(const QString &arg1);
    void on_SortingPushButton_clicked();
    void on_BusketPushButton_clicked();
    void on_OpenBusketPushButton_clicked();
    void on_pushButton_clicked();
    void on_tableView_clicked(const QModelIndex &index);

signals:
    void OpenBusket(QSqlDatabase);
};

#endif // USER_H
