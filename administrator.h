#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "abstract.h"
#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class Administrator;
}

class Administrator : public Abstract
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = nullptr);
    ~Administrator();
    virtual void ConnectingDatabase();
    virtual void TableShow();

private:
    Ui::Administrator *ui;
    QSqlDatabase ProductsDB;
    QSqlTableModel *model;
    int row;
public slots:
    void slot();
private slots:
    void on_tableView_clicked(const QModelIndex &index);
    void on_InsertPushButton_clicked();
    void on_DeletePushButton_clicked();
};

#endif // ADMINISTRATOR_H
