#include "savedialog.h"
#include "ui_savedialog.h"
#include "mainwindow.h"

saveDialog::saveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saveDialog)
{
    ui->setupUi(this);
    setSavedList();




}

saveDialog::~saveDialog()
{
    delete ui;
}

void saveDialog::setSavedName(QString name){
    this->jsonName = name;
}
QString saveDialog::getSavedName(){
    return jsonName;
}

void saveDialog::setSavedList()
{
    QDir myDir("./saved");
    savedList= myDir.entryList(QDir::Files| QDir::NoDotAndDotDot);
    ui->savedDesignList->addItems(savedList);
}
void saveDialog::on_cancelButt_clicked()
{
    this->close();
}



void saveDialog::on_saveButt_clicked()
{
   setSavedName(ui->Namelinesave->text());
   emit addToJsonSaved(getSavedName());
    this->close();
}



void saveDialog::on_savedDesignList_itemClicked(QListWidgetItem *item)
{

    selectedsaved = item->text();
    ui->Namelinesave->setText(selectedsaved);



}

void saveDialog::on_clearButt_clicked()
{

    QDir myDir("./saved");
    myDir.remove(selectedsaved);
    savedList.removeOne(selectedsaved);
    ui->savedDesignList->clear();
    setSavedList();

}
