#include <iostream>

using namespace std;

int main()
{
    int numero;
    int N;
    int v[N];
    int somma;
    int prodotto=1;
    cout<<"Inserisci il numero degli elementi (N<=10):"<<endl;
    cin>> N;

    for(i=1;i<=N;i++){
        cout<<"Inserisci il "<<i<<" numero:"<<endl;
        cin>>numero;
        v[i]=numero;
        if(i/2==0)prodotto=prodotto * v[i];
        else somma=somma+v[i];
    }
   cout<<" Il prodotto delle componenti di posto pari e':"<<prodotto<<endl;
   cout<<"La somma dei numeri con posizione dispari e':"<<somma<<endl;
}
