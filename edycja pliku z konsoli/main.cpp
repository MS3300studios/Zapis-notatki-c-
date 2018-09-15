#include <iostream>
#include "funkcje.h"
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
for (int i=1;i<=2;i++)
{
int PIN;
cout<<"Podaj PIN: ";
cin>>PIN;
 if(PIN==1234)
{
    cout<<"\a";
    system("cls");
    system("color a");
    cout<<"PIN prawidlowy!";
    Sleep(2000);
    system("color f");
    system("cls");
    cout<<"========WITAJ W SCHOWKU========"<<endl;
    cout<<"mozesz tu przechowywac swoje zapiski!"<<endl;
    Sleep(2000);
    system("cls");

    while(true)
{
    int decyzja;
    Klasa k1;
    system("cls");
    cout<<"========MENU========"<<endl;
    cout<<"Chcesz Dodac cos do pliku? -Wcisnij 1"<<endl;
    cout<<"Chcesz Wyswietlic zawartosc pliku? -Wcisnij 2"<<endl;
    cout<<"Chcesz wyjsc z programu?? -Wcisnij 3"<<endl;
    cin >> decyzja;
    switch(decyzja)
    {
    case 1:
        {
        k1.dopisz();
        }
        break;
    case 2:
        {
           k1.wczytaj();
           k1.wyswietl();
        }
        break;
    case 3:
        {
            exit(0);
        }
        break;
    default:
        {
            cout<<"bledna odpowiedz"<<endl;
            Sleep(1000);
        }
    }
 }
}
else
{
    system("cls");
    system("color c");
    cout<<"bledny PIN!!! Pozostalo prob "<<i<<endl;
    Sleep(2000);
    system("cls");
    system("color f");
}
}
    return 0;
}
