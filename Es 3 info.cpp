#include <iostream>

using namespace std;

int main()
{
    int numero;
    int N;
    int v[N];

    cout<<"Inserisci il numero di valori che vuoi inserire (N<=10)"<<endl;
    cin>> N;

    for (int i=1;i<=N;i++) {
    cout<<"Inserisci il "<<i<<" numero"<<endl;
    cin>>numero;
    v[i]=numero;
}
    for (int i=N;i>0;i--)
        cout<< v[i];

}
