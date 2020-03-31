#include "newshapedialog.h"
#include "ui_newshapedialog.h"
#include <QIntValidator>
#include <QValidator>
#include <QMessageBox>
#include <QRegExpValidator>
#include "mainwindow.h"

newShapeDialog::newShapeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newShapeDialog)
{
    ui->setupUi(this);

    ui->WidthLineEdit->setValidator(new QIntValidator(0, 999, this));
    ui->HeightLineEdit->setValidator(new QIntValidator(0, 999, this));


}

newShapeDialog::~newShapeDialog()
{
    delete ui;
}

void newShapeDialog::on_cancelButt_clicked()
{

    this->close();

}

void newShapeDialog::on_saveButt_clicked()
{

    QDir myDir("./Lib");
    QStringList listofshape= myDir.entryList(QDir::Dirs| QDir::NoDotAndDotDot);


    QString newOrdner =ui->NamelineEdit->text();
    if (listofshape.contains(newOrdner)){
        QMessageBox::warning(this,"Name Konflikt"," der eingegebene name existiert\n bitte ander name eingeben");

    }else{
    if (newOrdner==""&& newOrdner.isEmpty()) {
        QMessageBox::warning(this,"Warning","Der Name darf nicht leer sein");
        return;
    }
    myDir.mkdir(newOrdner);
    QDir myNeueDir("./Lib"+newOrdner);

    QFile newshapeFile ("./Lib/"+newOrdner+"/"+newOrdner+".txt");
    QFile newshapeConfigFile ("./Lib/"+newOrdner+"/shapeConfig.txt");

    if(newshapeFile.open(QIODevice::WriteOnly))

    {


        QTextStream out(&newshapeFile);
        out << ui->gcodeTextEdit->toPlainText();
        newshapeFile.close();

    }
    if(newshapeConfigFile.open(QIODevice::WriteOnly))

    {
        QString x = ui->WidthLineEdit->text();
        QString y = ui->HeightLineEdit->text();


        QTextStream out(&newshapeConfigFile);

        if (x.isEmpty()|| y.isEmpty()) {
            QMessageBox::warning(this,"Warning","Die Höhe und Breite sollen die zahlen zwischen 1-99 sein");
            return;
        }
        out << "x="<<x;
        out<< endl;
        out << "y="<<y;

        newshapeConfigFile.close();

        emit refresh_ItemList();

        on_cancelButt_clicked();

    }
    }



}


