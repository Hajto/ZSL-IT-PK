#include<iostream>
#include<cstdlib> // system("pause"),
#include<cmath>
using namespace std;

int cosiek(int q);

main(){
int n,h,licznik=1; //n-liczba elementow, h to zmienna pomocniacza dla sqrt
int w; //byle jaki typ zmiennej

cout<<"Podaj gorna granice zbioru dla, ktorego chcesz obliczyc wartosc funckji?"<<endl;
cin>>n;
	   h=sqrt(n);
bool *tab=new bool[n]; //tablica dynamiczna
int *wyniki=new int[n];
int *doskonale=new int[n];
    for(int i = 2; i <= n; i++) {tab[i] = true;} //ustawienie wszystkiego na true
    for(int i = 2; i < n; i++)
        for(w = i + i; w <= n; w += i) tab[w] = false; // jezeli wartosc  w powtarza sie w tablicy to zmienia sie ja na false
    for(int i = 2; i <= n; i++){
        if(tab[i]){//jezeli jest wartosc to
                    cout << i <<"\t";//wypisanie wartosci
                    wyniki[licznik]=i; //przepisanie do tablicy z wynikami
                    licznik++; //inkrementacja zmiennej sterujacej
            }
        }
        cout<<"\n";
    for(int i=1; i<=licznik; i++){
            doskonale[i]=(cosiek(wyniki[i])-1)*(cosiek(wyniki[i]-1));
            if(doskonale[i]>n)break;
    }
    for(int i = 1; i <=licznik-1; i++){
                    cout << doskonale[i] <<"\t";}

system("pause");

}
int cosiek(int q){
    if(q==1) return 2;
        else  if(q>0)return (cosiek(q-1)*2);
}
