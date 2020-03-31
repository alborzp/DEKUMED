#include "editshapedialog.h"
#include "ui_editshapedialog.h"
#include "mainwindow.h"
#include<QMessageBox>

editShapeDialog::editShapeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editShapeDialog)
{
    ui->setupUi(this);

    ui->newWidthLineEdit->setValidator(new QIntValidator(0, 999, this));
    ui->newHeightLineEdit->setValidator(new QIntValidator(0, 999, this));
}

editShapeDialog::~editShapeDialog()
{
    delete ui;
}

void editShapeDialog::SetItemList(QStringList itemList)
{
    ui->shapeListEdit->clear();
    ui->shapeListEdit->addItems(itemList);
}



void editShapeDialog::on_cancelButt_clicked()
{

    this->close();


}

void editShapeDialog::on_shapeListEdit_itemClicked(QListWidgetItem *item)
{
    selectedShapeName = item->text();
    if (!selectedShapeName.isNull()||!selectedShapeName.isEmpty()){
    QFile shapeFileConfig ("Lib/"+selectedShapeName+"/shapeConfig.txt");
    if(!shapeFileConfig.open(QFile::ReadOnly|QFile::Text))
    {
        return;
    }
    QTextStream inFromSchapeFileConfig (&shapeFileConfig);

    ui->altNameLbl->setText(selectedShapeName);

    QString shapeTextInhalatX = inFromSchapeFileConfig.readLine();
    shapeTextInhalatX.remove(0,2);
    int oldX = shapeTextInhalatX.toInt();
    ui->altwLbl->setNum(oldX);

    QString shapeTextInhalaty = inFromSchapeFileConfig.readLine();
    shapeTextInhalaty.remove(0,2);
    int oldY = shapeTextInhalaty.toInt();
    ui->altHbl->setNum(oldY);

    shapeFileConfig.close();

    QFile shapeFile ("Lib/"+selectedShapeName+"/"+selectedShapeName+".txt");
    QString test = "Lib/"+selectedShapeName+"/"+selectedShapeName+".txt";
    if(!shapeFile.open(QFile::ReadOnly|QFile::Text))
    {
        return;
    }
    QTextStream inFromSchapeFile (&shapeFile);
    QString shapeGCode = inFromSchapeFile.readAll();
    ui->altGcodeTxtEdit->setPlainText(shapeGCode);
    ui->altGcodeTxtEdit->isReadOnly();

    shapeFile.close();
    }else{
        QMessageBox::warning(this,"Warning","please select a Item at first");
    }
}


void editShapeDialog::on_saveButt_2_clicked()
{

    if (!selectedShapeName.isNull()||!selectedShapeName.isEmpty()){

    QDir myDir("./Lib");
    QString newOrdnerNewShape =ui->newNameLineEdit->text();
    if (newOrdnerNewShape==""&& newOrdnerNewShape.isEmpty()) {
        QMessageBox::warning(this,"Warning","Der Name darf nicht leer sein");
        return;
    }
    myDir.mkdir(newOrdnerNewShape);
    QDir myNeueDir("./Lib"+newOrdnerNewShape);

    QFile newshapeFile ("Lib/"+newOrdnerNewShape+"/"+newOrdnerNewShape+".txt");
    QFile newshapeConfigFile ("Lib/"+newOrdnerNewShape+"/shapeConfig.txt");

    if(newshapeFile.open(QIODevice::WriteOnly))

    {


        QTextStream out(&newshapeFile);
        out << ui->newGcodeTxtEdit->toPlainText();
        newshapeFile.close();

    }
    if(newshapeConfigFile.open(QIODevice::WriteOnly))

    {
        QString x = ui->newWidthLineEdit->text();
        QString y = ui->newHeightLineEdit->text();

        QTextStream out(&newshapeConfigFile);

        if (x.isEmpty()|| y.isEmpty()) {
            QMessageBox::warning(this,"Warning","Die Höhe und Breite sollen die zahlen zwischen 1-99 sein");
            return;
        }
        out << "x="<<x;
        out<< endl;
        out << "y="<<y;

        newshapeConfigFile.close();
        QString alteName = ui->altNameLbl->text();
        QDir alteDir("./Lib/"+alteName);
        alteDir.removeRecursively();
        if (alteDir.removeRecursively()){
            QMessageBox::information(this,"Info","erfolgreich Kompllet");
        }
        else{
            QMessageBox::warning(this,"Error","nicht erfolgreich");
        }

        emit refresh_ItemList();

        on_cancelButt_clicked();

    }
    }else{
        QMessageBox::warning(this,"Warning","please select a Item at first");
    }
}
