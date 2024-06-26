#ifndef SETTINGS_H
#define SETTINGS_H
#include <QDateTime>
#include <QDialog>
#include "Prayer.h"
class MainWindow; // Forward declaration
//class Prayer;
namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(MainWindow *parent = nullptr);
    ~Settings();

private slots:
    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);

    void on_Save_Changes_clicked();

    void on_Back_Home_clicked();

private:
    Ui::Settings *ui;
    QDateTime dateTime;
    MainWindow *mainWindowPtr;
    Prayer *prayer;
};

#endif // SETTINGS_H

