#include<iostream>
#include<string>
#include<sstream>
#include<locale>
#include<cmath>

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
main()
{
   string numerki; //ciag wejsciowy
   int n,d,g,x=0; //zmienne wyznaczaj��ce granice sortowania d-min g-max
   bool trwanie=false; //zmienna kontrolne
do{
   cout<<"\nWpisz liczby oddzielajac je spacjami, aby zakonczyc program nie wpisuj nic : ";
   getline(cin, numerki);
           n=liczby(numerki);
           cout<<"\n"<<n<<endl;
           int *arr=new int[n];
                   trwanie=false;
                           if(n>1){
                                trwanie=true;}
                                x=0;
               istringstream csin(numerki); //konwersja string na int, tylko odczyt
               while ( x < n){
                   csin >> arr[x];
                   x++;
               }

    for(int i=0;i<n;i++){
        if(arr[i]>g)g=arr[i];
    }
     d=g;
    for(int i=0;i<n;i++){
        if(arr[i]<d)d=arr[i];
    }

    int *temp=new int[g-d+1];
        for(int i = 0 ; i <= g+abs(d); i++){
            temp[i]=0;}
        for(int i = 0; i < n; i++){
            temp[arr[i]-d]++;}
        for(int i = 0; i <= g+abs(d);i++){
                if(temp[i]>=1){
                    for(int j=1;j<=temp[i];j++)
                        {
                        cout << i+d << "  ";
                            }
                        }
                }
        numerki.clear();
        d=0;
        g=0;
}while(trwanie==true);//przerwanie petli, kiedy nie ma co sortowac
}
