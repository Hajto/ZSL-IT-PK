#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

void rozklad(int x)
{
    int n,i; /*zmienne pomocnicze wystepuje w wiecej niz jednej petli wiec zadeklarowalem tutaj*/
    n=sqrt(x); //Tak jak przy sprawdzaniu nie ma co sprawdzac
    for(i=2; i <= n; i++)
    {
        while(x%i==0) /* Kiedy x modulo i jest to wypisz i podziel i przypisz wartosc do x*/
        {
            cout<<i << "\t";
            x/=i;
        }
        if(x==1) /* Jezeli x rowne 1 przerwij i nie wypisuj nic */
        {   cout<<endl;
            return;}
    }
    cout <<x<< endl; /* Jezli x mod i nie jest rowne 0 i nie jest rowne 1 to go wypisz */
}
main(){
int x;
    cout<<"Podaj liczbe, ktora chcesz rozlozyc na czynniki pierwsze"<<endl;
    cin>>x;
    cout<<"Czynniki:  ";
        rozklad(x); //Wywolanie funkcji
    system("pause");
}

