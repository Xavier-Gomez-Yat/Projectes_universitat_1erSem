#include <iostream>

using namespace std;

int main(){

double n = 4, resultat = 0;
int divisor = 0;


while (n != 0){
    cin>>n;
    if (n!=0){
    resultat += n;
    divisor++;
    }
}

    if (resultat == 0){
        cout<<"Error: La sequencia es buida. No es pot calcular la mitjana.";
    } else {
        resultat = resultat/divisor;
        cout<<"Mitjana dels nombres de la sequencia: "<<resultat;
    }

    return 0;
}