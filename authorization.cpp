#include "authorization.h"
#include "ui_authorization.h"

Authorization::Authorization(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Authorization)
{
    ui->setupUi(this);
    ui->AuthorizationTabWidjet->tabBar()->setDocumentMode(true);
    ui->AuthorizationTabWidjet->tabBar()->setExpanding(true);
    Authorization::ConnectingDatabase();
}

Authorization::~Authorization()
{
    QSqlQueryModel *setquery = new QSqlQueryModel;
    setquery->setQuery("DELETE FROM Basket");
    delete ui;
}

void Authorization::ConnectingDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Users.db");
    if(db.open())
    {
        qDebug() << "Connection to database(U) is succesed";
    }
    else
    {
        qDebug() << "Connection to database(U) is not succesed";
    }
}

void Authorization::on_EnteringPushButton_clicked()
{
    if(ui->loginLineEdit->text() == "root" && ui->passwordLineEdit->text()=="root")
    {
        Authorization::close();
        AWindow = new Administrator;
        AWindow->show();
        connect(this, &Authorization::signal1, AWindow, &Administrator::slot);
        emit signal1();
    }
    else
    {
    QSqlQuery *search;
    search = new QSqlQuery(db);
    QString str = QString("SELECT EXISTS(SELECT * FROM Users WHERE Login = '%1' AND Password = '%2');").arg(ui->loginLineEdit->text(), ui->passwordLineEdit->text());
    search->prepare(str);
    search->exec();
    search->next();
    if(search->value(0) != 0)
    {
        //user window
        Authorization::close();
        UWindow = new User;
        UWindow->show();
        connect(this, &Authorization::signal2, UWindow, &User::slot);
        emit signal2();
    }
    else
    {
        QMessageBox::warning(this, "Упс", "Ошибка при входе.\nВведите данные корректно или авторизуйтесь!!!");

    }
    delete search;
    }
}


void Authorization::on_EnteringPushButton_2_clicked()
{
    QSqlQuery *search;
    search = new QSqlQuery(db);
    QString e = QString("SELECT EXISTS(SELECT * FROM Users WHERE `Login` = '%1')").arg(ui->loginLineEdit_2->text());
    search->prepare(e);
    search->exec(e);
    search->next();
    qDebug() << e << search->value(0);
    if(search->value(0)!= 0)
    {
        QMessageBox::warning(this, "Упс!", "Существует пользователь с данным логином!");
        delete search;
        return;
    }
    else
    {
    QMessageBox::information(this, "Вы зарегестрировались", "Регистрация прошла успешно!");
    QString str = QString("INSERT INTO Users (`Login`, `Password`) VALUES ('%1', '%2')").arg(ui->loginLineEdit_2->text(), ui->passwordLineEdit_2->text());
    search->prepare(str);
    search->exec();
    search->next();
    ui->loginLineEdit_2->setText("");
    ui->passwordLineEdit_2->setText("");
    delete search;
    }
}
