#include<iostream>
#include<cstdlib> // system("pause"),
#include<cmath>
using namespace std;

int cosiek(long long int q);
void dziwnywzorek(int licznik,int n,long long int wyniki[],long long int doskonale[]);
void sitko(int n,int h, int licznik, long long int wyniki[],bool tab[],int w);

bool *tab;
long long int *wyniki;
long long int *doskonale;

main(){
int n,h,licznik=1; //n-liczba elementow, h to zmienna pomocniacza dla sqrt
int w; //byle jaki typ zmiennej

cout<<"Podaj gorna granice zbioru dla, ktorego chcesz obliczyc wartosc funckji?"<<endl;
cin>>n;
	   h=sqrt(n);
bool *tab=new bool[n]; //tablica dynamiczna

long long int *wyniki=new long long int[n];
long long int *doskonale=new long long int[n];

   sitko(n,h,licznik,wyniki,tab,w);
   dziwnywzorek(licznik,n,wyniki,doskonale);

system("pause");

}

void sitko(int n,int h, int licznik, long long int wyniki[],bool tab[],int w){
for(int i = 2; i <= n; i++) {tab[i] = true;} //ustawienie wszystkiego na true
    for(int i = 2; i < n; i++)
        for(w = i + i; w <= n; w += i) tab[w] = false; // jezeli wartosc  w powtarza sie w tablicy to zmienia sie ja na false
    for(long long int i = 2; i <= n; i++){
        if(tab[i]){//jezeli jest wartosc to
                     // cout << i <<"\t";//wypisanie wartosci
                    wyniki[licznik]=i;//przepisanie do tablicy z wynikami
                    licznik++;
            }
        }
        cout<<"\n";
}

 int cosiek(long long int q){
    if(q==1) return 2;
        else  if(q>0)return (cosiek(q-1)*2);
}
void dziwnywzorek(int licznik,int n,long long int wyniki[],long long int doskonale[]){
for(int i=1; i<=n; i++){
            doskonale[i]=(cosiek(wyniki[i])-1)*(cosiek(wyniki[i]-1));
            if(doskonale[i]>0 && doskonale[i]<n)cout<<"\t"<<doskonale[i]<<endl;
            if(doskonale[i]>n)break;
                }}
