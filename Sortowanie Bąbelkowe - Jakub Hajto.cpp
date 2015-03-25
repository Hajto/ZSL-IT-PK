#include <iostream>
#include<string>   //potrzebne do dzialania stringow
#include<sstream> // String stream - strumień - potrzebne do konwersji
#include<locale> //isdigit - sprawdza czy element jet CYFRA
using namespace std;

int liczby(string cyfry){
    int liczby = 0;
    size_t i;

    if (isdigit(cyfry[0])) {
        liczby++; //sprawdza czy zaczyna sie od cyfry
    }
            for (i = 1; i < cyfry.length(); i++) {
                if ((isdigit(cyfry[i])) && (!isdigit(cyfry[i-1]))) {
                    liczby++; //liczy i ochrania przed podwójnymi spacjami
                }
    }
    return liczby;
}
main()
{
    string numerki; //ciag wejsciowy
    int n,dolna,gorna,x; //zmienne wyznaczające granice sortowania
    bool trwanie=false; //zmienna kontrolne
do{
    cout<<"Wpisz liczby oddzielajac je spacjami, aby zakonczyc program nie wpisuj nic, nie wpisujac nic przerwiesz dzialanie programu : ";
    getline(cin, numerki);


    n=liczby(numerki);
    int *arr=new int[n];
            trwanie=false;
                    if(n>1){
                        trwanie=true;}
    x=0;
    istringstream csin(numerki); //konwersja string na int, tylko odczyt
    while ( x < n){
        csin >> arr[x];
        ++x;
    }

/*Sortowanie babelkowe "dwu kierunkowe" z granicami zbioru, momencie kiedy jeden z elementow znajdzie
sie na granicy zbioru i nie bedzie zmienial pozycji zostanie pominiety w sprawdzaniu, po sprawdzeniu z jednej strony, ciąg
sprawdzany jest jeszcze raz z drugiej strony i dopiero potem wraca do petli do while */

dolna = 0; gorna = n - 2; // -2 bo 2 ostatnie elementy beda sprawdzane w drugim kierunku jako pierwsze
  do
  {
    x = -1;
    for(int i = dolna; i <= gorna; i++) // sprawdzanie w jedna strone
      if(arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
        x = i;
      }
    if(x < 0) break; //jezeli elementy sie posortuje przy pierwszym obiego to przerywwa pentle
    gorna = x - 1; //zapewnienie ze 2 ostatnie elementy beda sprawdzone
    x = -1;
    for(int i = gorna; i >= dolna; i--) //sprawdzenie w druga strone
      if(arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
        x = i;
      }
    dolna = x + 1;
  } while(x >= 0);


    if(trwanie==true){
    /* Wypisanie*/
        cout << "Posortowalem ci licby ^^: "<<"\n\n";
            for(int i = 0; i < n; i++){
                cout <<arr[i]<<"\t";}
                }
            cout<<"\n";

}while(trwanie==true);//przerwanie petli, kiedy nie ma co sortowac
}


/*Sortowanie "wolne", standardowe, takie jak w szkole.
   for(int j = n ; j > 0; j--)
     for(int i = 0; i < j; i++)
        if(arr[i] > arr[i + 1])
            swap(arr[i],arr[i + 1]); */
