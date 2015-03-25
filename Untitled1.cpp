#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

void rozklad(int x)
{
    int g,i;
    g = sqrt(x);
    for(i=2; i <= g; i++)
    {
        while(x % i == 0)
        {
            cout<<i << "\t";
            x/=i;
        }
        if(x==1)
        {
            cout<<endl;
            return;
        }
    }

    cout <<x<< endl;
}
main(){
int x;
cout<<"Podaj liczbe, ktora chcesz rozlozyc na czynniki pierwsze"<<endl;
cin>>x;
cout<<"Czynniki:  ";
rozklad(x);
system("pause");
}

