#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <ctype.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    akt=0;
    liczd=0;
    liczds=0;
    liczk=0;

    ui->setupUi(this);

    ui->nazwa->setDisabled(1);
    ui->cena->setDisabled(1);
    ui->minimalny_wiek->setDisabled(1);
    ui->text3->setDisabled(1);
    ui->text4->setDisabled(1);
    ui->text5->setDisabled(1);
    ui->text6->setDisabled(1);
    ui->aktualny->setDisabled(1);
    ui->obraz->setDisabled(1);
}

void MainWindow::wypisz()
{
    if(atrakcje.empty())
    {
     QMessageBox mb;
     mb.setWindowTitle("Uwaga");
     mb.setText("Brak elementów do wyświetlenia");
     mb.exec();
     ui->nazwa->setDisabled(1);
     ui->cena->setDisabled(1);
     ui->minimalny_wiek->setDisabled(1);
     ui->text3->setDisabled(1);
     ui->text4->setDisabled(1);
     ui->text5->setDisabled(1);
     ui->text6->setDisabled(1);
     ui->aktualny->setDisabled(1);
     ui->obraz->setDisabled(1);
    }
    else
    {aktualny();
    ui->nazwa->setText(QString::fromStdString(atrakcje[akt]->pobierzNazwa()));
    ui->cena->setText(QString::number(atrakcje[akt]->pobierzCena()));
    ui->minimalny_wiek->setText(QString::number(atrakcje[akt]->pobierzMinimalnyWiek()));

    if(atrakcje[akt]->pobierzPlik()=="") scene.clear();
    else {
    ui->obraz->setScene(&scene);
    if(image.load("C:/Users/Jowita/Desktop/proe/karuzela3/Qt\\"+QString::fromStdString(atrakcje[akt]->pobierzPlik())+".jpg"))
    {
     scene.setSceneRect(image.rect());
     scene.clear();
     scene.addPixmap(image);
     ui->obraz->fitInView(image.rect());
    }}

    if(atrakcje[akt]->pobierzNazwa().substr(0,3)=="dom" && isdigit(atrakcje[akt]->pobierzNazwa()[3]))
    {
     ui->label_3->setText("powierzchnia:");
     ui->label_4->setText("liczba pięter:");
     ui->label_6->setText("");
     ui->label_7->setText("");
     ui->nazwa->setEnabled(1);
     ui->cena->setEnabled(1);
     ui->minimalny_wiek->setEnabled(1);
     ui->text3->setEnabled(1);
     ui->text4->setEnabled(1);
     ui->aktualny->setEnabled(1);
     ui->obraz->setEnabled(1);
     Dom *ptr=dynamic_cast<Dom*>(atrakcje[akt]);
     if(ptr!=NULL)
     {
      ui->text3->setText(QString::number(ptr->pobierzPowierzchnia()));
      ui->text4->setText(QString::number(ptr->pobierzLiczbaPieter()));
      ui->text5->clear();
      ui->text6->clear();
     }
     ui->text5->setDisabled(1);
     ui->text6->setDisabled(1);
    }
    else if(atrakcje[akt]->pobierzNazwa().substr(0,11)=="dom_strachu")
         {
          ui->label_3->setText("powierzchnia:");
          ui->label_4->setText("liczba pięter:");
          ui->label_6->setText("tryb wyzwanie:");
          ui->label_7->setText("liczba pułapek:");
          ui->nazwa->setEnabled(1);
          ui->cena->setEnabled(1);
          ui->minimalny_wiek->setEnabled(1);
          ui->text3->setEnabled(1);
          ui->text4->setEnabled(1);
          ui->text5->setEnabled(1);
          ui->text6->setEnabled(1);
          ui->aktualny->setEnabled(1);
          ui->obraz->setEnabled(1);
          DomStrachu *ptr=dynamic_cast<DomStrachu*>(atrakcje[akt]);
          if(ptr!=NULL)
          {
           ui->text3->setText(QString::number(ptr->pobierzPowierzchnia()));
           ui->text4->setText(QString::number(ptr->pobierzLiczbaPieter()));
           ui->text5->setText(QString::number(ptr->pobierzTrybWyzwanie()));
           ui->text6->setText(QString::number(ptr->pobierzLiczbaPulapek()));
          }
          ui->text5->setEnabled(1);
          ui->text6->setEnabled(1);
         }
         else if(atrakcje[akt]->pobierzNazwa().substr(0,8)=="karuzela")
              {
               ui->label_3->setText("liczba pasażerów:");
               ui->label_4->setText("długość wejścia:");
               ui->label_6->setText("");
               ui->label_7->setText("");
               ui->nazwa->setEnabled(1);
               ui->cena->setEnabled(1);
               ui->minimalny_wiek->setEnabled(1);
               ui->text3->setEnabled(1);
               ui->text4->setEnabled(1);
               ui->aktualny->setEnabled(1);
               ui->obraz->setEnabled(1);
               Karuzela *ptr=dynamic_cast<Karuzela*>(atrakcje[akt]);
               if(ptr!=NULL)
               {
                ui->text3->setText(QString::number(ptr->pobierzLiczbaPasazerow()));
                ui->text4->setText(QString::number(ptr->pobierzDlugoscWejscia()));
                ui->text5->clear();
                ui->text6->clear();
               }
               ui->text5->setDisabled(1);
               ui->text6->setDisabled(1);
              }
    }
}

void MainWindow::aktualny()
{
    ui->aktualny->setText(QString::number(akt));
}

void MainWindow::nastepny()
{
    if(akt<atrakcje.size()-1) {akt++; wypisz();}
    else {
          QMessageBox mb;
          mb.setWindowTitle("Uwaga");
          mb.setText("Brak następnego elementu");
          mb.exec();
         }
}

void MainWindow::poprzedni()
{
    if(akt>0) {akt--; wypisz();}
    else {
          QMessageBox mb;
          mb.setWindowTitle("Uwaga");
          mb.setText("Brak poprzedniego elementu");
          mb.exec();
         }
}

void MainWindow::dodajD()
{
    nowa=new Dom();
    string pom=to_string(liczd);
    nowa->zmienNazwa(nowa->pobierzNazwa()+pom);
    atrakcje.push_back(nowa);
    akt=atrakcje.size()-1;
    edycja();
    liczd++;
}

void MainWindow::dodajDS()
{
    nowa=new DomStrachu();
    string pom=to_string(liczds);
    nowa->zmienNazwa(nowa->pobierzNazwa()+pom);
    atrakcje.push_back(nowa);
    akt=atrakcje.size()-1;
    edycja();
    liczds++;
}

void MainWindow::dodajK()
{
    nowa=new Karuzela();
    string pom=to_string(liczk);
    nowa->zmienNazwa(nowa->pobierzNazwa()+pom);
    atrakcje.push_back(nowa);
    akt=atrakcje.size()-1;
    edycja();
    liczk++;
}

void MainWindow::edycja()
{
    if(atrakcje.empty())
    {
     QMessageBox mb;
     mb.setWindowTitle("Uwaga");
     mb.setText("Brak elementów do edycji");
     mb.exec();
    }
    else{
    if(atrakcje[akt]->pobierzNazwa().substr(0,3)=="dom" && isdigit(atrakcje[akt]->pobierzNazwa()[3]))
    {
     NewDialog dialog;
     dialog.setWindowTitle("Obiekt Dom");
     dialog.exec();
     if(dialog.pobierzC()!=NULL) atrakcje[akt]->zmienCena(dialog.pobierzC().toDouble());
     if(dialog.pobierzMW()!=NULL) atrakcje[akt]->zmienMinimalnyWiek(dialog.pobierzMW().toInt());
     if(dialog.pobierzObraz()!=NULL) atrakcje[akt]->zmienPlik(dialog.pobierzObraz().toStdString());

     Dom *ptr=dynamic_cast<Dom*>(atrakcje[akt]);
     if(ptr!=NULL)
     {
      if(dialog.pobierzP()!=NULL) ptr->zmienPowierzchnia(dialog.pobierzP().toDouble());
      if(dialog.pobierzLPi()!=NULL) ptr->zmienLiczbaPieter(dialog.pobierzLPi().toInt());
     }
    }
    else if(atrakcje[akt]->pobierzNazwa().substr(0,11)=="dom_strachu")
         {
          NewDialog2 dialog2;
          dialog2.setWindowTitle("Obiekt DomStrachu");
          dialog2.exec();
          if(dialog2.pobierzC()!=NULL) atrakcje[akt]->zmienCena(dialog2.pobierzC().toDouble());
          if(dialog2.pobierzMW()!=NULL) atrakcje[akt]->zmienMinimalnyWiek(dialog2.pobierzMW().toInt());
          if(dialog2.pobierzObraz()!=NULL) atrakcje[akt]->zmienPlik(dialog2.pobierzObraz().toStdString());

          DomStrachu *ptr=dynamic_cast<DomStrachu*>(atrakcje[akt]);
          if(ptr!=NULL)
          {
           if(dialog2.pobierzP()!=NULL) ptr->zmienPowierzchnia(dialog2.pobierzP().toDouble());
           if(dialog2.pobierzLPi()!=NULL) ptr->zmienLiczbaPieter(dialog2.pobierzLPi().toInt());
           if(dialog2.pobierzLPu()!=NULL) ptr->zmienLiczbaPulapek(dialog2.pobierzLPu().toInt());
           if(dialog2.pobierzTW()!=NULL)
           {
            int a=dialog2.pobierzTW().toInt();
            if(a==0) ptr->zmienTrybWyzwanie(0);
            else ptr->zmienTrybWyzwanie(1);
           }
          }
         }
         else if(atrakcje[akt]->pobierzNazwa().substr(0,8)=="karuzela")
              {
               NewDialog3 dialog3;
               dialog3.setWindowTitle("Obiekt Karuzela");
               dialog3.exec();
               if(dialog3.pobierzC()!=NULL) atrakcje[akt]->zmienCena(dialog3.pobierzC().toDouble());
               if(dialog3.pobierzMW()!=NULL) atrakcje[akt]->zmienMinimalnyWiek(dialog3.pobierzMW().toInt());
               if(dialog3.pobierzObraz()!=NULL) atrakcje[akt]->zmienPlik(dialog3.pobierzObraz().toStdString());

               Karuzela *ptr=dynamic_cast<Karuzela*>(atrakcje[akt]);
               if(ptr!=NULL)
               {
                if(dialog3.pobierzLPa()!=NULL) ptr->zmienLiczbaPasazerow(dialog3.pobierzLPa().toInt());
                if(dialog3.pobierzDW()!=NULL) ptr->zmienDlugoscWejscia(dialog3.pobierzDW().toInt());
               }
              }

    wypisz();}
}

void MainWindow::usun()
{
    if(atrakcje[akt]->pobierzNazwa().substr(0,3)=="dom" && isdigit(atrakcje[akt]->pobierzNazwa()[3])) liczd--;
    if(atrakcje[akt]->pobierzNazwa().substr(0,11)=="dom_strachu") liczds--;
    if(atrakcje[akt]->pobierzNazwa().substr(0,8)=="karuzela") liczk--;
    atrakcje.erase(atrakcje.begin()+akt);
    if(akt>0) akt--;
    ui->nazwa->clear();
    ui->cena->clear();
    ui->minimalny_wiek->clear();
    ui->text3->clear();
    ui->text4->clear();
    ui->text5->clear();
    ui->text6->clear();
    scene.clear();
    QMessageBox mb;
    mb.setWindowTitle("Uwaga");
    mb.setText("Element został usunięty");
    mb.exec();
    wypisz();
}

MainWindow::~MainWindow()
{
    if(nowa!=NULL) delete nowa;
    for(vector<Atrakcja*>::iterator it=atrakcje.begin(); it!=atrakcje.end(); it++)
        delete *it;
    delete ui;
}
