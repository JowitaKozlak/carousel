#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "dom.h"

class DomStrachu: public Dom
{
    private:
        bool tryb_wyzwanie;
        int liczba_pulapek; //w sumie

    public:
        DomStrachu();
        virtual ~DomStrachu() {}

        void zmienTrybWyzwanie(bool nowy_tryb_wyzwanie);
        void zmienLiczbaPulapek(int nowa_liczba_pulapek);
        bool pobierzTrybWyzwanie() {return tryb_wyzwanie;}
        int pobierzLiczbaPulapek() {return liczba_pulapek;}

        void wypisz();
        friend ostream& operator<<(ostream &s, const DomStrachu &ds);
        friend istream& operator>>(istream &s, DomStrachu &ds);

        void zapiszStan(DomStrachu &ds);
        void wczytajStan(DomStrachu &ds);
};
