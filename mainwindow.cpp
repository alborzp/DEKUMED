#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileInfo>
#include<QMessageBox>
#include <QDomDocument>





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    MyScene = new SceneClass(this);


    setItemList();

    ui->shapeList->addItems(getItemList());
    ui->shapeList->setFixedWidth(100);
    ui->shapeList->setDragEnabled(true);

    ui->graphicsView->setScene(MyScene);
    ui->graphicsView->setAcceptDrops(true);
    ui->graphicsView->setAlignment(Qt::AlignTop |Qt::AlignLeft);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setItemList()
{
    QDir myDir("./Lib");
    itemList = myDir.entryList(QDir::Dirs| QDir::NoDotAndDotDot);
}

void MainWindow::addToItemList()
{
    ui->shapeList->clear();
    setItemList();
    ui->shapeList->addItems(getItemList());
}
QStringList MainWindow::getItemList()
{
       return itemList;
}
void MainWindow::saveProjektDesigntoJson(QString name){


    QFile saveJsonFile("./saved/"+ name+".json");
    QList<QGraphicsItem *> items =   ui->graphicsView->items();

    if (saveJsonFile.open(QIODevice::WriteOnly)) {

        QJsonObject sceneObject;
        shapeToDrag* shape_ptr;
        QPointF position;
        QJsonArray levelArray;

        foreach (QGraphicsItem *item, items)
        {

            QJsonObject einzelShapeObject;
            shape_ptr = (shapeToDrag*)item;

                    position = item->pos();
                    einzelShapeObject["name"] = shape_ptr->getName();
                    einzelShapeObject["x"] = position.x()/10;
                    einzelShapeObject["y"] = position.y()/10;
                    levelArray.append(einzelShapeObject);

        }
        sceneObject["shapes"]=levelArray;
        sceneObject["xValueSlider"] = ui->xSlider->value();
        sceneObject["yValueSlider"] = ui->ySlider->value();

        QJsonDocument saveSceneObject(sceneObject);
        saveJsonFile.write(saveSceneObject.toJson());
    }
    saveJsonFile.close();
}



void MainWindow::sortJsonFile()
{
    //Read json datei und speichert in einem Arry
    // wir werden ein neue vector of new struct shape mit name x y difiniren

    QList<shapeToDrag *>ListShapeFromJson;
    QList<shapeToDrag *>SortedListShapeFromJson;

    int yGridFromJsonFile =0;

    QFile loadJsonFile("./saved/Autosave.json");
    if (!loadJsonFile.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open saved file.");
        return ;
    }
    QByteArray saveData = loadJsonFile.readAll();
    QJsonDocument loadDoc=QJsonDocument::fromJson(saveData);

    //hale be read aval residim
    //read az file game.cpp
    QJsonObject JObjectFromJDocJsonFile=loadDoc.object();

    if (JObjectFromJDocJsonFile.contains("yValueSlider")) {
        yGridFromJsonFile = JObjectFromJDocJsonFile["yValueSlider"].toInt();
    }

        //hala read dovom omad

    if (JObjectFromJDocJsonFile.contains("shapes") && JObjectFromJDocJsonFile["shapes"].isArray()) {
        QJsonArray shapeArray = JObjectFromJDocJsonFile["shapes"].toArray();
        ListShapeFromJson.clear();
        ListShapeFromJson.reserve(shapeArray.size());
        for (int levelIndex = 0; levelIndex < shapeArray.size(); ++levelIndex) {
            QJsonObject levelObject = shapeArray[levelIndex].toObject();
            shapeToDrag *s1 = new shapeToDrag;

            if (levelObject.contains("name") && levelObject["name"].isString())
                s1->setName(levelObject["name"].toString());
            if (levelObject.contains("name") && levelObject["name"].isString())
                s1->setXPosition(levelObject["x"].toInt());
            if (levelObject.contains("name") && levelObject["name"].isString())
                s1->setYPosition(levelObject["y"].toInt());

            ListShapeFromJson.append(s1);
        }
    }

    bool richtung = true;
    int ystartedGridvalue=0;
    int yFinischedGridValue= yGridFromJsonFile;

        while(ystartedGridvalue<60){
        QList<shapeToDrag *>temp;
        temp.clear();
            while(richtung){
                for (int k=0;k<ListShapeFromJson.size();k++)
                {
                if((ListShapeFromJson.at(k)->getYPosition()>= ystartedGridvalue)&&(ListShapeFromJson.at(k)->getYPosition()<yFinischedGridValue))
                {
                temp.append(ListShapeFromJson.at(k));
                }
                }
                for (int k=temp.size()-1;k>0;k--){
                    for (int l=0;l<k;l++){
                         if(temp.at(l)->getXPosition()>temp.at(l+1)->getXPosition()){
                                         temp.swapItemsAt((l),(l+1));
                                                                                                     }
                                          }

                                                  }
                SortedListShapeFromJson.append(temp);
                richtung= false;
                ystartedGridvalue+=yGridFromJsonFile;
                yFinischedGridValue+=yGridFromJsonFile;
                temp.clear();
                }
            while(!richtung){
                for (int k=0;k<ListShapeFromJson.size()-1;k++)
                {
                if((ListShapeFromJson.at(k)->getYPosition()== ystartedGridvalue)&&(ListShapeFromJson.at(k)->getYPosition()<yFinischedGridValue))
                {
                temp.append(ListShapeFromJson.at(k));
                }
                }
                for (int k=temp.size()-1;k>0;k--)
                {
                    for (int l=0;l<k;l++)
                    {
                         if(temp.at(l)->getXPosition()<temp.at(l+1)->getXPosition()){
                                         temp.swapItemsAt((l),(l+1));

                                                                            }
                    }

                }

                SortedListShapeFromJson.append(temp);
                richtung= true;
                ystartedGridvalue+=yGridFromJsonFile;
                yFinischedGridValue+=yGridFromJsonFile;
                temp.clear();

        }
     }


     QFile sortedSaveJsonFile("./gcode/sortedSave.json");

     if (sortedSaveJsonFile.open(QIODevice::WriteOnly)) {

         QJsonObject SortedSceneObject;
         QJsonArray SortedShapeArray;

          for(shapeToDrag *sFJF : SortedListShapeFromJson )
         {

             QJsonObject einzelShapeObjectSorted;

             einzelShapeObjectSorted["name"] = sFJF->getName();
             einzelShapeObjectSorted["x"] = sFJF->getXPosition();
             einzelShapeObjectSorted["y"] = sFJF->getYPosition();

             //write aval tamam shod
             // moshakhasat riz vared shod
             // write aval moarefi har shekl bod
             //hala write dovom
             //to write dovom hala har be har shekl moarefi shode ye nam midim to Json file

            SortedShapeArray.append(einzelShapeObjectSorted);

             //hala wite to file game anjam shod
             // in hamon write aval az save hesab mishe

         }
         SortedSceneObject["shapes"]=SortedShapeArray;

         QJsonDocument saveDoc(SortedSceneObject);
         sortedSaveJsonFile.write(saveDoc.toJson());

}
}

void MainWindow::on_dellAllButton_released()
{
    connect(ui->dellAllButton,SIGNAL(released()),MyScene,SLOT(clear()));
}

void MainWindow::on_CodeGenButt_clicked()
{

    QFile mycode ("./gcode/mycode.txt");

    QList<QGraphicsItem *> items =   ui->graphicsView->items();

    shapeToDrag* shape_ptr;
    QPointF position;

    if(mycode.open(QIODevice::WriteOnly))
    {
        QTextStream out(&mycode);
        out << "G90" << endl;
        foreach (QGraphicsItem *item, items)
        {
            shape_ptr = (shapeToDrag*)item;
            position = item->pos();
            out <<shape_ptr->getName()<<endl;
            out << "G0 X" << position.x() << " Y" << position.y() << endl;
            out << shape_ptr->getName()<< endl;
            }
        }
        mycode.close();

        saveProjektDesigntoJson("Autosave");
        sortJsonFile();
}







void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionNew_Shape_triggered()
{

    newShape= new newShapeDialog(this);
    connect(newShape,SIGNAL(refresh_ItemList()),this,SLOT(addToItemList()));
    newShape->setModal(true);
    newShape->exec();
}

void MainWindow::on_actionEdit_shape_triggered()
{

    editShape = new  editShapeDialog(this);
    connect(editShape,SIGNAL(refresh_ItemList()),this,SLOT(addToItemList()));
    editShape->SetItemList(getItemList());
    editShape->setModal(true);
    editShape->exec();
}


void MainWindow::on_actionsave_triggered()
{
   saveProjektDesign = new saveDialog (this);
   connect(saveProjektDesign,SIGNAL(addToJsonSaved(QString)),this,SLOT(saveProjektDesigntoJson(QString)));
   saveProjektDesign->setModal(true);
   saveProjektDesign->exec();

}
void MainWindow::LoadDesignedProjektFromJson(QString name){

    QList<shapeToDrag *>ListShapeFromJsontoLoading;
    MyScene->clear();
    QFile LoadJsonfiletoLoading("./saved/"+name);
    if (!LoadJsonfiletoLoading.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open saved file.");
        return ;
    }
    QByteArray saveData = LoadJsonfiletoLoading.readAll();
    QJsonDocument loading=QJsonDocument::fromJson(saveData);

    QJsonObject JObjectFromJDocJsonFile=loading.object();

    if (JObjectFromJDocJsonFile.contains("yValueSlider")) {
        ui->ySlider->setValue(JObjectFromJDocJsonFile["yValueSlider"].toInt());
        //connect(ui->ySlider,SIGNAL(valueChanged()),MyScene,SLOT(setGridsizeY(JObjectFromJDocJsonFile["yValueSlider"].toInt())));
    }
    if (JObjectFromJDocJsonFile.contains("xValueSlider")) {
        ui->xSlider->setValue(JObjectFromJDocJsonFile["xValueSlider"].toInt());
       // connect(ui->xSlider,SIGNAL(valueChanged()),MyScene,SLOT(setGridsizeX(JObjectFromJDocJsonFile["xValueSlider"].toInt())));
    }

    if (JObjectFromJDocJsonFile.contains("shapes") && JObjectFromJDocJsonFile["shapes"].isArray()) {
        QJsonArray shapeArray = JObjectFromJDocJsonFile["shapes"].toArray();
        ListShapeFromJsontoLoading.clear();
        ListShapeFromJsontoLoading.reserve(shapeArray.size());
        for (int levelIndex = 0; levelIndex < shapeArray.size(); ++levelIndex) {
            QJsonObject levelObject = shapeArray[levelIndex].toObject();
            shapeToDrag *sL = new shapeToDrag;


            if (levelObject.contains("name") && levelObject["name"].isString())
                sL->setName(levelObject["name"].toString());
            if (levelObject.contains("name") && levelObject["name"].isString())
                sL->setXPosition(levelObject["x"].toInt());
            if (levelObject.contains("name") && levelObject["name"].isString())
                sL->setYPosition(levelObject["y"].toInt());


            ListShapeFromJsontoLoading.append(sL);
        }
    }

    for (shapeToDrag *sL1: ListShapeFromJsontoLoading){


        //
        QFile shapeFile ("lib/"+sL1->getName()+"/shapeConfig.txt");
        if(!shapeFile.open(QFile::ReadOnly|QFile::Text))
        {
            return;
        }
        QTextStream in (&shapeFile);

        QString shapeTextInhalatX = in.readLine();
        shapeTextInhalatX.remove(0,2);
        sL1->setXDemension(shapeTextInhalatX.toInt());

        QString shapeTextInhalaty = in.readLine();
        shapeTextInhalaty.remove(0,2);
        sL1->setYDemension(shapeTextInhalaty.toInt());



        sL1->setRect(sL1->getXPosition()*10,sL1->getYPosition()*10,sL1->getXDemension(),sL1->getYDemension());

        sL1->setBrush(Qt::magenta);
        MyScene->addItem(sL1);

        shapeFile.close();

    }

}
void MainWindow::on_actionLoad_triggered()
{

    LoadDesignedProjekt = new loadDialog (this);
    connect(LoadDesignedProjekt,SIGNAL(LoadSavedJson(QString)),this,SLOT(LoadDesignedProjektFromJson(QString)));
    LoadDesignedProjekt->setModal(true);
    LoadDesignedProjekt->exec();

}

void MainWindow::on_actionDelet_shape_triggered()
{

    foreach(QGraphicsItem *item, MyScene->selectedItems())
        if(shapeToDrag *rItem = qgraphicsitem_cast<shapeToDrag*> (item))
        MyScene->removeItem(rItem);
}
void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Delete){
        on_actionDelet_shape_triggered();
    }
    QMainWindow::keyPressEvent(event);
}

void MainWindow::on_rBshape_clicked()
{
    ui->xSlider->setEnabled(false);
    ui->ySlider->setEnabled(false);
    ui->shapeList->setEnabled(true);
    ui->graphicsView->setEnabled(true);
    ui->CodeGenButt->setEnabled(true);
    ui->dellAllButton->setEnabled(true);
}

void MainWindow::on_rbGrid_clicked()
{
    ui->xSlider->setEnabled(true);
    ui->ySlider->setEnabled(true);
    ui->shapeList->setEnabled(false);
    ui->graphicsView->setEnabled(false);
    ui->CodeGenButt->setEnabled(false);
    ui->dellAllButton->setEnabled(false);
}

void MainWindow::on_xSlider_valueChanged(int value)
{
    MyScene->setGridsizeX(value);
    ui->xValue->setText(QString("%1").arg(ui->xSlider->value()));
}

void MainWindow::on_ySlider_valueChanged(int value)
{
    MyScene->setGridsizeY(value);
    ui->yValue->setText(QString("%1").arg(ui->ySlider->value()));
}
