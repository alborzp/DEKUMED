/********************************************************************************
** Form generated from reading UI file 'editshapedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSHAPEDIALOG_H
#define UI_EDITSHAPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editShapeDialog
{
public:
    QListWidget *shapeListEdit;
    QPushButton *saveButt_2;
    QPushButton *cancelButt_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *nameLbl;
    QSpacerItem *horizontalSpacer_6;
    QLabel *altNameLbl;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *newNameLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *HeightLbl;
    QSpacerItem *horizontalSpacer_9;
    QLabel *altHbl;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *newHeightLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *weidhtLbl;
    QSpacerItem *horizontalSpacer_7;
    QLabel *altwLbl;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *newWidthLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *gcodeLbl;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *altGcodeTxtEdit;
    QSpacerItem *horizontalSpacer_10;
    QPlainTextEdit *newGcodeTxtEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *picLbl;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *editShapeDialog)
    {
        if (editShapeDialog->objectName().isEmpty())
            editShapeDialog->setObjectName(QString::fromUtf8("editShapeDialog"));
        editShapeDialog->resize(800, 600);
        editShapeDialog->setStyleSheet(QString::fromUtf8(""));
        shapeListEdit = new QListWidget(editShapeDialog);
        shapeListEdit->setObjectName(QString::fromUtf8("shapeListEdit"));
        shapeListEdit->setGeometry(QRect(20, 10, 101, 491));
        saveButt_2 = new QPushButton(editShapeDialog);
        saveButt_2->setObjectName(QString::fromUtf8("saveButt_2"));
        saveButt_2->setGeometry(QRect(379, 520, 90, 40));
        cancelButt_2 = new QPushButton(editShapeDialog);
        cancelButt_2->setObjectName(QString::fromUtf8("cancelButt_2"));
        cancelButt_2->setGeometry(QRect(500, 520, 90, 40));
        layoutWidget = new QWidget(editShapeDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 40, 267, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nameLbl = new QLabel(layoutWidget);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        QFont font;
        font.setPointSize(16);
        nameLbl->setFont(font);

        horizontalLayout->addWidget(nameLbl);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        altNameLbl = new QLabel(layoutWidget);
        altNameLbl->setObjectName(QString::fromUtf8("altNameLbl"));
        altNameLbl->setSizeIncrement(QSize(20, 0));

        horizontalLayout->addWidget(altNameLbl);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        newNameLineEdit = new QLineEdit(layoutWidget);
        newNameLineEdit->setObjectName(QString::fromUtf8("newNameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newNameLineEdit->sizePolicy().hasHeightForWidth());
        newNameLineEdit->setSizePolicy(sizePolicy);
        newNameLineEdit->setMaximumSize(QSize(100, 40));
        QFont font1;
        font1.setPointSize(22);
        newNameLineEdit->setFont(font1);
        newNameLineEdit->setAcceptDrops(false);
        newNameLineEdit->setMaxLength(20);

        horizontalLayout->addWidget(newNameLineEdit);

        layoutWidget1 = new QWidget(editShapeDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 120, 532, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        HeightLbl = new QLabel(layoutWidget1);
        HeightLbl->setObjectName(QString::fromUtf8("HeightLbl"));
        HeightLbl->setFont(font);

        horizontalLayout_3->addWidget(HeightLbl);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        altHbl = new QLabel(layoutWidget1);
        altHbl->setObjectName(QString::fromUtf8("altHbl"));
        altHbl->setMinimumSize(QSize(60, 40));
        altHbl->setMaximumSize(QSize(60, 40));
        altHbl->setSizeIncrement(QSize(20, 0));

        horizontalLayout_3->addWidget(altHbl);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        newHeightLineEdit = new QLineEdit(layoutWidget1);
        newHeightLineEdit->setObjectName(QString::fromUtf8("newHeightLineEdit"));
        sizePolicy.setHeightForWidth(newHeightLineEdit->sizePolicy().hasHeightForWidth());
        newHeightLineEdit->setSizePolicy(sizePolicy);
        newHeightLineEdit->setMinimumSize(QSize(60, 40));
        newHeightLineEdit->setMaximumSize(QSize(60, 40));
        newHeightLineEdit->setFont(font1);
        newHeightLineEdit->setMaxLength(3);

        horizontalLayout_3->addWidget(newHeightLineEdit);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        weidhtLbl = new QLabel(layoutWidget1);
        weidhtLbl->setObjectName(QString::fromUtf8("weidhtLbl"));
        weidhtLbl->setFont(font);

        horizontalLayout_3->addWidget(weidhtLbl);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        altwLbl = new QLabel(layoutWidget1);
        altwLbl->setObjectName(QString::fromUtf8("altwLbl"));
        altwLbl->setMinimumSize(QSize(60, 40));
        altwLbl->setMaximumSize(QSize(60, 40));
        altwLbl->setSizeIncrement(QSize(20, 0));

        horizontalLayout_3->addWidget(altwLbl);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        newWidthLineEdit = new QLineEdit(layoutWidget1);
        newWidthLineEdit->setObjectName(QString::fromUtf8("newWidthLineEdit"));
        sizePolicy.setHeightForWidth(newWidthLineEdit->sizePolicy().hasHeightForWidth());
        newWidthLineEdit->setSizePolicy(sizePolicy);
        newWidthLineEdit->setMinimumSize(QSize(60, 40));
        newWidthLineEdit->setMaximumSize(QSize(60, 40));
        newWidthLineEdit->setFont(font1);
        newWidthLineEdit->setAcceptDrops(false);
        newWidthLineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        newWidthLineEdit->setMaxLength(3);

        horizontalLayout_3->addWidget(newWidthLineEdit);

        layoutWidget2 = new QWidget(editShapeDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(140, 180, 646, 194));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gcodeLbl = new QLabel(layoutWidget2);
        gcodeLbl->setObjectName(QString::fromUtf8("gcodeLbl"));
        gcodeLbl->setFont(font);

        horizontalLayout_2->addWidget(gcodeLbl);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        altGcodeTxtEdit = new QPlainTextEdit(layoutWidget2);
        altGcodeTxtEdit->setObjectName(QString::fromUtf8("altGcodeTxtEdit"));

        horizontalLayout_2->addWidget(altGcodeTxtEdit);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        newGcodeTxtEdit = new QPlainTextEdit(layoutWidget2);
        newGcodeTxtEdit->setObjectName(QString::fromUtf8("newGcodeTxtEdit"));

        horizontalLayout_2->addWidget(newGcodeTxtEdit);

        layoutWidget3 = new QWidget(editShapeDialog);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(169, 410, 338, 43));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        picLbl = new QLabel(layoutWidget3);
        picLbl->setObjectName(QString::fromUtf8("picLbl"));
        picLbl->setFont(font);

        horizontalLayout_4->addWidget(picLbl);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        lineEdit_4 = new QLineEdit(layoutWidget3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setFont(font1);

        horizontalLayout_4->addWidget(lineEdit_4);


        retranslateUi(editShapeDialog);

        QMetaObject::connectSlotsByName(editShapeDialog);
    } // setupUi

    void retranslateUi(QDialog *editShapeDialog)
    {
        editShapeDialog->setWindowTitle(QCoreApplication::translate("editShapeDialog", "Dialog", nullptr));
        saveButt_2->setText(QCoreApplication::translate("editShapeDialog", "Speichern", nullptr));
        cancelButt_2->setText(QCoreApplication::translate("editShapeDialog", "Zur\303\274ck", nullptr));
        nameLbl->setText(QCoreApplication::translate("editShapeDialog", "Name", nullptr));
        altNameLbl->setText(QString());
        HeightLbl->setText(QCoreApplication::translate("editShapeDialog", "Height", nullptr));
        altHbl->setText(QString());
        weidhtLbl->setText(QCoreApplication::translate("editShapeDialog", "Width", nullptr));
        altwLbl->setText(QString());
        newWidthLineEdit->setText(QString());
        gcodeLbl->setText(QCoreApplication::translate("editShapeDialog", "G Code", nullptr));
        picLbl->setText(QCoreApplication::translate("editShapeDialog", "Bild", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editShapeDialog: public Ui_editShapeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSHAPEDIALOG_H
