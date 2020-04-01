#include "atrakcja.h"

Atrakcja::Atrakcja()
{
    cena=10.00;
    minimalny_wiek=12;
    nazwa="atrakcja";
    plik="";
}

void Atrakcja::zmienCena(double nowa_cena)
{
    cena=nowa_cena;
}

void Atrakcja::zmienMinimalnyWiek(int nowy_minimalny_wiek)
{
    minimalny_wiek=nowy_minimalny_wiek;
}

void Atrakcja::zmienNazwa(string nowa_nazwa)
{
    nazwa=nowa_nazwa;
}

void Atrakcja::zmienPlik(string nowy_plik)
{
    plik=nowy_plik;
}

double Atrakcja::pobierzCena()
{
    return cena;
}

int Atrakcja::pobierzMinimalnyWiek()
{
    return minimalny_wiek;
}

/*void Atrakcja::wypisz()
{
    cout<<"cena: "<<cena<<endl;
    cout<<"minimalny wiek: "<<minimalny_wiek<<endl;
}*/

ostream& operator<<(ostream &s, const Atrakcja &a)
{
    s<<a.cena<<" "<<a.minimalny_wiek;
    return s;
}

istream& operator>>(istream &s, Atrakcja &a)
{
    s>>a.cena>>a.minimalny_wiek;
    return s;
}

void Atrakcja::zapiszStan(Atrakcja &a)
{
    ofstream plik("plik.txt", ios::out | ios::app);
    plik<<"atrakcja"<<endl;
    plik<<a;
    plik.close();
}

void Atrakcja::wczytajStan(Atrakcja &a)
{
    ifstream plik("plik.txt", ios::in);
    plik>>a;
    plik.close();
}
