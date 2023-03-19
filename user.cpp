#include "user.h"
#include "ui_user.h"

User::User(QWidget *parent) :
    Abstract(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    User::ConnectingDatabase();
    User::TableShow();
    ui->BusketPushButton->setEnabled(false);
    ui->OpenBusketPushButton->setEnabled(false);
}

User::~User()
{
    delete ui;
}

void User::ConnectingDatabase()
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

void User::TableShow()
{
    model = new QSqlTableModel(this , ProductsDB);
    model->setTable("Products");
    model->select();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void User::slot()
{

}

void User::on_searchLineEdit_textChanged(const QString &arg1)
{
    if(arg1.trimmed().isEmpty())
    {
        model->setTable("Products");
        model->select();
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->setModel(model);
    }
    else
    {
    QString a;
    a = QString("`Название` LIKE '%%1%'").arg(arg1);
    model->setFilter(a);
    }
}


void User::on_SortingPushButton_clicked()
{
    QString a="`Тип` = '%%'", u=" OR ";
    X[0]=ui->checkBox->isChecked(); Name[0] = ui->checkBox->text();
    X[1]=ui->checkBox_2->isChecked(); Name[1] = ui->checkBox_2->text();
    X[2]=ui->checkBox_3->isChecked(); Name[2] = ui->checkBox_3->text();
    X[3]=ui->checkBox_4->isChecked(); Name[3] = ui->checkBox_4->text();
    X[4]=ui->checkBox_5->isChecked(); Name[4] = ui->checkBox_5->text();
    X[5]=ui->checkBox_6->isChecked(); Name[5] = ui->checkBox_6->text();
    X[6]=ui->checkBox_7->isChecked(); Name[6] = ui->checkBox_7->text();
    X[7]=ui->checkBox_8->isChecked(); Name[7] = ui->checkBox_8->text();
    X[8]=ui->checkBox_9->isChecked(); Name[8] = ui->checkBox_9->text();
    X[9]=ui->checkBox_10->isChecked(); Name[9] = ui->checkBox_10->text();
    X[10]=ui->checkBox_11->isChecked(); Name[10] = ui->checkBox_11->text();
    X[11]=ui->checkBox_12->isChecked(); Name[11] = ui->checkBox_12->text();
    X[12]=ui->checkBox_13->isChecked(); Name[12] = ui->checkBox_13->text();
    X[13]=ui->checkBox_14->isChecked(); Name[13] = ui->checkBox_14->text();
    X[14]=ui->checkBox_15->isChecked(); Name[14] = ui->checkBox_15->text();
    for(int i=0;i<15;i++)
    {
        if(X[i])
        {
            a = a+u+"`Тип` = '" + Name[i] + "'";
        }
    }
    if (a == "`Тип` = ''")
    {
        return;
    }
    model->setFilter(a);
    /*QSqlQueryModel *setquery = new QSqlQueryModel;
    setquery->setQuery(a);
    QTableView *tv = new QTableView(this);
    tv->setModel(setquery);
    ui->tableView->setModel(setquery);*/
}


void User::on_BusketPushButton_clicked()
{
    QSqlQueryModel *setquery = new QSqlQueryModel;
    QString x1, x2, x3, x4, x5, x6, x7, a;
    x1 = model->data(model->index(ui->tableView->currentIndex().row(), 0)).toString();
    x2 = model->data(model->index(ui->tableView->currentIndex().row(), 1)).toString();
    x3 = model->data(model->index(ui->tableView->currentIndex().row(), 2)).toString();
    x4 = model->data(model->index(ui->tableView->currentIndex().row(), 3)).toString();
    x5 = model->data(model->index(ui->tableView->currentIndex().row(), 4)).toString();
    x6 = model->data(model->index(ui->tableView->currentIndex().row(), 5)).toString();
    x7 = model->data(model->index(ui->tableView->currentIndex().row(), 6)).toString();
    a= QString("INSERT INTO Basket VALUES ('%1', '%2', '%3', '%4', '%5', '%6', '%7')").arg(x1,x2,x3,x4,x5,x6,x7);
    setquery->setQuery(a);
    ui->BusketPushButton->setEnabled(false);
    ui->OpenBusketPushButton->setEnabled(true);
}

void User::on_OpenBusketPushButton_clicked()
{
    BWindow = new Busket;
    setWindowModality(Qt::ApplicationModal);
    BWindow->show();

    connect(this, &User::OpenBusket, BWindow, &Busket::slot);
    emit OpenBusket(ProductsDB);
    ui->OpenBusketPushButton->setEnabled(false);
}


void User::on_pushButton_clicked()
{
    double x = model->data(model->index(ui->tableView->currentIndex().row(), 1)).toDouble();
    qDebug() << x;
}

void User::on_tableView_clicked(const QModelIndex &index)
{
    ui->BusketPushButton->setEnabled(true);
}

