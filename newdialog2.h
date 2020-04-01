#ifndef NEWDIALOG2_H
#define NEWDIALOG2_H

#include <QDialog>
#include "ui_new_dialog2.h"
#include "mainwindow.h"
using namespace std;

namespace Ui {
class NewDialog2;
}

class NewDialog2 : public QDialog, public Ui::Dialog2
{
    Q_OBJECT

public:
    NewDialog2(QWidget* parent=0);

public slots:
    QString pobierzC();
    QString pobierzMW();
    QString pobierzLPi();
    QString pobierzP();
    QString pobierzLPu();
    QString pobierzTW();
    void wyborObraz();
    QString pobierzObraz();

private:
    Ui::Dialog2 *ui;

};

#endif // NEWDIALOG2_H
