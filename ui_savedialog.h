/********************************************************************************
** Form generated from reading UI file 'savedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDIALOG_H
#define UI_SAVEDIALOG_H

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

class Ui_saveDialog
{
public:
    QPushButton *cancelButt;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLbl_2;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *Namelinesave;
    QPushButton *saveButt;
    QPushButton *clearButt;
    QListWidget *savedDesignList;

    void setupUi(QDialog *saveDialog)
    {
        if (saveDialog->objectName().isEmpty())
            saveDialog->setObjectName(QString::fromUtf8("saveDialog"));
        saveDialog->resize(800, 600);
        saveDialog->setMinimumSize(QSize(800, 600));
        saveDialog->setMaximumSize(QSize(800, 600));
        cancelButt = new QPushButton(saveDialog);
        cancelButt->setObjectName(QString::fromUtf8("cancelButt"));
        cancelButt->setGeometry(QRect(553, 370, 90, 40));
        layoutWidget = new QWidget(saveDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 130, 481, 151));
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

        Namelinesave = new QLineEdit(layoutWidget);
        Namelinesave->setObjectName(QString::fromUtf8("Namelinesave"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Namelinesave->sizePolicy().hasHeightForWidth());
        Namelinesave->setSizePolicy(sizePolicy);
        Namelinesave->setFont(font);
        Namelinesave->setAcceptDrops(false);
        Namelinesave->setMaxLength(20);

        horizontalLayout_2->addWidget(Namelinesave);

        saveButt = new QPushButton(saveDialog);
        saveButt->setObjectName(QString::fromUtf8("saveButt"));
        saveButt->setGeometry(QRect(432, 370, 90, 40));
        clearButt = new QPushButton(saveDialog);
        clearButt->setObjectName(QString::fromUtf8("clearButt"));
        clearButt->setGeometry(QRect(310, 370, 90, 40));
        savedDesignList = new QListWidget(saveDialog);
        savedDesignList->setObjectName(QString::fromUtf8("savedDesignList"));
        savedDesignList->setGeometry(QRect(40, 40, 111, 491));

        retranslateUi(saveDialog);

        QMetaObject::connectSlotsByName(saveDialog);
    } // setupUi

    void retranslateUi(QDialog *saveDialog)
    {
        saveDialog->setWindowTitle(QCoreApplication::translate("saveDialog", "Dialog", nullptr));
        cancelButt->setText(QCoreApplication::translate("saveDialog", "Zur\303\274ck", nullptr));
        nameLbl_2->setText(QCoreApplication::translate("saveDialog", "Name", nullptr));
        saveButt->setText(QCoreApplication::translate("saveDialog", "Speichern", nullptr));
        clearButt->setText(QCoreApplication::translate("saveDialog", "L\303\266chen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saveDialog: public Ui_saveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDIALOG_H
