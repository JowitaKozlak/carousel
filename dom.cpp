#include "dom.h"

Dom::Dom()
{
    powierzchnia=100;
    liczba_pieter=1;
    Atrakcja::nazwa="dom";
}

void Dom::wypisz()
{
    //Atrakcja::wypisz();
    cout<<"powierzchnia: "<<powierzchnia<<endl;
    cout<<"liczba pieter: "<<liczba_pieter<<endl;
};

void Dom::zmienPowierzchnia(double nowa_powierzchnia)
{
    powierzchnia=nowa_powierzchnia;
}
void Dom::zmienLiczbaPieter(int nowa_liczba_pieter)
{
    liczba_pieter=nowa_liczba_pieter;
}

ostream& operator<<(ostream &s, const Dom &d)
{
    s<<d.powierzchnia<<" "<<d.liczba_pieter<<endl;
    s<<static_cast<const Atrakcja &>(d)<<endl;
    return s;
}

istream& operator>>(istream &s, Dom &d)
{
    s>>d.powierzchnia>>d.liczba_pieter;
    s>>static_cast<Atrakcja &>(d);
    return s;
}

void Dom::zapiszStan(Dom &d)
{
    ofstream plik("plik.txt", ios::out | ios::app);
    plik<<"dom"<<endl;
    plik<<d;
    plik.close();
    //Atrakcja::zapiszStan(d);
}

void Dom::wczytajStan(Dom &d)
{
    ifstream plik("plik.txt", ios::in);
    plik>>d;
    plik.close();
    //Atrakcja::wczytajStan(d);
}
