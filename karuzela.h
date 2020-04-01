
//dla uproszczenia zakomentowane zostały wszelkie powiązania z podobiektami z projektu 1

#pragma once
#include <iostream>
#include <string>
#include <fstream>

//#include "swiatlo.h"
//#include "glosnik.h"
//#include "armatka.h"

using namespace std;

#include "atrakcja.h"

class Karuzela: public Atrakcja
{
    private:
        int liczba_pasazerow;
        int dlugosc_wejscia; // pojedynczej przejazdzki - w minutach

    public:
        //Glosnik *glosnik=NULL;
        //Swiatlo swiatlo;
        //Armatka armatka;
        static int zlicz;

        void wypisz();
        friend ostream& operator<<(ostream &s, const Karuzela &k);
        friend istream& operator>>(istream &s, Karuzela &k);

        //void zapiszStan(Karuzela &k);
        //void wczytajStan(Karuzela &k);

        Karuzela();
        virtual ~Karuzela();
        Karuzela(const Karuzela &karuzela);
        //void dodajGlosnik();
        //void usunGlosnik();
        void zmienDlugoscWejscia(int nowa_dlugosc_wejscia);
        void zmienLiczbaPasazerow(int nowa_liczba_pasazerow);
        int pobierzDlugoscWejscia() {return dlugosc_wejscia;}
        int pobierzLiczbaPasazerow() {return liczba_pasazerow;}

        static int zwroc_liczba_karuzel() { return zlicz; }
        void wypiszLiczbePasazerow();

        Karuzela& operator++() {liczba_pasazerow++; return *this;}
        Karuzela& operator--() {if(liczba_pasazerow>0) liczba_pasazerow--; return *this;}
        bool operator<(const Karuzela &karuzela);
        bool operator>(const Karuzela &karuzela);
        bool operator==(const Karuzela &karuzela);
        bool operator!=(const Karuzela &karuzela);
        //float operator+(const Karuzela &karuzela);
        //Karuzela& operator[](const Karuzela &karuzela);
        Karuzela& operator=(const Karuzela &karuzela);
        //operator konwersji jest w klasie Armatka
};
