#include<iostream>
#include<cmath>

using namespace std;

main(){

    int input[10];
    int L,H=0,j=0; //Analogicznie Lowest and Highest

    cout<<"Podaj 10 liczb do posortowania"<<endl;
        for(int i=0;i<10;i++){
            cout<<"Podaj "<<i+1<<" liczbe:";
                cin>>input[i];
        }
    for(int i=0;i<10;i++){
        if(input[i]>H)H=input[i];
    }
    cout<<"Wartosc Maxymalna to "<<H<<endl;

    L=H;

    for(int i=0;i<10;i++){
        if(input[i]<L)L=input[i];
    }
    cout<<"Wartosc Minimalna to "<<L<<endl;

    int *temp=new int[H-L+1];

        for(int i = 0 ; i <= H+abs(L); i++){
            temp[i]=0;}

        for(int i = 0; i < 10; i++){
            temp[input[i]-L]++;
                }

        for(int i = 0; i <= H+abs(L);i++){
                if(temp[i]>=1){
                    for(int j=1;j<=temp[i];j++)
                        {
                        cout << i+L << "  ";
                            }
                        }
                }
       }

