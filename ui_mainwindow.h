/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *FrontLabel;
    QLabel *DownLabel;
    QLabel *rightLabel;
    QLabel *LeftLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(642, 432);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FrontLabel = new QLabel(centralWidget);
        FrontLabel->setObjectName(QStringLiteral("FrontLabel"));
        FrontLabel->setGeometry(QRect(240, 70, 31, 41));
        DownLabel = new QLabel(centralWidget);
        DownLabel->setObjectName(QStringLiteral("DownLabel"));
        DownLabel->setGeometry(QRect(240, 140, 31, 41));
        rightLabel = new QLabel(centralWidget);
        rightLabel->setObjectName(QStringLiteral("rightLabel"));
        rightLabel->setGeometry(QRect(280, 110, 31, 41));
        LeftLabel = new QLabel(centralWidget);
        LeftLabel->setObjectName(QStringLiteral("LeftLabel"));
        LeftLabel->setGeometry(QRect(200, 110, 31, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 642, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        FrontLabel->setText(QApplication::translate("MainWindow", "Front", Q_NULLPTR));
        DownLabel->setText(QApplication::translate("MainWindow", "Down", Q_NULLPTR));
        rightLabel->setText(QApplication::translate("MainWindow", "Right", Q_NULLPTR));
        LeftLabel->setText(QApplication::translate("MainWindow", "Left", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
