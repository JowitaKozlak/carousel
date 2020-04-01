/********************************************************************************
** Form generated from reading UI file 'new_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DIALOG_H
#define UI_NEW_DIALOG_H

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

class Ui_Dialog
{
public:
    QLineEdit *text2;
    QLineEdit *text3;
    QLineEdit *text4;
    QLineEdit *text5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *rdy;
    QPushButton *akto;
    QLineEdit *text6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(364, 364);
        text2 = new QLineEdit(Dialog);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setGeometry(QRect(170, 60, 113, 20));
        text3 = new QLineEdit(Dialog);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setGeometry(QRect(170, 90, 113, 20));
        text4 = new QLineEdit(Dialog);
        text4->setObjectName(QStringLiteral("text4"));
        text4->setGeometry(QRect(170, 120, 113, 20));
        text5 = new QLineEdit(Dialog);
        text5->setObjectName(QStringLiteral("text5"));
        text5->setGeometry(QRect(170, 150, 113, 20));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 60, 47, 13));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 90, 81, 20));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 120, 71, 16));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 150, 81, 16));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 30, 101, 16));
        rdy = new QPushButton(Dialog);
        rdy->setObjectName(QStringLiteral("rdy"));
        rdy->setGeometry(QRect(130, 310, 101, 23));
        akto = new QPushButton(Dialog);
        akto->setObjectName(QStringLiteral("akto"));
        akto->setGeometry(QRect(180, 190, 91, 23));
        text6 = new QLineEdit(Dialog);
        text6->setObjectName(QStringLiteral("text6"));
        text6->setGeometry(QRect(170, 220, 113, 20));

        retranslateUi(Dialog);
        QObject::connect(rdy, SIGNAL(clicked()), Dialog, SLOT(close()));
        QObject::connect(akto, SIGNAL(clicked()), Dialog, SLOT(wyborObraz()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "cena:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "minimalny wiek:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "powierzchnia:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "liczba pi\304\231ter:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "Wprowad\305\272 dane:", Q_NULLPTR));
        rdy->setText(QApplication::translate("Dialog", "Gotowe!", Q_NULLPTR));
        akto->setText(QApplication::translate("Dialog", "wybierz obraz:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DIALOG_H
