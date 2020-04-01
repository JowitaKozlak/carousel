/********************************************************************************
** Form generated from reading UI file 'new_dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DIALOG2_H
#define UI_NEW_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QPushButton *pushButton;
    QLineEdit *text2;
    QLineEdit *text3;
    QLineEdit *text4;
    QLineEdit *text5;
    QLineEdit *text6;
    QLineEdit *text7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *akto;
    QLineEdit *text8;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(372, 410);
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 360, 101, 23));
        text2 = new QLineEdit(Dialog2);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setGeometry(QRect(170, 50, 113, 20));
        text3 = new QLineEdit(Dialog2);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setGeometry(QRect(170, 80, 113, 20));
        text4 = new QLineEdit(Dialog2);
        text4->setObjectName(QStringLiteral("text4"));
        text4->setGeometry(QRect(170, 110, 113, 20));
        text5 = new QLineEdit(Dialog2);
        text5->setObjectName(QStringLiteral("text5"));
        text5->setGeometry(QRect(170, 140, 113, 20));
        text6 = new QLineEdit(Dialog2);
        text6->setObjectName(QStringLiteral("text6"));
        text6->setGeometry(QRect(170, 170, 113, 20));
        text7 = new QLineEdit(Dialog2);
        text7->setObjectName(QStringLiteral("text7"));
        text7->setGeometry(QRect(170, 200, 113, 20));
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 51, 16));
        label_2 = new QLabel(Dialog2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 81, 16));
        label_3 = new QLabel(Dialog2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 110, 71, 16));
        label_4 = new QLabel(Dialog2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 140, 71, 16));
        label_5 = new QLabel(Dialog2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 170, 81, 16));
        label_6 = new QLabel(Dialog2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 200, 81, 16));
        label_7 = new QLabel(Dialog2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 20, 101, 16));
        akto = new QPushButton(Dialog2);
        akto->setObjectName(QStringLiteral("akto"));
        akto->setGeometry(QRect(180, 240, 91, 23));
        text8 = new QLineEdit(Dialog2);
        text8->setObjectName(QStringLiteral("text8"));
        text8->setGeometry(QRect(170, 270, 113, 20));

        retranslateUi(Dialog2);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog2, SLOT(close()));
        QObject::connect(akto, SIGNAL(clicked()), Dialog2, SLOT(wyborObraz()));

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog2", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog2", "Gotowe!", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog2", "cena:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog2", "minimalny wiek:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog2", "powierzchnia:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog2", "liczba pi\304\231ter:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog2", "tryb wyzwanie:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog2", "liczba pu\305\202apek:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog2", "Wprowad\305\272 dane:", Q_NULLPTR));
        akto->setText(QApplication::translate("Dialog2", "Wybierz obraz:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DIALOG2_H
