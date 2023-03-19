#ifndef BUSKET_H
#define BUSKET_H

#include <QWidget>
#include <QDebug>
#include <QSql>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class Busket;
}

class Busket : public QWidget
{
    Q_OBJECT

public:
    explicit Busket(QWidget *parent = nullptr);
    ~Busket();

private:
    Ui::Busket *ui;
    QSqlTableModel *model;
public slots:
    void slot(QSqlDatabase db);
private slots:
    void on_checkBox_stateChanged(int arg1);
    void on_pushButton_clicked();
};

#endif // BUSKET_H
