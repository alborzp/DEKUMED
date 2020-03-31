#ifndef EDITSHAPEDIALOG_H
#define EDITSHAPEDIALOG_H
#include <QListWidget>

#include <QDialog>


namespace Ui {
class editShapeDialog;
}

class editShapeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit editShapeDialog(QWidget *parent = nullptr);
    ~editShapeDialog();

    void SetItemList(QStringList itemList);


signals:
    void refresh_ItemList();

private slots:

    void on_cancelButt_clicked();

    void on_shapeListEdit_itemClicked(QListWidgetItem *item);

    void on_saveButt_2_clicked();

private:
    Ui::editShapeDialog *ui;
    QString selectedShapeName;
};

#endif // EDITSHAPEDIALOG_H
