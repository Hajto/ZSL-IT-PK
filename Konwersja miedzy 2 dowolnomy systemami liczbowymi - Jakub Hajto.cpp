/*
Zrodla :
http://www.cplusplus.com/reference/stack/stack/push/
http://www.cplusplus.com/reference/string/string/

Opublikowano na pastebin.com

Dlaczego unsigned ? - bo nie niesie za soba, bo wymaga bardzo malo pamieci
Dlaczego stack ? - bo chcialem sprawdzic jak to dziala


*/
#include<iostream>
#include<stack>
#include<cstdlib>
#include<string>
using namespace std;
char znaki[]="0123456789ABCDEFGAHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+|"; //tablica znakow wykorzystywanych do odtworzenia

inline unsigned char check(){
    unsigned short baza;
    cin>>baza;
    while(baza>50||baza<2){
        cout<<"Podstawa musi zawierać się w przedziale <2;50>. Podaj inną: ";
        cin>>baza;
    }
    return baza;
}

int main(){
    int decimal=0; // decimal bedzie zawieraz dziesiatna wartosc

    cout<<"\t\tPodaj calkowita liczbe wejsciowa: ";
    string input;
    cin>>input;

    cout<<"\tPodaj podstawe systemu liczbowego liczby wejsciowej: ";
        unsigned char stara_baza=check();
    cout<<"\tPodaj podstawe systemu liczbowego liczby wyjsciowej: ";
        unsigned char nowa_baza=check();

    cout<<"\t\t\t\tWynik: ";

    if(stara_baza==nowa_baza)cout<<input; //skrot jezeli nie nastepuje zmiana systemu to wypisz wynik
    else{
        for(int i=0;i<input.length() ;++i){ // input.length sprawdzadlugosc ciagu
            unsigned char znak=tolower(input[i]); //zmienia wszystko na male znaki
            decimal=decimal*stara_baza+znak+((znak>='0'&&znak<='9')?-'0':-'a'+10);
            }

        if(nowa_baza==10)cout<<decimal; // taki skrot, jezeli nowa baza to odrazu wypisuje zmienna decimal
        else if(decimal==0) cout<<'0';
        else{
            stack<char> output; //definicja stosu wyjsciowego
            do{
                output.push(znaki[decimal%nowa_baza]); // modulo, ktorego wynik dodaje element na szczyt stosu
                decimal/=nowa_baza; //dzielimy
            }while(decimal!=0);
            while(!output.empty()){ // przyjmuje wartosc kiedy stos jest pusty
                cout<<output.top(); // Zwraca element na szczycie sostu
                output.pop(); // Usuwa element z gory stosu
            }
        }
    }
    cout<<"\n";
    system ("pause");
    return 0;
}

/* Zbedny kod z lekcji

void zamien(char &a, char &b){
       char tmp=a;
       a=b;
       b=tmp;
   }
void odwroc(char wyniki[]){
       int i=0, j=counter-1;
           for(int k=1;k<=counter/2;k++){
                   zamien(wyniki[i],wyniki[j]);
                   i++;
                   j--;
           }
   }
void wypisz(char wyniki[]){
   for(int i=0;i<counter;i++){
               cout<<wyniki[i];
           }
}


*/
