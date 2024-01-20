#include <iostream>

using namespace std;

int main (){

    float mitjana = 0, nota,count = 0;
    cin>>nota;

    do{
        

        count++;
        mitjana += nota;
        cin>>nota;        

    }while (nota != 0);

    if (nota == 0 && mitjana == 0){
        cout<<"Error: La sequencia es buida. No es pot calcular la mitjana.";
        return 0;
    }

    mitjana = mitjana/count;

    cout<<"Mitjana dels nombres de la sequencia: "<<mitjana;


    return 0;
}