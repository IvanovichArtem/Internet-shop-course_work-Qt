/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "abstract.h"

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *InsertPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *DeletePushButton;

    void setupUi(Abstract *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName("Administrator");
        Administrator->resize(938, 568);
        Administrator->setMinimumSize(QSize(0, 0));
        layoutWidget = new QWidget(Administrator);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 891, 531));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        InsertPushButton = new QPushButton(layoutWidget);
        InsertPushButton->setObjectName("InsertPushButton");
        InsertPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(InsertPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        DeletePushButton = new QPushButton(layoutWidget);
        DeletePushButton->setObjectName("DeletePushButton");
        DeletePushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(DeletePushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(Abstract *Administrator)
    {
        Administrator->setWindowTitle(QCoreApplication::translate("Administrator", "Administrator", nullptr));
        InsertPushButton->setText(QCoreApplication::translate("Administrator", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \n"
" \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        DeletePushButton->setText(QCoreApplication::translate("Administrator", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \n"
" \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
