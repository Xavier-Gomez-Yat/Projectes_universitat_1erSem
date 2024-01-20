#include <iostream>


using namespace std;

void Potencia(int n1, int n2){

    int resultat = 1, aux = n1;

    resultat = n1;

    do{

        if (resultat <= n2){
            cout<<resultat<<" ";
        }

        resultat = resultat * aux;

    } while (resultat <= n2);
}

int main(){

    int inici, final;

    cin>>inici>>final;


    if (inici<final && inici>1){
    Potencia(inici,final);
    } else{
        cout<<"Error: Valors incorrectes";
    }
    return 0;
}