#ifndef NEWDIALOG3_H
#define NEWDIALOG3_H

#include <QDialog>
#include "ui_new_dialog3.h"
#include "mainwindow.h"
using namespace std;

namespace Ui {
class NewDialog3;
}

class NewDialog3 : public QDialog, public Ui::Dialog3
{
    Q_OBJECT

public:
    NewDialog3(QWidget* parent=0);

public slots:
    QString pobierzC();
    QString pobierzMW();
    QString pobierzLPa();
    QString pobierzDW();
    void wyborObraz();
    QString pobierzObraz();

private:
    Ui::Dialog3 *ui;

};

#endif // NEWDIALOG3_H
