#include "newdialog3.h"
#include <QMessageBox>
#include <QString>
#include <QInputDialog>

NewDialog3::NewDialog3(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    ui->text3->setValidator( new QIntValidator(0, 100, this) );
    ui->text5->setValidator( new QIntValidator(0, 30, this) );
    ui->text2->setValidator( new QDoubleValidator(0, 100, 2, this) );
    ui->text4->setValidator( new QIntValidator(0, 15, this) );
}

QString NewDialog3::pobierzC()
{
    return ui->text2->text();
}

QString NewDialog3::pobierzMW()
{
    return ui->text3->text();
}

QString NewDialog3::pobierzLPa()
{
    return ui->text4->text();
}

QString NewDialog3::pobierzDW()
{
    return ui->text5->text();
}

void NewDialog3::wyborObraz()
{
    QStringList obrazy;
    obrazy<<"karuzela";
    obrazy<<"karuzela2";
    QString o=QInputDialog::getItem(this, "Obraz", "Wybierz obraz:", obrazy);
    ui->text6->setText(o);
}

QString NewDialog3::pobierzObraz()
{
    return ui->text6->text();
}
