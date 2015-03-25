/*
Autor : Jakub Hajto
Zrodla:
http://www.cplusplus.com/reference/sstream/stringstream/
http://www.cplusplus.com/reference/locale/locale/?kw=locale

Opublikowano na Pastebin.com

        Wytlumaczenie nazw zmiennych i funkcji:
            QSH - QuickSort, funckja sortuj¹ca
            p,l - prawy, lewy kraniec fragmentu sortowanego, tzw. partycje
            pt - piwot, element miedzy partycjami sortowanymi
            arr - tablica danych wejœciowych
            n - liczba elementów  w tablicy
            i,j - pierwszy element, drugi elemnt, zmienne pomocnicze do "przesuwania i podmieniania"
            R - Reszta do wydania


*/

#include<iostream>
#include<string>
#include<sstream>
#include<locale>

using namespace std;

int liczby(string cyfry){
   int liczby = 1;
   size_t i;
        for(int i=0; i< cyfry.length();i++){
            if(isspace(cyfry[i])){
                liczby++;
            }
        }
   return liczby;
}
int *arr;
void QSH(int l, int p, int *arr);



main()
{
   string numerki; //ciag wejsciowy
   int n,d,x=0,R;
   cout<<"\nWpisz nominaly do dyspozycji kasjera, aby zakonczyc program nie wpisuj nic : ";
   getline(cin, numerki);
       cout<<"Ile reszty do wydania \n";
        cin>>R;
           n=liczby(numerki);
           int *arr=new int[n];
               istringstream csin(numerki); //konwersja string na int, tylko odczyt
               while ( x < n){
                   csin >> arr[x];
                   x++;
               }
                    cout<<"\n Dostepne nominaly: \n";
            QSH(0,n,arr);
            for(int wypisz_licznik=0; wypisz_licznik<n;wypisz_licznik++){
                cout<<arr[wypisz_licznik]<<" zlotych \n";
                    }
                    cout<<" \n Reszta \n";
                for(int counter=n; counter >= 0; counter-- ){
                    if(arr[counter]<=R){
                        d=R/arr[counter];
                        R=R-(arr[counter]*d);
                        cout<<"Nalezy wydac "<<d<<" razy "<<arr[counter]<<" zlotych \n";
                    }

                }
        numerki.clear();
}
void QSH(int l, int p, int *arr)
{
  int i,j,pt;

          pt=(l+p)/2; //Zaczynamy od œrodka
          swap(arr[p],arr[pt]);
          pt=p;
        for(int i=j=l; i < p; i++){
            if(arr[i] < arr[pt])
                  {
                    swap(arr[i], arr[j]);
                    j++;
                  }
            }
            swap(arr[j],arr[p]);
            if(l < j - 1)  QSH(l, j - 1,arr);
            if(j + 1 < p) QSH(j + 1, p ,arr);
}
