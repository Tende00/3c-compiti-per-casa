#include <iostream>

using namespace std;

void SelectionSort(int [],int);

int main()
{
    int N=0;
    int Vet1[N];
    int valore=0;
    int Vet2[N];
    int differenza=0;
    controllo:
    cout<<"Inserisci la dimensione del vettore con N<=100: "<<endl;
    cin>>N;
    if(N>100){
        cout<<"Attenzione! La dimensione del vettore non deve essere >100!\n"<<endl;
        goto controllo;
    }
    for(int i=0;i<N;i++){
        cout<<"Inserisci il "<<i+1<<" valore: "<<endl;
        cin>>valore;
        Vet1[i]=valore;

        Vet2[i]=Vet1[i]*Vet1[i];


        }
     SelectionSort(Vet2,N);
     SelectionSort(Vet1,N);

     for(int i=0;i<N;i++){
        differenza=Vet1[i]-Vet2[i];
        cout<<" La differenza tra il valore della cella di indice "<<i<<" tra il primo\n vettore e il secondo (contenente il suo valore al quadrato)\n e': "<<differenza<<endl;
     }


}

void SelectionSort(int Vet[], int N){

     int k,j,comodo;
     for(k=0;k<N-1;k++)
        for(j=k+1;j<N;j++)
          if(Vet[k]>Vet[j]){

            comodo=Vet[k];
            Vet[k]=Vet[j];
            Vet[j]=comodo;
     }

     }


