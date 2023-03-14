/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *baroquePushButton;
    QPushButton *classicPushButton;
    QPushButton *hi_techPushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *poolCheckBox;
    QCheckBox *garageCheckBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *houseLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *poolLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *garageLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 421);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 9, 771, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        baroquePushButton = new QPushButton(horizontalLayoutWidget);
        baroquePushButton->setObjectName("baroquePushButton");
        baroquePushButton->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font.setPointSize(16);
        baroquePushButton->setFont(font);

        horizontalLayout->addWidget(baroquePushButton);

        classicPushButton = new QPushButton(horizontalLayoutWidget);
        classicPushButton->setObjectName("classicPushButton");
        classicPushButton->setMinimumSize(QSize(0, 50));
        classicPushButton->setFont(font);

        horizontalLayout->addWidget(classicPushButton);

        hi_techPushButton = new QPushButton(horizontalLayoutWidget);
        hi_techPushButton->setObjectName("hi_techPushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hi_techPushButton->sizePolicy().hasHeightForWidth());
        hi_techPushButton->setSizePolicy(sizePolicy);
        hi_techPushButton->setMinimumSize(QSize(0, 50));
        hi_techPushButton->setFont(font);

        horizontalLayout->addWidget(hi_techPushButton);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 110, 771, 50));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        poolCheckBox = new QCheckBox(horizontalLayoutWidget_2);
        poolCheckBox->setObjectName("poolCheckBox");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Print")});
        font1.setPointSize(18);
        poolCheckBox->setFont(font1);

        horizontalLayout_2->addWidget(poolCheckBox);

        garageCheckBox = new QCheckBox(horizontalLayoutWidget_2);
        garageCheckBox->setObjectName("garageCheckBox");
        garageCheckBox->setFont(font1);

        horizontalLayout_2->addWidget(garageCheckBox);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 180, 771, 181));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        houseLabel = new QLabel(horizontalLayoutWidget_3);
        houseLabel->setObjectName("houseLabel");
        houseLabel->setMaximumSize(QSize(242, 16777215));
        houseLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(houseLabel);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        poolLabel = new QLabel(horizontalLayoutWidget_3);
        poolLabel->setObjectName("poolLabel");
        poolLabel->setMaximumSize(QSize(242, 16777215));
        poolLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(poolLabel);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        garageLabel = new QLabel(horizontalLayoutWidget_3);
        garageLabel->setObjectName("garageLabel");
        garageLabel->setMaximumSize(QSize(242, 16777215));
        garageLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(garageLabel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        baroquePushButton->setText(QCoreApplication::translate("MainWindow", "Baroque House", nullptr));
        classicPushButton->setText(QCoreApplication::translate("MainWindow", "Classic House", nullptr));
        hi_techPushButton->setText(QCoreApplication::translate("MainWindow", "Hi_tech House", nullptr));
        poolCheckBox->setText(QCoreApplication::translate("MainWindow", "Pool", nullptr));
        garageCheckBox->setText(QCoreApplication::translate("MainWindow", "Garage", nullptr));
        houseLabel->setText(QString());
        poolLabel->setText(QString());
        garageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
