#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QGraphicsScene>
#include "dom_strachu.h"
#include "karuzela.h"
#include "newdialog.h"
#include "newdialog2.h"
#include "newdialog3.h"
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void wypisz();
    void dodajD();
    void dodajDS();
    void dodajK();
    void nastepny();
    void poprzedni();
    void aktualny();
    void usun();
    void edycja();

private:
    unsigned int akt;
    int liczd;
    int liczds;
    int liczk;
    QGraphicsScene scene;
    QPixmap image;

    Ui::MainWindow *ui;
    Atrakcja* nowa=NULL;
    vector<Atrakcja*> atrakcje;
};

#endif // MAINWINDOW_H
