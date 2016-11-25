#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float a=0; //primo lato del rettangolo
    float b=0; //secondo lato del rettangolo
    float area=0; //area del rettangolo
    float perimetro=0; //perimetro del rettangolo
    float diagonale=0; //diagonale del rettangolo
    int numero_operazione_desiderata=0;
    float x=0;

    cout<<"PROGRAMMA PER CALCOLARE AREA; PERIMETRO O DIAGONALE DI UN RETTANGOLO DATI 2 LATI\n\n\n\n"<<endl;
    cout<<"Inserisci la lunghezza del primo lato del rettangolo"<<endl;
    cin>> a;
    cout<<"Inserisci la lunghezza del secondo lato del rettangolo"<<endl;
    cin>> b;
    cout<<"Premi il tasto '1' se vuoi calcolare il perimetro del rettangolo"<<endl;
    cout<<"Premi il tasto '2' se vuoi calcolare l'area del rettangolo"<<endl;
    cout<<"Premi il tasto '3' se vuoi calcolare la diagonale del rettangolo"<<endl;
    cin>> numero_operazione_desiderata;



    switch(numero_operazione_desiderata){

        case 1:
            perimetro=(a+b)*2;
            cout<<"Il perimetro e':"<<perimetro<<endl;
        break;

        case 2:
            area=a*b;
            cout<<"L'area e':"<<area<<endl;
        break;

        case 3:
            x=(a*a)+(b*b);
            diagonale = sqrt(x);
            cout<<"La diagonale e':"<<diagonale<<endl;
        break;


    }



}
