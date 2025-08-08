/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(474, 431);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(20, 20, 131, 121));
        QFont font;
        font.setPointSize(30);
        btn1->setFont(font);
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(160, 20, 131, 121));
        btn2->setFont(font);
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(300, 20, 131, 121));
        btn3->setFont(font);
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(20, 150, 131, 121));
        btn4->setFont(font);
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(300, 150, 131, 121));
        btn5->setFont(font);
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(160, 150, 131, 121));
        btn6->setFont(font);
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(20, 280, 131, 121));
        btn7->setFont(font);
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(300, 280, 131, 121));
        btn8->setFont(font);
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(160, 280, 131, 121));
        btn9->setFont(font);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn1->setText(QApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QApplication::translate("MainWindow", "3", nullptr));
        btn4->setText(QApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QApplication::translate("MainWindow", "6", nullptr));
        btn6->setText(QApplication::translate("MainWindow", "5", nullptr));
        btn7->setText(QApplication::translate("MainWindow", "7", nullptr));
        btn8->setText(QApplication::translate("MainWindow", "9", nullptr));
        btn9->setText(QApplication::translate("MainWindow", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
