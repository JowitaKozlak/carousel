/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *nast;
    QPushButton *poprz;
    QLabel *pozycja;
    QLineEdit *aktualny;
    QLineEdit *text3;
    QLineEdit *text4;
    QLineEdit *cena;
    QLineEdit *minimalny_wiek;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *dD;
    QPushButton *dDS;
    QPushButton *dK;
    QPushButton *del;
    QPushButton *ed;
    QLineEdit *nazwa;
    QLabel *label_5;
    QLineEdit *text5;
    QLineEdit *text6;
    QLabel *label_6;
    QLabel *label_7;
    QGraphicsView *obraz;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(545, 440);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 111, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 111, 20));
        nast = new QPushButton(centralWidget);
        nast->setObjectName(QStringLiteral("nast"));
        nast->setGeometry(QRect(300, 260, 75, 23));
        poprz = new QPushButton(centralWidget);
        poprz->setObjectName(QStringLiteral("poprz"));
        poprz->setGeometry(QRect(10, 260, 75, 23));
        pozycja = new QLabel(centralWidget);
        pozycja->setObjectName(QStringLiteral("pozycja"));
        pozycja->setGeometry(QRect(310, 10, 47, 13));
        aktualny = new QLineEdit(centralWidget);
        aktualny->setObjectName(QStringLiteral("aktualny"));
        aktualny->setGeometry(QRect(310, 30, 51, 20));
        text3 = new QLineEdit(centralWidget);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setGeometry(QRect(130, 120, 113, 20));
        text4 = new QLineEdit(centralWidget);
        text4->setObjectName(QStringLiteral("text4"));
        text4->setGeometry(QRect(130, 150, 113, 20));
        cena = new QLineEdit(centralWidget);
        cena->setObjectName(QStringLiteral("cena"));
        cena->setGeometry(QRect(130, 60, 113, 20));
        minimalny_wiek = new QLineEdit(centralWidget);
        minimalny_wiek->setObjectName(QStringLiteral("minimalny_wiek"));
        minimalny_wiek->setGeometry(QRect(130, 90, 113, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 91, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 150, 91, 20));
        dD = new QPushButton(centralWidget);
        dD->setObjectName(QStringLiteral("dD"));
        dD->setGeometry(QRect(50, 300, 71, 23));
        dDS = new QPushButton(centralWidget);
        dDS->setObjectName(QStringLiteral("dDS"));
        dDS->setGeometry(QRect(130, 300, 111, 23));
        dK = new QPushButton(centralWidget);
        dK->setObjectName(QStringLiteral("dK"));
        dK->setGeometry(QRect(250, 300, 91, 23));
        del = new QPushButton(centralWidget);
        del->setObjectName(QStringLiteral("del"));
        del->setGeometry(QRect(190, 340, 75, 23));
        ed = new QPushButton(centralWidget);
        ed->setObjectName(QStringLiteral("ed"));
        ed->setGeometry(QRect(110, 340, 75, 23));
        nazwa = new QLineEdit(centralWidget);
        nazwa->setObjectName(QStringLiteral("nazwa"));
        nazwa->setGeometry(QRect(130, 30, 113, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 47, 13));
        text5 = new QLineEdit(centralWidget);
        text5->setObjectName(QStringLiteral("text5"));
        text5->setGeometry(QRect(130, 180, 113, 20));
        text6 = new QLineEdit(centralWidget);
        text6->setObjectName(QStringLiteral("text6"));
        text6->setGeometry(QRect(130, 210, 113, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 180, 101, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 210, 101, 16));
        obraz = new QGraphicsView(centralWidget);
        obraz->setObjectName(QStringLiteral("obraz"));
        obraz->setGeometry(QRect(310, 60, 221, 151));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 545, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(dD, SIGNAL(clicked()), MainWindow, SLOT(dodajD()));
        QObject::connect(dDS, SIGNAL(clicked()), MainWindow, SLOT(dodajDS()));
        QObject::connect(dK, SIGNAL(clicked()), MainWindow, SLOT(dodajK()));
        QObject::connect(nast, SIGNAL(clicked()), MainWindow, SLOT(nastepny()));
        QObject::connect(poprz, SIGNAL(clicked()), MainWindow, SLOT(poprzedni()));
        QObject::connect(del, SIGNAL(clicked()), MainWindow, SLOT(usun()));
        QObject::connect(ed, SIGNAL(clicked()), MainWindow, SLOT(edycja()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "cena:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "minimalny wiek:", Q_NULLPTR));
        nast->setText(QApplication::translate("MainWindow", "nast\304\231pny", Q_NULLPTR));
        poprz->setText(QApplication::translate("MainWindow", "poprzedni", Q_NULLPTR));
        pozycja->setText(QApplication::translate("MainWindow", "pozycja:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "null", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "null", Q_NULLPTR));
        dD->setText(QApplication::translate("MainWindow", "dodaj dom", Q_NULLPTR));
        dDS->setText(QApplication::translate("MainWindow", "dodaj dom strachu", Q_NULLPTR));
        dK->setText(QApplication::translate("MainWindow", "dodaj karuzel\304\231", Q_NULLPTR));
        del->setText(QApplication::translate("MainWindow", "usu\305\204", Q_NULLPTR));
        ed->setText(QApplication::translate("MainWindow", "edytuj", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "nazwa:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "null", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "null", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
