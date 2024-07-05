/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *txtTask;
    QPushButton *btnAdd;
    QListWidget *listWidget;
    QPushButton *btnDeeleteAll;
    QPushButton *btnDelete;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(542, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txtTask = new QLineEdit(centralwidget);
        txtTask->setObjectName("txtTask");
        txtTask->setGeometry(QRect(10, 10, 401, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(true);
        font.setKerning(true);
        txtTask->setFont(font);
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(422, 10, 101, 29));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(25, 70, 471, 461));
        btnDeeleteAll = new QPushButton(centralwidget);
        btnDeeleteAll->setObjectName("btnDeeleteAll");
        btnDeeleteAll->setGeometry(QRect(430, 550, 101, 29));
        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(300, 550, 101, 29));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        btnDeeleteAll->setText(QCoreApplication::translate("MainWindow", "DELETE ALL", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
