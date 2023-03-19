/********************************************************************************
** Form generated from reading UI file 'busket.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSKET_H
#define UI_BUSKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Busket
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;
    QLabel *PriceLabel;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QWidget *Busket)
    {
        if (Busket->objectName().isEmpty())
            Busket->setObjectName("Busket");
        Busket->resize(482, 447);
        verticalLayout = new QVBoxLayout(Busket);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Busket);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        tableView = new QTableView(Busket);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        PriceLabel = new QLabel(Busket);
        PriceLabel->setObjectName("PriceLabel");

        verticalLayout->addWidget(PriceLabel);

        checkBox = new QCheckBox(Busket);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        pushButton = new QPushButton(Busket);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Busket);

        QMetaObject::connectSlotsByName(Busket);
    } // setupUi

    void retranslateUi(QWidget *Busket)
    {
        Busket->setWindowTitle(QCoreApplication::translate("Busket", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("Busket", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260:", nullptr));
        PriceLabel->setText(QCoreApplication::translate("Busket", "\320\246\320\265\320\275\320\260: ", nullptr));
        checkBox->setText(QCoreApplication::translate("Busket", "\320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276 \320\262\320\262\320\265\320\273\320\270?", nullptr));
        pushButton->setText(QCoreApplication::translate("Busket", "\320\232\321\203\320\277\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Busket: public Ui_Busket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSKET_H
