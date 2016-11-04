#include <iostream>
using namespace std;

int n=0; //quantità di numeri che sono da inserire
double x=0; //numero inesrito da considerare al momento
double minimo=0; //valore minimo inserito
double massimo=0; //valore massimo iserito
double somma=0; //somma di tutti i numeri forniti in input
double media=0; //media dei valori
int i=0; //contatore del cicolo for

int main(){
    cout<<"Inserisci la quantità di numeri che vuoi confrontare:\n";
    cin>>n;
    cout<<endl;
    cout<<"Inserisci il valore:\n"
    cin>>x;
    cout<<endl;
    minimo=x;
    massimo=x;
    somma=somma+x;
    n=n-1;
    for(i=0;i<=n;i++){
        cout<<"Inserisci il valore:\n";
        cin>>x;
        cout<<endl;
        if(x<=minimo)
            minimo=x;
        goto 30;
        else if(x>=massimo)
            massimo=x;
        goto 33;
        else somma=somma+x;
    }
 n=n+1;
 media=somma/n;
 cout<<"Il valore minore che è stato inserito è:\n"<<minimo<<endl;
 cout<<"Il valore massimo ch eè stato inserito è:\n"<<massimo<<endl;
 cout<<"La media dei valori che sono stati inseriti è:\n"<<madia<<endl;
}
