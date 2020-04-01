#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>

#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include "karuzela.h"
#include "dom_strachu.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Encyklopedia atrakcji");
    w.show();
    return a.exec();
}
