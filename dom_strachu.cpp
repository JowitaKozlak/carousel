#include "dom_strachu.h"

DomStrachu::DomStrachu()
{
    tryb_wyzwanie=0;
    liczba_pulapek=20;
    Atrakcja::nazwa="dom_strachu";
}

void DomStrachu::zmienTrybWyzwanie(bool nowy_tryb_wyzwanie)
{
    tryb_wyzwanie=nowy_tryb_wyzwanie;
}
void DomStrachu::zmienLiczbaPulapek(int nowa_liczba_pulapek)
{
    liczba_pulapek=nowa_liczba_pulapek;
}

void DomStrachu::wypisz()
{
    Dom::wypisz();
    if(tryb_wyzwanie) cout<<"tryb wyzwanie: wlaczony"<<endl;
    else cout<<"tryb wyzwanie: wylaczony"<<endl;
    cout<<"liczba pulapek: "<<liczba_pulapek<<endl;
}

ostream& operator<<(ostream &s, const DomStrachu &ds)
{
    s<<ds.tryb_wyzwanie<<" "<<ds.liczba_pulapek<<endl;
    s<<static_cast<const Dom &>(ds);
    return s;
}

istream& operator>>(istream &s, DomStrachu &ds)
{
    s>>ds.tryb_wyzwanie>>ds.liczba_pulapek;
    s>>static_cast<Dom &>(ds);
    return s;
}

void DomStrachu::zapiszStan(DomStrachu &ds)
{
    ofstream plik("plik.txt", ios::out | ios::app);
    plik<<"dom_strachu"<<endl;
    plik<<ds;
    plik.close();
    //Dom::zapiszStan(ds);
}

void DomStrachu::wczytajStan(DomStrachu &ds)
{
    ifstream plik("plik.txt", ios::in);
    plik>>ds;
    plik.close();
    //Dom::wczytajStan(ds);
}
