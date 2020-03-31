/********************************************************************************
** Form generated from reading UI file 'loaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADDIALOG_H
#define UI_LOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loadDialog
{
public:
    QPushButton *cancelButt;
    QPushButton *LoadButt;
    QListWidget *LoadDesignList;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLbl_2;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *NamelineToLoad;

    void setupUi(QDialog *loadDialog)
    {
        if (loadDialog->objectName().isEmpty())
            loadDialog->setObjectName(QString::fromUtf8("loadDialog"));
        loadDialog->resize(800, 600);
        loadDialog->setMinimumSize(QSize(800, 600));
        loadDialog->setMaximumSize(QSize(800, 600));
        cancelButt = new QPushButton(loadDialog);
        cancelButt->setObjectName(QString::fromUtf8("cancelButt"));
        cancelButt->setGeometry(QRect(543, 400, 90, 40));
        LoadButt = new QPushButton(loadDialog);
        LoadButt->setObjectName(QString::fromUtf8("LoadButt"));
        LoadButt->setGeometry(QRect(300, 400, 90, 40));
        LoadDesignList = new QListWidget(loadDialog);
        LoadDesignList->setObjectName(QString::fromUtf8("LoadDesignList"));
        LoadDesignList->setGeometry(QRect(50, 30, 141, 491));
        layoutWidget = new QWidget(loadDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 60, 481, 151));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLbl_2 = new QLabel(layoutWidget);
        nameLbl_2->setObjectName(QString::fromUtf8("nameLbl_2"));
        QFont font;
        font.setPointSize(22);
        nameLbl_2->setFont(font);

        horizontalLayout_2->addWidget(nameLbl_2);

        horizontalSpacer_6 = new QSpacerItem(12, 144, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        NamelineToLoad = new QLineEdit(layoutWidget);
        NamelineToLoad->setObjectName(QString::fromUtf8("NamelineToLoad"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NamelineToLoad->sizePolicy().hasHeightForWidth());
        NamelineToLoad->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        NamelineToLoad->setFont(font1);
        NamelineToLoad->setAcceptDrops(false);
        NamelineToLoad->setMaxLength(20);

        horizontalLayout_2->addWidget(NamelineToLoad);


        retranslateUi(loadDialog);

        QMetaObject::connectSlotsByName(loadDialog);
    } // setupUi

    void retranslateUi(QDialog *loadDialog)
    {
        loadDialog->setWindowTitle(QCoreApplication::translate("loadDialog", "Dialog", nullptr));
        cancelButt->setText(QCoreApplication::translate("loadDialog", "Zur\303\274ck", nullptr));
        LoadButt->setText(QCoreApplication::translate("loadDialog", "Wiederherstellen", nullptr));
        nameLbl_2->setText(QCoreApplication::translate("loadDialog", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loadDialog: public Ui_loadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADDIALOG_H
