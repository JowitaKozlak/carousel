#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "atrakcja.h"

class Dom: public Atrakcja
{
    protected:
        double powierzchnia; //w metrach kwadratowych
        int liczba_pieter;

    public:
        Dom();
        virtual ~Dom() {}

        void zmienPowierzchnia(double nowa_powierzchnia);
        void zmienLiczbaPieter(int nowa_liczba_pieter);
        double pobierzPowierzchnia() {return powierzchnia;}
        int pobierzLiczbaPieter() {return liczba_pieter;}

        void wypisz();
        friend ostream& operator<<(ostream &s, const Dom &d);
        friend istream& operator>>(istream &s, Dom &d);

        void zapiszStan(Dom &d);
        void wczytajStan(Dom &d);
};

