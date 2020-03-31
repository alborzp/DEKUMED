#include "loaddialog.h"
#include "ui_loaddialog.h"

loadDialog::loadDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loadDialog)
{
    ui->setupUi(this);
    setListToLoad();

}

loadDialog::~loadDialog()
{
    delete ui;
}

void loadDialog::setListToLoad()
{
    QStringList ListToLoad;
    QDir myDir("./saved");
    ListToLoad = myDir.entryList(QDir::Files| QDir::NoDotAndDotDot);
    ui->LoadDesignList->addItems(ListToLoad);
}

void loadDialog::setJsonToLoadName(QString name)
{
    this->JsonToLoad= name;
}

QString loadDialog::getJsonToLoadName()
{
    return  JsonToLoad;
}

void loadDialog::on_LoadDesignList_itemClicked(QListWidgetItem *item)
{
    ui->NamelineToLoad->setText(item->text());

    setJsonToLoadName(item->text());
}

void loadDialog::on_LoadButt_clicked()
{
    emit LoadSavedJson(getJsonToLoadName());
    this->close();
}

void loadDialog::on_cancelButt_clicked()
{
    this->close();
}
