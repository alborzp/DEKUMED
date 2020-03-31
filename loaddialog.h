#ifndef LOADDIALOG_H
#define LOADDIALOG_H

#include <QDialog>
#include <QListWidget>
#include <QDir>

namespace Ui {
class loadDialog;
}

class loadDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loadDialog(QWidget *parent = nullptr);
    ~loadDialog();

    void setListToLoad();
    void setJsonToLoadName(QString name);
    QString getJsonToLoadName();

private slots:
    void on_LoadDesignList_itemClicked(QListWidgetItem *item);

    void on_LoadButt_clicked();

    void on_cancelButt_clicked();

signals:
        void LoadSavedJson(QString name);

private:
    Ui::loadDialog *ui;
    QString JsonToLoad;
};

#endif // LOADDIALOG_H
