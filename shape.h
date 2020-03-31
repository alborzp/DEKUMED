#ifndef SHAPE_H
#define SHAPE_H

#include <QGraphicsRectItem>
#include "scene.h"
#include "math.h"
#include <QtWidgets/QWidget>
#include <QPainter>


class shapeToDrag: public QGraphicsRectItem
{

public:
        shapeToDrag( QGraphicsRectItem* parent=0);
        void setName(QString name);
        QString getName();

        void setXPosition(int a);
        void setYPosition(int a);

        int getXPosition();
        int getYPosition();

        void setXDemension(int a);
        void setYDemension(int a);

        int getXDemension();
        int getYDemension();


        void setNewPosX(int a);
        void setNewPosY(int a);

        int getNewPosX();
        int getNewPosY();




        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


protected:

        QVariant itemChange(GraphicsItemChange change,
                            const QVariant &value);

private:
        QString RectName= "Hello";
        int xDemension=0;
        int yDemension=0;

        int xPosition=0;
        int yPosition=0;

        int newPosX=0;
        int newPosY=0;
};

#endif // SHAPE_H
