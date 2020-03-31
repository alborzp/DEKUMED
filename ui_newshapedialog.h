/********************************************************************************
** Form generated from reading UI file 'newshapedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSHAPEDIALOG_H
#define UI_NEWSHAPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newShapeDialog
{
public:
    QPushButton *cancelButt;
    QPushButton *saveButt;
    QPushButton *clearButt;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *nameLbl;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *NamelineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *HeightLbl;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *HeightLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *weidhtLbl;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *WidthLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *picLbl;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *gcodeLbl;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *gcodeTextEdit;

    void setupUi(QDialog *newShapeDialog)
    {
        if (newShapeDialog->objectName().isEmpty())
            newShapeDialog->setObjectName(QString::fromUtf8("newShapeDialog"));
        newShapeDialog->resize(800, 600);
        cancelButt = new QPushButton(newShapeDialog);
        cancelButt->setObjectName(QString::fromUtf8("cancelButt"));
        cancelButt->setGeometry(QRect(464, 531, 90, 40));
        saveButt = new QPushButton(newShapeDialog);
        saveButt->setObjectName(QString::fromUtf8("saveButt"));
        saveButt->setGeometry(QRect(343, 531, 90, 40));
        clearButt = new QPushButton(newShapeDialog);
        clearButt->setObjectName(QString::fromUtf8("clearButt"));
        clearButt->setGeometry(QRect(221, 531, 90, 40));
        layoutWidget = new QWidget(newShapeDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 10, 481, 151));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nameLbl = new QLabel(layoutWidget);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        QFont font;
        font.setPointSize(22);
        nameLbl->setFont(font);

        horizontalLayout->addWidget(nameLbl);

        horizontalSpacer_5 = new QSpacerItem(13, 144, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        NamelineEdit = new QLineEdit(layoutWidget);
        NamelineEdit->setObjectName(QString::fromUtf8("NamelineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NamelineEdit->sizePolicy().hasHeightForWidth());
        NamelineEdit->setSizePolicy(sizePolicy);
        NamelineEdit->setFont(font);
        NamelineEdit->setAcceptDrops(false);
        NamelineEdit->setMaxLength(20);

        horizontalLayout->addWidget(NamelineEdit);

        layoutWidget1 = new QWidget(newShapeDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 170, 481, 61));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        HeightLbl = new QLabel(layoutWidget1);
        HeightLbl->setObjectName(QString::fromUtf8("HeightLbl"));
        HeightLbl->setFont(font);

        horizontalLayout_3->addWidget(HeightLbl);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        HeightLineEdit = new QLineEdit(layoutWidget1);
        HeightLineEdit->setObjectName(QString::fromUtf8("HeightLineEdit"));
        sizePolicy.setHeightForWidth(HeightLineEdit->sizePolicy().hasHeightForWidth());
        HeightLineEdit->setSizePolicy(sizePolicy);
        HeightLineEdit->setFont(font);
        HeightLineEdit->setMaxLength(3);

        horizontalLayout_3->addWidget(HeightLineEdit);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        weidhtLbl = new QLabel(layoutWidget1);
        weidhtLbl->setObjectName(QString::fromUtf8("weidhtLbl"));
        weidhtLbl->setFont(font);

        horizontalLayout_4->addWidget(weidhtLbl);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        WidthLineEdit = new QLineEdit(layoutWidget1);
        WidthLineEdit->setObjectName(QString::fromUtf8("WidthLineEdit"));
        sizePolicy.setHeightForWidth(WidthLineEdit->sizePolicy().hasHeightForWidth());
        WidthLineEdit->setSizePolicy(sizePolicy);
        WidthLineEdit->setFont(font);
        WidthLineEdit->setAcceptDrops(false);
        WidthLineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        WidthLineEdit->setMaxLength(3);

        horizontalLayout_4->addWidget(WidthLineEdit);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        layoutWidget2 = new QWidget(newShapeDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(70, 290, 561, 211));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        picLbl = new QLabel(layoutWidget2);
        picLbl->setObjectName(QString::fromUtf8("picLbl"));
        picLbl->setFont(font);

        horizontalLayout_2->addWidget(picLbl);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        lineEdit_4 = new QLineEdit(layoutWidget2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_4);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        gcodeLbl = new QLabel(layoutWidget2);
        gcodeLbl->setObjectName(QString::fromUtf8("gcodeLbl"));
        gcodeLbl->setFont(font);

        horizontalLayout_5->addWidget(gcodeLbl);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        gcodeTextEdit = new QPlainTextEdit(layoutWidget2);
        gcodeTextEdit->setObjectName(QString::fromUtf8("gcodeTextEdit"));

        horizontalLayout_5->addWidget(gcodeTextEdit);


        horizontalLayout_7->addLayout(horizontalLayout_5);


        retranslateUi(newShapeDialog);

        QMetaObject::connectSlotsByName(newShapeDialog);
    } // setupUi

    void retranslateUi(QDialog *newShapeDialog)
    {
        newShapeDialog->setWindowTitle(QCoreApplication::translate("newShapeDialog", "Dialog", nullptr));
        cancelButt->setText(QCoreApplication::translate("newShapeDialog", "Zur\303\274ck", nullptr));
        saveButt->setText(QCoreApplication::translate("newShapeDialog", "Speichern", nullptr));
        clearButt->setText(QCoreApplication::translate("newShapeDialog", "Eingabe l\303\266chen", nullptr));
        nameLbl->setText(QCoreApplication::translate("newShapeDialog", "Name", nullptr));
        HeightLbl->setText(QCoreApplication::translate("newShapeDialog", "Height", nullptr));
        weidhtLbl->setText(QCoreApplication::translate("newShapeDialog", "Width", nullptr));
        WidthLineEdit->setText(QString());
        picLbl->setText(QCoreApplication::translate("newShapeDialog", "Bild", nullptr));
        gcodeLbl->setText(QCoreApplication::translate("newShapeDialog", "G Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newShapeDialog: public Ui_newShapeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSHAPEDIALOG_H
