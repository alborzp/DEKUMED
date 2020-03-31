#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include <QPainter>
#include <QApplication>
#include <QFrame>
#include <QtWidgets/QWidget>
#include <QWidget>
#include "shape.h"

class QDragEnterEvent;
class QDropEvent;

class SceneClass : public QGraphicsScene
{
    Q_OBJECT
public:

    explicit SceneClass(QObject *parent = 0);
    int getGridSizeX();
    int getGridSizeY();
    void setText(const QString& text);
    QString getText();

    void setMousPosX(int a);
    void setMousPosY(int a);
    int getMousPosX();
    int getMousPosY();


public slots:
    void setGridsizeX(int newXGrid);
    void setGridsizeY(int value);


    int getXForShape();
    int getYForShape();

protected:
    void drawBackground (QPainter* painter, const QRectF &rect);
    void dropEvent(QGraphicsSceneDragDropEvent  *event);
    void dragMoveEvent(QGraphicsSceneDragDropEvent *event);


    bool dragOver = false;




private:
    int gridSizeX;
    int gridSizeY;
    QString m_text;
    int xForShape;
    int yForShape;

    int mousePosX=0;
    int mousePosY=0;

};

#endif // SCENE_H
