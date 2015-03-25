#include<iostream>
#include<cstdlib>
using namespace std;

main(){

int sumadz=0, x,arrcounter=0,i;

cout<<"\t\tPodaj zakres liczb do sprawdzenia:"<<endl;
cin>>x;
int  tab[x];
    for(int j=1; j<x; j++){
            sumadz=0;
        for(i=1;i<=(j/2);i++){
            if((j%i)==0) {sumadz+=i;}
            }
        if(j==sumadz){
            tab[arrcounter]=j;
            arrcounter++;}
    }

    cout<<"\t\tKolejne liczby doskonale.\n\t\t wypisane ponizej:"<<endl;
    for(i=0;i<arrcounter;i++){
        cout<<tab[i]<<", ";
    }
    cout<<"\n";
    system("pause");
}
