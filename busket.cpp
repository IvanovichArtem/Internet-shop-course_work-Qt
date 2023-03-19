#include "busket.h"
#include "ui_busket.h"

Busket::Busket(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Busket)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
}

Busket::~Busket()
{
    QSqlQueryModel *setquery = new QSqlQueryModel;
    setquery->setQuery("DELETE FROM Basket");
    QTableView *tv = new QTableView(this);
    tv->setModel(setquery);
    delete ui;
}

void Busket::slot(QSqlDatabase db)
{
    model = new QSqlTableModel(this , db);
    model->setTable("Basket");
    model->select();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(6, true); // Hide Количество
    double sum=0;
    for(int i =0; i<model->rowCount(); i++)
    {
        double x = model->data(model->index(i, 1)).toDouble();
        sum += x;
    }
    QString a;
    a = QString("Цена: %1").arg(sum);
    ui->PriceLabel->setText(a);
}

void Busket::on_checkBox_stateChanged(int arg1)
{
    ui->checkBox->isChecked() ? ui->pushButton->setEnabled(true) : ui->pushButton->setEnabled(false);
}


void Busket::on_pushButton_clicked()
{
    QSqlQueryModel *setquery = new QSqlQueryModel;
    for(int i =0; i<model->rowCount(); i++)
    {
        QString a, warn;
        if (model->data(model->index(i, 6)).toInt() <= 0)
        {
            warn = QString("Товара %1 нет в наличии!").arg(model->data(model->index(i, 0)).toString());
            QMessageBox::warning(this, "Упс", warn);
            break;
        }
        else
        {
        a = QString("UPDATE Products SET Количество = (Количество - 1) WHERE `Название` = '%1'").arg(model->data(model->index(i, 0)).toString());
        setquery->setQuery(a);
        }
    }
    ui->pushButton->setEnabled(false);
    delete setquery;
    Busket::~Busket();
}

