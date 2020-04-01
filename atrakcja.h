#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Atrakcja
{
    protected:
        double cena;
        int minimalny_wiek; //w latach
        string nazwa;
        string plik;

    public:
        Atrakcja();
        virtual ~Atrakcja() {}

        void zmienCena(double nowa_cena);
        void zmienMinimalnyWiek(int nowy_minimalny_wiek);
        void zmienNazwa(string nowa_nazwa);
        void zmienPlik(string nowy_plik);
        double pobierzCena();
        int pobierzMinimalnyWiek();
        string pobierzNazwa() {return nazwa;}
        string pobierzPlik() {return plik;}


        virtual void wypisz()=0;

        friend ostream& operator<<(ostream &s, const Atrakcja &a);
        friend istream& operator>>(istream &s, Atrakcja &a);

        void zapiszStan(Atrakcja &a);
        void wczytajStan(Atrakcja &a);
};
