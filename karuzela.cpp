#include "karuzela.h"

int Karuzela::zlicz=0;
Karuzela::Karuzela() : liczba_pasazerow(0), dlugosc_wejscia(5)
{
    ++zlicz;
    #ifdef _DEBUG
        cout<<"Wywolano konstruktor Karuzela. Aktualna liczba Karuzel to: "<<zwroc_liczba_karuzel()<<endl;
    #endif
    Atrakcja::nazwa="karuzela";
}

Karuzela::Karuzela(const Karuzela &karuzela)
{
    dlugosc_wejscia=karuzela.dlugosc_wejscia;
    /*swiatlo=karuzela.swiatlo;
    armatka=karuzela.armatka;
    if(karuzela.glosnik!=NULL)
        {glosnik=new Glosnik;
         //glosnik=new Glosnik(karuzela.glosnik);
         *glosnik=*(karuzela.glosnik);
         delete karuzela.glosnik;}*/
    ++zlicz;
    #ifdef _DEBUG
        cout<<"Wywolano konstruktor kopiujacy Karuzela. Aktualna liczba Karuzel to: "<<zwroc_liczba_karuzel()<<endl;
    #endif
}

void Karuzela::wypisz()
{
    //Atrakcja::wypisz();
    cout<<"liczba pasazerow: "<<liczba_pasazerow<<endl;
    cout<<"dlugosc wejscia: "<<dlugosc_wejscia<<endl;
    //cout<<"kolor swiatla: "<<swiatlo.pobierzKolor()<<endl;
}

ostream& operator<<(ostream &s, const Karuzela &k)
{
    s<<k.liczba_pasazerow<<" "<<k.dlugosc_wejscia<<endl;
    s<<static_cast<const Atrakcja &>(k)<<endl;
    return s;
}

istream& operator>>(istream &s, Karuzela &k)
{
    s>>k.liczba_pasazerow>>k.dlugosc_wejscia;
    s>>static_cast<Atrakcja &>(k);
    return s;
}

/*void Karuzela::zapiszStan(Karuzela &k)
{
    ofstream plik("plik.txt", ios::out | ios::app);
    plik<<"karuzela"<<endl;
    plik<<k;
    plik.close();
    //Atrakcja::zapiszStan(k);
}

void Karuzela::wczytajStan(Karuzela &k)
{
    ifstream plik("plik.txt", ios::in);
    plik>>k;
    plik.close();
    //Atrakcja::wczytajStan(k);
}

void Karuzela::dodajGlosnik()
{
    glosnik = new Glosnik;
}

void Karuzela::usunGlosnik()
{
    if(glosnik) {delete glosnik; glosnik=NULL;}
}*/

void Karuzela::zmienDlugoscWejscia(int nowa_dlugosc_wejscia)
{
    dlugosc_wejscia=nowa_dlugosc_wejscia;
}

void Karuzela::zmienLiczbaPasazerow(int nowa_liczba_pasazerow)
{
    liczba_pasazerow=nowa_liczba_pasazerow;
}

void Karuzela::wypiszLiczbePasazerow()
{
    cout<<"Liczba pasazerow: "<<liczba_pasazerow<<endl;
}

bool Karuzela::operator<(const Karuzela &karuzela)
{
	if (karuzela.dlugosc_wejscia<dlugosc_wejscia) return false;
	else return true;
}

bool Karuzela::operator>(const Karuzela &karuzela)
{
	if (karuzela.dlugosc_wejscia>dlugosc_wejscia) return false;
	else return true;
}

bool Karuzela::operator==(const Karuzela &karuzela)
{
	if (karuzela.dlugosc_wejscia==dlugosc_wejscia) return false;
	else return true;
}

bool Karuzela::operator!=(const Karuzela &karuzela)
{
    if (karuzela.dlugosc_wejscia!=dlugosc_wejscia) return true;
	else return false;
}

/*float Karuzela::operator+(const Karuzela &karuzela)
{
    return karuzela.armatka.pobierzWaga()+armatka.pobierzWaga();
}*/

/*Karuzela& Karuzela::operator[](const Karuzela &karuzela)
{
    return *this;
}*/

Karuzela& Karuzela::operator=(const Karuzela &karuzela)
{
    dlugosc_wejscia=karuzela.dlugosc_wejscia;
    /*swiatlo=karuzela.swiatlo;
    armatka=karuzela.armatka;
    if(glosnik!=NULL) {delete glosnik; glosnik=NULL;}
    glosnik=new Glosnik;
    //glosnik=new Glosnik(karuzela.glosnik);
    *glosnik=*(karuzela.glosnik);*/
    return *this;
}

Karuzela::~Karuzela()
{
    --zlicz;
    #ifdef _DEBUG
        cout<<"Wywolano destruktor Karuzela. Aktualna liczba Karuzel to: "<<zwroc_liczba_karuzel()<<endl;
    #endif
    //if(glosnik!=NULL) usunGlosnik();
}
