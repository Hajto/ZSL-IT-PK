#include<iostream>
#include<cstdlib>
#include<sstream>
#include<locale>

using namespace std;

float silnia(float a);
int cos(int a,int b);
float fib(int a);
float cosiek(float a,float b,float w);

    char c;
	float a,b,w;
	bool menu=true;
	string dane,tmp1,tmp2;
    string arr[3];
	int i=0;

void foo(void){
    do{
if(menu){
	cout<<"\t\t Wpisz dzialanie \n\t zgodnie z ponizszym schematem."<<endl;
	cout<<"Dodawanie a + b "<<endl;
	cout<<"Odejmowanie a - b"<<endl;
	cout<<"Mnozenie a * b"<<endl;
	cout<<"Dzielenie a : b"<<endl;
	cout<<"Potega Podstawa P Wykladnik"<<endl;
	cout<<"NWD a N b"<<endl;
	cout<<"Silnia a S"<<endl;
	cout<<"Fibunacci a F"<<endl;
	cout<<"Aby zakonczyc nacisnij krzyzyk.\n\n"<<endl;
	menu=false;
        }
    c=0;;
	getline(cin, dane);
    stringstream psin(dane);


        psin >> a;
        psin >> c;
        psin >> b;



                switch(c){
			   	case '+':
			   		w=a+b;
			   		cout<<"Suma to: "<<w<< endl;
			   		break;
		   		case '-':
				   	w=a-b;
			   		cout<<"Roznica to: "<<w<<endl;
			   		break;
		   		case '*':
			   		w=a*b;
			   		cout<<"Iloczyn to: "<<w<< endl;
			   		break;
		   		case ':':
			   		if (b==0) cout<<"Dzielenie przez 0"<<endl;
			   		else {
			   		w=a/b;
			   		cout<<"Iloraz to: "<<w<< endl;
			   		}
			   		break;
		   		case 'S':
					cout<<"Wynik to :"<<silnia(a)<<endl;
					break;
	            case 'N':
					 cout<<"Wynik to :"<<cos(a,b)<<endl;
					 break;
                case'F':
					 cout<<"Wynik to :"<<fib(a)<<endl;
					 break;
  			    case'P':
					 cout<<"Wynik to :"<<cosiek(a,b,w)<<endl;

				default:
					if(c==0)cout<<"Cos wpisales zle."<<endl;
					break;
			   }
		   }while (c!='W');}


 main(){
foo();
}

float silnia(float a){
	if(a<=0) a=1;
	else a=a*silnia(a-1);
	return a;
}
int cos(int a, int b){
	if(b!=0) return cos(b,a%b);
	else return a;
}
float fib(int a){
	switch(a){
		case 0:
			a=0;
			break;
		case 1:
			a=1;
			break;
		default:
			a=fib(a-1)+fib(a-2);
			break;

	}
	return a;
}
float cosiek(float a,float b,float w){
    if(b==1) return a;
        else  if(b>0)return (cosiek(a,b-1,w)*a);
            else    {w=(cosiek(a,b+1,w)*a);
                w=1/w;
                return w;
                    }
}

/*

float nwd(int a, int b){
f a<>b
  if a>b
    return nwd(a-b,b)
  else
    return nwd(b-a,a)
return a

}
for(i = 0; i < 4; i++){

        cout << arr[i] << endl;

    }

*/
