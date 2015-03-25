#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

void zamien(char &a, char &b);
void odwroc(char wyniki[]);
void wypisz(char wyniki[]);

char a,b;
int counter=0;
main(){
    int rt=4, nowa, stara,val=0,dyszka=0;
    char znaki[]="0123456789ABCDEF";
    char znak;

    cout<<"Ile znakow bedzie miala liczba do konwersji??"<<endl;
        cin>>rt;
            char *tablica=new char[rt];
    cout<<"Podaj ta liczbe \n";
    for(int i=0;i<rt;i++){
        cin>>tablica[i];
    }
    cout<<"Podaj stara baze systemu liczbowego. Od 2 do 16 \n";
        cin>>stara;
    cout<<"Podaj nowa baze systemu liczbowego. Od 2 do 16 \n";
        cin>>nowa;


	int i = rt-1, wartosc;

	for(int k = 0; k < rt; k++)
	{
		znak = tablica[i];
		i--;

		switch(znak){
            case 'F':
                val=15;
                break;
            case 'E':
                val=14;
                break;
            case 'D':
                val=13;
                break;
            case 'C':
                val=12;
                break;
            case 'B':
                val=11;
                break;
            case 'A':
                val=10;
                break;
            default:
                val=(int)znak-48;
                break;
		}
            cout<<val<<endl;
		dyszka= dyszka+(pow(stara, k)*val);

	}

    while (dyszka>0)
       {
           tablica[counter]=dyszka%nowa;
           counter++;
               dyszka/=nowa; //po modulo trzeba podzielic
}
       char *wyniki=new char[counter];

       for(int i=0;counter>i;i++){
           wyniki[i]=znaki[*(tablica+i)];
       }
       odwroc(wyniki);
       wypisz(wyniki);
       cout<<"\n";

system("pause");
}
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
