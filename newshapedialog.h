#ifndef NEWSHAPEDIALOG_H
#define NEWSHAPEDIALOG_H

#include <QDialog>
#include <QDir>
#include <QTextStream>

namespace Ui {
class newShapeDialog;
}

class newShapeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newShapeDialog(QWidget *parent = nullptr);
    ~newShapeDialog();

private slots:
    void on_cancelButt_clicked();
    void on_saveButt_clicked();

private:
    Ui::newShapeDialog *ui;

signals:
    void refresh_ItemList();
};

#endif // NEWSHAPEDIALOG_H
