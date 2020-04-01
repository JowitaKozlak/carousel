#include "newdialog.h"
#include <QMessageBox>
#include <QString>
#include <QInputDialog>

NewDialog::NewDialog(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->text3->setValidator( new QIntValidator(0, 100, this) );
    ui->text5->setValidator( new QIntValidator(0, 20, this) );
    ui->text2->setValidator( new QDoubleValidator(0, 100, 2, this) );
    ui->text4->setValidator( new QDoubleValidator(0, 500, 2, this) );
}

QString NewDialog::pobierzC()
{
    return ui->text2->text();
}

QString NewDialog::pobierzMW()
{
    return ui->text3->text();
}

QString NewDialog::pobierzLPi()
{
    return ui->text5->text();
}

QString NewDialog::pobierzP()
{
    return ui->text4->text();
}

void NewDialog::wyborObraz()
{
    QStringList obrazy;
    obrazy<<"dom";
    obrazy<<"dom2";
    QString o=QInputDialog::getItem(this, "Obraz", "Wybierz obraz:", obrazy);
    ui->text6->setText(o);
}

QString NewDialog::pobierzObraz()
{
    return ui->text6->text();
}
