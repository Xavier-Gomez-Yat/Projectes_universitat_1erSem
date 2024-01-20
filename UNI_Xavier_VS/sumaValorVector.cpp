#include <iostream>

#define FILES 2
#define COLUMNES 3

using namespace std;

void LlegirMatriu(int M[FILES][COLUMNES], int f, int c){

    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            cin>>M[i][j];
        }
    }
}

int SumaValorMatriu(int M[FILES][COLUMNES], int f, int c){
    int suma = 0;

    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            suma += M[i][j];
        }
    }

    return suma;
}

int main(){

    int M[FILES][COLUMNES];
    int suma;

    LlegirMatriu(M,FILES,COLUMNES);
    suma = SumaValorMatriu(M,FILES,COLUMNES);

    cout<<"Suma valors matriu: "<<suma;

    return 0;   
}