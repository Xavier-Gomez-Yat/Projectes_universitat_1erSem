#include <iostream>

using namespace std;

int main(){

    int limitInferior, limitSuperior, suma = 0, producte = 1,n,nmit=0;
    float mitjana = 0;

    cin>>limitInferior>>limitSuperior;

    n = limitSuperior - limitInferior;

    for(int i = 0; i<=n;i++){

        if(limitInferior%2 == 0){
            suma += limitInferior;
            producte *= limitInferior;
            nmit++;
        }
        limitInferior++;
    }

    mitjana = suma/nmit;

    cout<<"Suma: "<<suma<<" - Producte: "<<producte<<" - Mitjana: "<<mitjana;

    return 0;
}