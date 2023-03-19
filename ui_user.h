/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "abstract.h"

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QTableView *tableView;
    QPushButton *SortingPushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *searchLineEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QPushButton *BusketPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *OpenBusketPushButton;

    void setupUi(Abstract *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(1312, 661);
        User->setMinimumSize(QSize(1312, 661));
        User->setMaximumSize(QSize(1312, 661));
        tableView = new QTableView(User);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 30, 761, 480));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        tableView->setFont(font);
        SortingPushButton = new QPushButton(User);
        SortingPushButton->setObjectName("SortingPushButton");
        SortingPushButton->setGeometry(QRect(883, 469, 361, 29));
        SortingPushButton->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(User);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1100, 90, 141, 358));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        checkBox_9 = new QCheckBox(layoutWidget);
        checkBox_9->setObjectName("checkBox_9");

        verticalLayout_5->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(layoutWidget);
        checkBox_10->setObjectName("checkBox_10");

        verticalLayout_5->addWidget(checkBox_10);

        checkBox_11 = new QCheckBox(layoutWidget);
        checkBox_11->setObjectName("checkBox_11");

        verticalLayout_5->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(layoutWidget);
        checkBox_12->setObjectName("checkBox_12");

        verticalLayout_5->addWidget(checkBox_12);

        checkBox_13 = new QCheckBox(layoutWidget);
        checkBox_13->setObjectName("checkBox_13");

        verticalLayout_5->addWidget(checkBox_13);

        checkBox_14 = new QCheckBox(layoutWidget);
        checkBox_14->setObjectName("checkBox_14");

        verticalLayout_5->addWidget(checkBox_14);

        checkBox_15 = new QCheckBox(layoutWidget);
        checkBox_15->setObjectName("checkBox_15");

        verticalLayout_5->addWidget(checkBox_15);

        layoutWidget1 = new QWidget(User);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(884, 90, 209, 358));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName("checkBox");

        verticalLayout_4->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget1);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_4->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(layoutWidget1);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_4->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(layoutWidget1);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout_4->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(layoutWidget1);
        checkBox_5->setObjectName("checkBox_5");

        verticalLayout_4->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(layoutWidget1);
        checkBox_6->setObjectName("checkBox_6");

        verticalLayout_4->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(layoutWidget1);
        checkBox_7->setObjectName("checkBox_7");

        verticalLayout_4->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(layoutWidget1);
        checkBox_8->setObjectName("checkBox_8");

        verticalLayout_4->addWidget(checkBox_8);

        layoutWidget2 = new QWidget(User);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(883, 29, 361, 63));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        searchLineEdit = new QLineEdit(layoutWidget2);
        searchLineEdit->setObjectName("searchLineEdit");

        verticalLayout->addWidget(searchLineEdit);

        layoutWidget3 = new QWidget(User);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(540, 550, 211, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        BusketPushButton = new QPushButton(layoutWidget3);
        BusketPushButton->setObjectName("BusketPushButton");
        BusketPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(BusketPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OpenBusketPushButton = new QPushButton(layoutWidget3);
        OpenBusketPushButton->setObjectName("OpenBusketPushButton");
        OpenBusketPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(OpenBusketPushButton);


        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(Abstract *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "ASOI SHOP", nullptr));
        SortingPushButton->setText(QCoreApplication::translate("User", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        checkBox_9->setText(QCoreApplication::translate("User", "\320\266\320\265\321\201\321\202\320\272\320\270\320\271 \320\264\320\270\321\201\320\272", nullptr));
        checkBox_10->setText(QCoreApplication::translate("User", "\320\275\320\276\321\203\321\202\320\261\321\203\320\272", nullptr));
        checkBox_11->setText(QCoreApplication::translate("User", "\320\274\320\276\320\275\320\270\321\202\320\276\321\200", nullptr));
        checkBox_12->setText(QCoreApplication::translate("User", "\320\277\320\273\320\260\320\275\321\210\320\265\321\202", nullptr));
        checkBox_13->setText(QCoreApplication::translate("User", "\321\203\320\274\320\275\321\213\320\265 \321\207\320\260\321\201\321\213", nullptr));
        checkBox_14->setText(QCoreApplication::translate("User", "\321\200\320\276\320\261\320\276\321\202-\320\277\321\213\320\273\320\265\321\201\320\276\321\201", nullptr));
        checkBox_15->setText(QCoreApplication::translate("User", "\321\215\320\273\320\265\320\272\321\202\321\200\320\276\321\201\320\260\320\274\320\276\320\272\320\260\321\202", nullptr));
        checkBox->setText(QCoreApplication::translate("User", "\320\277\321\213\320\273\320\265\321\201\320\276\321\201", nullptr));
        checkBox_2->setText(QCoreApplication::translate("User", "\321\201\320\274\320\260\321\200\321\202\321\204\320\276\320\275", nullptr));
        checkBox_3->setText(QCoreApplication::translate("User", "\320\261\320\265\321\201\320\277\321\200\320\276\320\262\320\276\320\264\320\275\321\213\320\265 \320\275\320\260\321\203\321\210\320\275\320\270\320\272\320\270", nullptr));
        checkBox_4->setText(QCoreApplication::translate("User", "\320\277\321\200\320\276\320\262\320\276\320\264\320\275\321\213\320\265 \320\275\320\260\321\203\321\210\320\275\320\270\320\272\320\270", nullptr));
        checkBox_5->setText(QCoreApplication::translate("User", "\320\262\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\320\260", nullptr));
        checkBox_6->setText(QCoreApplication::translate("User", "\320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        checkBox_7->setText(QCoreApplication::translate("User", "\320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
        checkBox_8->setText(QCoreApplication::translate("User", "SSD", nullptr));
        label->setText(QCoreApplication::translate("User", "\320\237\320\276\320\270\321\201\320\272:", nullptr));
        BusketPushButton->setText(QCoreApplication::translate("User", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \n"
" \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        OpenBusketPushButton->setText(QCoreApplication::translate("User", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \n"
" \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
