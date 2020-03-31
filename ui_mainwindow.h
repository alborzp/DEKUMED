/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEdit_shape;
    QAction *actionExit;
    QAction *actionUser_Manuell;
    QAction *actionDelet_shape;
    QAction *actionNew_Shape;
    QAction *actionLoad;
    QAction *actionsave;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QSlider *xSlider;
    QSlider *ySlider;
    QLabel *xValue;
    QLabel *yValue;
    QListWidget *shapeList;
    QPushButton *dellAllButton;
    QPushButton *CodeGenButt;
    QRadioButton *rBshape;
    QRadioButton *rbGrid;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1127, 900);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        actionEdit_shape = new QAction(MainWindow);
        actionEdit_shape->setObjectName(QString::fromUtf8("actionEdit_shape"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recIcon /icon/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_shape->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/recIcon /icon/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionUser_Manuell = new QAction(MainWindow);
        actionUser_Manuell->setObjectName(QString::fromUtf8("actionUser_Manuell"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/recIcon /icon/Doc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUser_Manuell->setIcon(icon2);
        actionDelet_shape = new QAction(MainWindow);
        actionDelet_shape->setObjectName(QString::fromUtf8("actionDelet_shape"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/recIcon /icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelet_shape->setIcon(icon3);
        actionNew_Shape = new QAction(MainWindow);
        actionNew_Shape->setObjectName(QString::fromUtf8("actionNew_Shape"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/recIcon /icon/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Shape->setIcon(icon4);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/recIcon /icon/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon5);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/recIcon /icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(false);
        graphicsView->setGeometry(QRect(120, 10, 1000, 600));
        graphicsView->setMaximumSize(QSize(1122, 612));
        graphicsView->setAcceptDrops(true);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSceneRect(QRectF(0, 0, 500, 250));
        xSlider = new QSlider(centralwidget);
        xSlider->setObjectName(QString::fromUtf8("xSlider"));
        xSlider->setGeometry(QRect(390, 620, 160, 22));
        xSlider->setMinimum(1);
        xSlider->setMaximum(25);
        xSlider->setSingleStep(1);
        xSlider->setOrientation(Qt::Horizontal);
        ySlider = new QSlider(centralwidget);
        ySlider->setObjectName(QString::fromUtf8("ySlider"));
        ySlider->setGeometry(QRect(650, 620, 151, 22));
        ySlider->setMinimum(1);
        ySlider->setMaximum(25);
        ySlider->setOrientation(Qt::Horizontal);
        xValue = new QLabel(centralwidget);
        xValue->setObjectName(QString::fromUtf8("xValue"));
        xValue->setGeometry(QRect(320, 620, 47, 14));
        yValue = new QLabel(centralwidget);
        yValue->setObjectName(QString::fromUtf8("yValue"));
        yValue->setGeometry(QRect(590, 620, 47, 14));
        shapeList = new QListWidget(centralwidget);
        shapeList->setObjectName(QString::fromUtf8("shapeList"));
        shapeList->setEnabled(false);
        shapeList->setGeometry(QRect(10, 10, 101, 601));
        dellAllButton = new QPushButton(centralwidget);
        dellAllButton->setObjectName(QString::fromUtf8("dellAllButton"));
        dellAllButton->setEnabled(false);
        dellAllButton->setGeometry(QRect(600, 660, 211, 51));
        CodeGenButt = new QPushButton(centralwidget);
        CodeGenButt->setObjectName(QString::fromUtf8("CodeGenButt"));
        CodeGenButt->setEnabled(false);
        CodeGenButt->setGeometry(QRect(320, 660, 231, 51));
        rBshape = new QRadioButton(centralwidget);
        rBshape->setObjectName(QString::fromUtf8("rBshape"));
        rBshape->setEnabled(true);
        rBshape->setGeometry(QRect(20, 630, 121, 16));
        rbGrid = new QRadioButton(centralwidget);
        rbGrid->setObjectName(QString::fromUtf8("rbGrid"));
        rbGrid->setGeometry(QRect(160, 630, 82, 17));
        rbGrid->setChecked(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1127, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Shape);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionsave);
        menuFile->addAction(actionEdit_shape);
        menuFile->addAction(actionDelet_shape);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionUser_Manuell);
        toolBar->addAction(actionNew_Shape);
        toolBar->addAction(actionEdit_shape);
        toolBar->addAction(actionsave);
        toolBar->addAction(actionLoad);
        toolBar->addAction(actionDelet_shape);
        toolBar->addSeparator();
        toolBar->addAction(actionUser_Manuell);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEdit_shape->setText(QCoreApplication::translate("MainWindow", "Edit shape", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionUser_Manuell->setText(QCoreApplication::translate("MainWindow", "User Manuell", nullptr));
        actionDelet_shape->setText(QCoreApplication::translate("MainWindow", "Delet shape", nullptr));
        actionNew_Shape->setText(QCoreApplication::translate("MainWindow", "New Shape", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad->setToolTip(QCoreApplication::translate("MainWindow", "Load", nullptr));
#endif // QT_CONFIG(tooltip)
        actionsave->setText(QCoreApplication::translate("MainWindow", "Save ", nullptr));
        xValue->setText(QCoreApplication::translate("MainWindow", "X Achse", nullptr));
        yValue->setText(QCoreApplication::translate("MainWindow", "Y Achse", nullptr));
        dellAllButton->setText(QCoreApplication::translate("MainWindow", "Delete all", nullptr));
        CodeGenButt->setText(QCoreApplication::translate("MainWindow", "Code Genrator", nullptr));
        rBshape->setText(QCoreApplication::translate("MainWindow", "hei\303\237platte Einrichten", nullptr));
        rbGrid->setText(QCoreApplication::translate("MainWindow", "Grid Einstellen", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
