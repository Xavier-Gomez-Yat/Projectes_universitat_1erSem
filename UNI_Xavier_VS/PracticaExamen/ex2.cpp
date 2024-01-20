/*
Exercici 2 (0,5 punts)
Fer un procediment anomenat InicialitzarVector que rep tres paràmetres:
1. un array d'enters
2. la dimensió de l'array passat com a primer paràmetre
3. un valor enter
El procediment inicialitzarà tot l’array al valor passat com a tercer paràmetre*/

#include <iostream>

using namespace std;

void InicialitzarVector(int v[], int dim, int num){
    for (int i = 0; i<dim; i++){
        v[i] = num;
    }
}