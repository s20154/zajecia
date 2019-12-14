#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void czytaj()
{
    fstream odczyt("zapis33.txt", ios::in); // odczyt.open

    if(odczyt.good())
    {
        string napis;

        cout << "Zawartosc pliku: " << endl;

        while (!odczyt.eof())
            {
                getline(odczyt, napis);
                cout << napis << endl;
            }
            odczyt.close();
    }
    else
    {
        cout << "Blad pliku" << endl;
    }
}

void pisz(int rozm, string *nap1, string *nap2)
{
    fstream zapis("zapis33.txt", ios::out);
    if(zapis.good())
    {
        //zapis do pliku
        zapis << "Imie:\t" << *nap1 << endl;
        zapis << "Nazwisko:\t"<< *nap2 << endl;
        zapis.flush();
        //czyszczenie bufora
        zapis.close();
    }
    else
    {
        cout << "Blad pliku" << endl;
    }
}

int main()
{
	int static DLUGOSC = 10;
	string imie[DLUGOSC];
	string nazw[DLUGOSC];
	string rok[DLUGOSC];

    pisz(DLUGOSC, imie, nazw);
    czytaj();


    return 0;
}

