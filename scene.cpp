#include "scene.h"
#include <QtGui>
#include <QGraphicsSceneDragDropEvent>
#include <QMimeData>
#include <QMouseEvent>




SceneClass::SceneClass(QObject *parent) :
    QGraphicsScene(parent), gridSizeX(1),gridSizeY(1)
{
    Q_ASSERT(gridSizeX > 0);
    Q_ASSERT(gridSizeY > 0);



}

void SceneClass::setGridsizeX(int newXGrid)
{
    gridSizeX=newXGrid;
    update();
}

void SceneClass::setGridsizeY(int newYGrid)
{
    this->gridSizeY=newYGrid;
    update();
}



int SceneClass::getXForShape()
{
    return xForShape;
}

int SceneClass::getYForShape()
{
    return yForShape;
}

int SceneClass::getGridSizeX()
{

        return gridSizeX;

        }

int SceneClass::getGridSizeY()  {


        return gridSizeY;

        }


void SceneClass::drawBackground(QPainter *painter,const QRectF &rect ) //
{

    QPen pen;

    painter->setPen(Qt::red);



    int newgridSizeX= getGridSizeX()*10;
    int newgridSizeY = getGridSizeY()*10;

    qreal left = int(rect.left()) - (int(rect.left()) % newgridSizeX);
    qreal top = int(rect.top()) - (int(rect.top()) % newgridSizeY);
    QVector<QPointF> points;
    for (qreal x = left; x < rect.right(); x += newgridSizeX){
        for (qreal y = top; y < rect.bottom(); y += newgridSizeY){
            points.append(QPointF(x,y));

        }
    }

    painter->drawPoints(points.data(), points.size());


}




void SceneClass::dragMoveEvent(QGraphicsSceneDragDropEvent *event) {

    if (event->mimeData()->hasText()){
        event->setDropAction(Qt::CopyAction);
        event->setAccepted(true);
    }

}


void SceneClass::setText(const QString &text){
    this->m_text = text;
    update();
}

QString SceneClass::getText()
{
    return m_text;
}


void SceneClass::dropEvent(QGraphicsSceneDragDropEvent *event)
{


    if (event->mimeData()->hasFormat("application/x-qabstractitemmodeldatalist")){
             QByteArray itemData = event->mimeData()->data(
                         "application/x-qabstractitemmodeldatalist");
             QDataStream stream(&itemData, QIODevice::ReadOnly);



            int row, col;
            QMap<int, QVariant> valueMap;
            stream >> row >> col >> valueMap;
            if(!valueMap.isEmpty())
            setText(valueMap.value(0).toString());

            shapeToDrag *MyShape = new shapeToDrag();

            QFile shapeFile ("Lib/"+getText()+"/shapeConfig.txt");
            if(!shapeFile.open(QFile::ReadOnly|QFile::Text))
            {
                return;
            }
            QTextStream in (&shapeFile);

            QString shapeTextInhalatX = in.readLine();
            shapeTextInhalatX.remove(0,2);
            xForShape = shapeTextInhalatX.toInt();

            QString shapeTextInhalaty = in.readLine();
            shapeTextInhalaty.remove(0,2);
            yForShape = shapeTextInhalaty.toInt();


            shapeFile.close();




            MyShape->setName(getText());



            QPointF Mp = event->scenePos();
            setMousPosX(Mp.x());
            setMousPosY(Mp.y());

            MyShape->setRect(getMousPosX(),getMousPosY(),xForShape,yForShape);
            MyShape->setBrush(Qt::magenta);

            addItem(MyShape);



            event->accept();
         }
         else
        event->ignore();
}



void SceneClass::setMousPosX(int a){

    this->mousePosX=a;
    update();
}
void SceneClass::setMousPosY(int a){
    this->mousePosY=a;
    update();
}
int SceneClass::getMousPosY(){
    update();
    return mousePosY;
}
int SceneClass::getMousPosX(){
    update();
    return mousePosX;
}


