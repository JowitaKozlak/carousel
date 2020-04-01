#include "newdialog2.h"
#include <QMessageBox>
#include <QString>
#include <QInputDialog>

NewDialog2::NewDialog2(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ui->text3->setValidator( new QIntValidator(0, 100, this) );
    ui->text5->setValidator( new QIntValidator(0, 20, this) );
    ui->text7->setValidator( new QIntValidator(0, 100, this) );
    ui->text6->setValidator( new QIntValidator(0, 1, this) );
    ui->text2->setValidator( new QDoubleValidator(0, 100, 2, this) );
    ui->text4->setValidator( new QDoubleValidator(0, 500, 2, this) );
}

QString NewDialog2::pobierzC()
{
    return ui->text2->text();
}

QString NewDialog2::pobierzMW()
{
    return ui->text3->text();
}

QString NewDialog2::pobierzLPi()
{
    return ui->text5->text();
}

QString NewDialog2::pobierzP()
{
    return ui->text4->text();
}

QString NewDialog2::pobierzLPu()
{
    return ui->text7->text();
}

QString NewDialog2::pobierzTW()
{
    return ui->text6->text();
}

void NewDialog2::wyborObraz()
{
    QStringList obrazy;
    obrazy<<"domstrachu";
    obrazy<<"domstrachu2";
    QString o=QInputDialog::getItem(this, "Obraz", "Wybierz obraz:", obrazy);
    ui->text8->setText(o);
}

QString NewDialog2::pobierzObraz()
{
    return ui->text8->text();
}
