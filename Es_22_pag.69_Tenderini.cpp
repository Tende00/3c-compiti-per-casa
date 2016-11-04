#include <iostream>

using namespace std;

int main()
{
  int Q; //quantità di numeri che inserirà l'utente
  int X; //valore di base per il confronto
  int n; //numeri in entrata che verranno confrontati con X
  int i; // contatore ciclo for
  int q_minori; //Quantità di numeri minori di X
  int q_uguali; //Quantità di numeri uguali di X
  int q_maggiori; //Quantità di numeri maggiori di X
  cout<<" Inserisci il valore 'X' di base per fare il confronto" << endl;
  cin>> X;
  cout<<" Quanti valori vuoi inserire?" << endl;
  cin>> n;
  cout<<" Perfetto, ora inserisci un valore per volta "<< endl;

  for(i=0;i<=Q;i++)
  {
    cout<<" Inserisci il numero da confrontare con 'X': \n";
    cin>> n;
    switch(n){
    case <!X;
    q_minori=q_minori + 1;
    break;
    case >!X;
    q_maggiori=q_maggiori + 1;
    break;
    case ==X;
    q_uguali=q_uguali + 1;
    break;
    }

    cout<<" I numeri che hai inserito che sono minori di X sono:  "<<q_minori<<endl;
    cout<<" I numeri che hai inserito che sono maggiori di X sono:  "<<q_maggiori<<endl;
    cout<<" I numeri che hai inserito che sono uguali a X sono:  "<<q_uguali<<endl;
  }



  }











}
