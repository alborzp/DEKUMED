#include "shape.h"

shapeToDrag::shapeToDrag( QGraphicsRectItem* parent):
    QGraphicsRectItem( parent)
{

    setFlags(QGraphicsItem::ItemIsSelectable |
            QGraphicsItem::ItemIsMovable |
            QGraphicsItem::ItemSendsGeometryChanges);





}

void shapeToDrag::setName(QString name)
{
    this->RectName=name;
}

QString shapeToDrag::getName()
{
    return RectName;
}

void shapeToDrag::setXPosition(int a){
    this->xPosition=a;
}

void shapeToDrag::setYPosition(int a){
    this->yPosition=a;

}
int shapeToDrag::getXPosition(){
    return xPosition;

}
int shapeToDrag::getYPosition(){
    return yPosition;
}

void shapeToDrag::setXDemension(int a){
    this->xDemension=a;
}

void shapeToDrag::setYDemension(int a){
    this->yDemension=a;

}
int shapeToDrag::getXDemension(){
    return xDemension;
}
int shapeToDrag::getYDemension(){
    return yDemension;
}


void shapeToDrag::setNewPosX(int a){
    this->newPosX=a;
}

void shapeToDrag::setNewPosY(int a){
    this->newPosY=a;

}
int shapeToDrag::getNewPosX(){
    return newPosX;
}
int shapeToDrag::getNewPosY(){
    return newPosY;
}
//cordinat
QVariant shapeToDrag::itemChange(GraphicsItemChange change, const QVariant &value)
{
    if (change == ItemPositionChange && scene())
    {
        QPointF newPos = value.toPointF();
        setNewPosX(newPos.x());
        setNewPosY(newPos.y());


        if(QApplication::mouseButtons() == Qt::LeftButton && qobject_cast<SceneClass*> (scene()))
        {


            SceneClass* customScene = qobject_cast<SceneClass*> (scene());


            int gridSizeX = customScene->getGridSizeX()*10;
            int gridSizeY = customScene->getGridSizeY()*10;
            qreal xV = round(getNewPosX()/gridSizeX)*gridSizeX;
            qreal yV = round(getNewPosY()/gridSizeY)*gridSizeY;
            if(xV < 0-(customScene->getMousPosX()))
                xV = -(customScene->getMousPosX());
            if(yV < 0-(customScene->getMousPosY()))
                yV = -(customScene->getMousPosY());
            if(xV > 1000-(customScene->getMousPosX()))
                xV = 1000- (customScene->getMousPosX()+customScene->getXForShape());
            if(yV > 600-(customScene->getMousPosY()))
                yV = 600 - (customScene->getMousPosY()+customScene->getYForShape());
            return QPointF(xV, yV);
        }
        else
            return newPos;
    }
    else
        return QGraphicsItem::itemChange(change, value);
}

void shapeToDrag::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    SceneClass* s1 = qobject_cast<SceneClass*> (scene());

   QGraphicsRectItem::paint(painter, option, widget);

//    painter->drawText(getNewPosX(),getNewPosY(),getName());

}




