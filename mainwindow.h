#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include "scene.h"
#include <QtCore>
#include <QtGui>
#include <QDir>
#include <QListWidget>
#include <QHBoxLayout>
#include "editshapedialog.h"
#include "newshapedialog.h"
#include "savedialog.h"
#include "loaddialog.h"




QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList getItemList();
    void sortJsonFile();

    void setItemList();



protected:
    void keyPressEvent(QKeyEvent *);




private slots:
    void on_dellAllButton_released();
    void on_CodeGenButt_clicked();
    void saveProjektDesigntoJson(QString wert);

    void on_actionExit_triggered();

    void on_actionNew_Shape_triggered();

    void on_actionEdit_shape_triggered();

    void on_actionsave_triggered();

    void on_actionLoad_triggered();

    void on_actionDelet_shape_triggered();

    void addToItemList();

    void on_rBshape_clicked();

    void on_rbGrid_clicked();

    void on_xSlider_valueChanged(int value);

    void on_ySlider_valueChanged(int value);

    void LoadDesignedProjektFromJson(QString name);

private:
    Ui::MainWindow *ui;
    SceneClass *MyScene;

    QAction *exitAction;
    QAction *addAction;
    QAction *deleteAction;

    editShapeDialog *editShape;
    newShapeDialog *newShape;
    saveDialog *saveProjektDesign;
    loadDialog *LoadDesignedProjekt;
    SceneClass *scene_ptr;


     QStringList itemList;






};
#endif // MAINWINDOW_H
