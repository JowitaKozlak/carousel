/********************************************************************************
** Form generated from reading UI file 'new_dialog3.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DIALOG3_H
#define UI_NEW_DIALOG3_H

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

class Ui_Dialog3
{
public:
    QLineEdit *text2;
    QLineEdit *text3;
    QLineEdit *text4;
    QLineEdit *text5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *text6;
    QPushButton *akto;

    void setupUi(QDialog *Dialog3)
    {
        if (Dialog3->objectName().isEmpty())
            Dialog3->setObjectName(QStringLiteral("Dialog3"));
        Dialog3->resize(374, 345);
        text2 = new QLineEdit(Dialog3);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setGeometry(QRect(180, 60, 113, 20));
        text3 = new QLineEdit(Dialog3);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setGeometry(QRect(180, 90, 113, 20));
        text4 = new QLineEdit(Dialog3);
        text4->setObjectName(QStringLiteral("text4"));
        text4->setGeometry(QRect(180, 120, 113, 20));
        text5 = new QLineEdit(Dialog3);
        text5->setObjectName(QStringLiteral("text5"));
        text5->setGeometry(QRect(180, 150, 113, 20));
        label = new QLabel(Dialog3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 81, 16));
        label_2 = new QLabel(Dialog3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 90, 81, 16));
        label_3 = new QLabel(Dialog3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 120, 91, 16));
        label_4 = new QLabel(Dialog3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 150, 81, 16));
        label_5 = new QLabel(Dialog3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 30, 101, 16));
        pushButton = new QPushButton(Dialog3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 290, 101, 23));
        text6 = new QLineEdit(Dialog3);
        text6->setObjectName(QStringLiteral("text6"));
        text6->setGeometry(QRect(180, 220, 113, 20));
        akto = new QPushButton(Dialog3);
        akto->setObjectName(QStringLiteral("akto"));
        akto->setGeometry(QRect(190, 190, 91, 23));

        retranslateUi(Dialog3);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog3, SLOT(close()));
        QObject::connect(akto, SIGNAL(clicked()), Dialog3, SLOT(wyborObraz()));

        QMetaObject::connectSlotsByName(Dialog3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3)
    {
        Dialog3->setWindowTitle(QApplication::translate("Dialog3", "Dialog3", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog3", "cena:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog3", "minimalny wiek:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog3", "liczba pasa\305\274er\303\263w:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog3", "d\305\202ugo\305\233\304\207 wej\305\233cia:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog3", "Wprowad\305\272 dane:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog3", "Gotowe!", Q_NULLPTR));
        akto->setText(QApplication::translate("Dialog3", "Wybierz obraz:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog3: public Ui_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DIALOG3_H
