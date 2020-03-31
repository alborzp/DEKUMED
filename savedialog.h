#ifndef SAVEDIALOG_H
#define SAVEDIALOG_H

#include <QDialog>
#include <QDir>
#include <QListWidget>

namespace Ui {
class saveDialog;
}

class saveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit saveDialog(QWidget *parent = nullptr);



    ~saveDialog();

    void setSavedName(QString name);
    QString getSavedName();

    void setSavedList();

signals:
    void addToJsonSaved(QString wert);

private slots:
    void on_cancelButt_clicked();

    void on_saveButt_clicked();


    void on_savedDesignList_itemClicked(QListWidgetItem *item);

    void on_clearButt_clicked();

private:
    Ui::saveDialog *ui;
    QStringList savedList;
    QString jsonName;
    QString selectedsaved;
};

#endif // SAVEDIALOG_H
