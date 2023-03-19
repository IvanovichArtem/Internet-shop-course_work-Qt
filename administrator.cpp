#include "administrator.h"
#include "ui_administrator.h"

Administrator::Administrator(QWidget *parent) :
    Abstract(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);
    Administrator::ConnectingDatabase();
    Administrator::TableShow();
    ui->DeletePushButton->setEnabled(false);
}

Administrator::~Administrator()
{
    delete ui;
}

void Administrator::ConnectingDatabase()
{
    QSqlDatabase ProductsDB = QSqlDatabase::addDatabase("QSQLITE");
    ProductsDB.setDatabaseName("./Products.db");
    if(ProductsDB.open())
    {
        qDebug() << "Connection to database(P) is succesed";
    }
    else
    {
        qDebug() << "Connection to database(P) is not succesed";
    }
}

void Administrator::TableShow()
{
    model = new QSqlTableModel(this , ProductsDB);
    model->setTable("Products");
    model->select();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setModel(model);
}

void Administrator::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
    ui->DeletePushButton->setEnabled(true);
}


void Administrator::on_InsertPushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void Administrator::on_DeletePushButton_clicked()
{
    model->removeRow(row);
    ui->DeletePushButton->setEnabled(false);
}

void Administrator::slot()
{
    qDebug() << "slotadmin";
}
