#ifndef NEWDIALOG_H
#define NEWDIALOG_H

#include <QDialog>
#include "ui_new_dialog.h"
#include "mainwindow.h"
using namespace std;

namespace Ui {
class NewDialog;
}

class NewDialog : public QDialog, public Ui::Dialog
{
    Q_OBJECT

public:
    NewDialog(QWidget* parent=0);

public slots:
    QString pobierzC();
    QString pobierzMW();
    QString pobierzLPi();
    QString pobierzP();
    void wyborObraz();
    QString pobierzObraz();

private:
    Ui::Dialog *ui;

};

#endif // NEWDIALOG_H
