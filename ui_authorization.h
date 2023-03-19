/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTabWidget *AuthorizationTabWidjet;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *loginLabel;
    QLineEdit *loginLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *EnteringPushButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *loginLabel_2;
    QLineEdit *loginLineEdit_2;
    QLabel *passwordLabel_2;
    QLineEdit *passwordLineEdit_2;
    QSpacerItem *verticalSpacer;
    QPushButton *EnteringPushButton_2;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName("Authorization");
        Authorization->resize(665, 668);
        Authorization->setMinimumSize(QSize(665, 668));
        Authorization->setMaximumSize(QSize(665, 668));
        Authorization->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Authorization);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 551, 121));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/dada.png")));
        AuthorizationTabWidjet = new QTabWidget(centralwidget);
        AuthorizationTabWidjet->setObjectName("AuthorizationTabWidjet");
        AuthorizationTabWidjet->setGeometry(QRect(40, 150, 571, 451));
        AuthorizationTabWidjet->setMinimumSize(QSize(571, 451));
        AuthorizationTabWidjet->setMaximumSize(QSize(571, 451));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        AuthorizationTabWidjet->setFont(font);
        AuthorizationTabWidjet->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"QTabBar\n"
"{\n"
"background-color: #0B6C87;\n"
"color:#ffffff;\n"
"}\n"
"QTabBar::tab:!selected \n"
"{\n"
"height: 60px;\n"
" width: 125px;\n"
"background-color: #0B6C87; \n"
"color:#ffffff;\n"
"font-size:11pt;\n"
"}\n"
"QTabBar::tab:selected {\n"
"height: 60px; \n"
"width: 125px;\n"
"background-color: #0BAFF2; \n"
"color:#ffffff;\n"
"font-size:12pt; \n"
"font-weight: bold;\n"
"}"));
        AuthorizationTabWidjet->setTabPosition(QTabWidget::North);
        AuthorizationTabWidjet->setTabShape(QTabWidget::Rounded);
        AuthorizationTabWidjet->setIconSize(QSize(40, 16));
        AuthorizationTabWidjet->setElideMode(Qt::ElideMiddle);
        AuthorizationTabWidjet->setUsesScrollButtons(true);
        AuthorizationTabWidjet->setDocumentMode(false);
        AuthorizationTabWidjet->setTabsClosable(false);
        AuthorizationTabWidjet->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        loginLabel = new QLabel(tab);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setFont(font);
        loginLabel->setTextFormat(Qt::RichText);

        verticalLayout->addWidget(loginLabel);

        loginLineEdit = new QLineEdit(tab);
        loginLineEdit->setObjectName("loginLineEdit");
        loginLineEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(loginLineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        passwordLabel = new QLabel(tab);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font);
        passwordLabel->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(tab);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passwordLineEdit);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        EnteringPushButton = new QPushButton(tab);
        EnteringPushButton->setObjectName("EnteringPushButton");
        QFont font1;
        font1.setPointSize(14);
        EnteringPushButton->setFont(font1);
        EnteringPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 12px;"));

        verticalLayout_5->addWidget(EnteringPushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        AuthorizationTabWidjet->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        loginLabel_2 = new QLabel(tab_2);
        loginLabel_2->setObjectName("loginLabel_2");
        loginLabel_2->setFont(font);
        loginLabel_2->setTextFormat(Qt::RichText);

        verticalLayout_3->addWidget(loginLabel_2);

        loginLineEdit_2 = new QLineEdit(tab_2);
        loginLineEdit_2->setObjectName("loginLineEdit_2");

        verticalLayout_3->addWidget(loginLineEdit_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        passwordLabel_2 = new QLabel(tab_2);
        passwordLabel_2->setObjectName("passwordLabel_2");
        passwordLabel_2->setFont(font);
        passwordLabel_2->setTextFormat(Qt::RichText);

        verticalLayout_4->addWidget(passwordLabel_2);

        passwordLineEdit_2 = new QLineEdit(tab_2);
        passwordLineEdit_2->setObjectName("passwordLineEdit_2");
        passwordLineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(passwordLineEdit_2);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        EnteringPushButton_2 = new QPushButton(tab_2);
        EnteringPushButton_2->setObjectName("EnteringPushButton_2");
        EnteringPushButton_2->setFont(font1);
        EnteringPushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 12px;"));

        verticalLayout_6->addWidget(EnteringPushButton_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        AuthorizationTabWidjet->addTab(tab_2, QString());
        Authorization->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Authorization);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 665, 25));
        Authorization->setMenuBar(menubar);

        retranslateUi(Authorization);

        AuthorizationTabWidjet->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QMainWindow *Authorization)
    {
        Authorization->setWindowTitle(QCoreApplication::translate("Authorization", "Authorization", nullptr));
        label->setText(QString());
        loginLabel->setText(QCoreApplication::translate("Authorization", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Authorization", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
#if QT_CONFIG(whatsthis)
        EnteringPushButton->setWhatsThis(QCoreApplication::translate("Authorization", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        EnteringPushButton->setText(QCoreApplication::translate("Authorization", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        AuthorizationTabWidjet->setTabText(AuthorizationTabWidjet->indexOf(tab), QCoreApplication::translate("Authorization", "\320\222\321\205\320\276\320\264", nullptr));
        loginLabel_2->setText(QCoreApplication::translate("Authorization", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        passwordLabel_2->setText(QCoreApplication::translate("Authorization", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        EnteringPushButton_2->setText(QCoreApplication::translate("Authorization", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        AuthorizationTabWidjet->setTabText(AuthorizationTabWidjet->indexOf(tab_2), QCoreApplication::translate("Authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
