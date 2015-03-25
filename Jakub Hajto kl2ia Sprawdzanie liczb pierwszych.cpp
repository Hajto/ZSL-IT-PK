#include <iostream>
#include <cmath> //sqrt
using namespace std;
int main(){
int we, wy=2,h; //x-liczba sprawdzana, y licznk, h zmienna pomocnicza do sqrtowania:D
    do{
            cout<<"Podaj liczbe, ktora chcesz sprawdzic, aby zakonczyc wpisz 0"<<endl;
            cin >> we;
              if(we==1)cout<<"Liczba pierwsza – liczba naturalna, która ma dokladnie dwa dzielniki naturalne: jedynke i siebie sama"<<endl;
                else{h=sqrt(we);
                while(we%wy!=0){ wy++; }
                if (wy==we){
                    cout << "Ta liczba jest pierwsza.\n" <<endl; }
                else{ cout << "Ta liczba nie jest pierwsza.\n"<<endl; }}
                }while(we!=0);
return 0; }
