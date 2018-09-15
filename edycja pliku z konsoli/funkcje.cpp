#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include "funkcje.h"
using namespace std;

    void Klasa::wczytaj()
    {
        fstream plik;
        plik.open("lista.txt",ios::in);
        if (plik.good()==false)
        {
            cout<<"Brak pliku"<<endl;
            exit(0);
        }
        string linia;
        int nr_linii=1;
        while (getline(plik,linia))
        {

                if(nr_linii==1)linia1=linia;
                if(nr_linii==2)linia2=linia;
                if(nr_linii==3)linia3=linia;

            nr_linii++;
        }
    plik.close();
    }

    void Klasa::dopisz()
    {
        int wybor;
        string artykul;
        fstream plik;
        plik.open("lista.txt",ios::out);

        cout << "Podaj nazwe nowego artukulu: ";
        cin >> artykul;
        plik<<artykul;
        cout << "Wyjdz-1"<<endl;
        cout << "Dodaj nowy artykul-2"<<endl;
        cin>>wybor;
        while (wybor!=1)
        {
            cout << "Podaj nazwe nowego artukulu: ";
        cin >> artykul;
        plik<<" "<<artykul;
        cout << "Wyjdz-1"<<endl;
        cout << "Dodaj nowy artykul-2"<<endl;
        cin>>wybor;
        }

        plik.close();

    }
    void Klasa::wyswietl()
    {
        system("cls");
        cout<<linia1;
        cout<<endl<<linia2;
        cout<<endl<<linia3<<endl;
        system("pause");
        system("cls");
    }
