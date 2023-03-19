#ifndef ABSTRACT_H
#define ABSTRACT_H

#include <QWidget>

class Abstract : public QWidget
{
    Q_OBJECT
public:
    explicit Abstract(QWidget *parent = nullptr); // explicit - явный конструктор
    virtual void ConnectingDatabase() = 0;
    virtual void TableShow() = 0;
};

#endif // ABSTRACT_H
