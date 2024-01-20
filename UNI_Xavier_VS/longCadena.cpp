#include <iostream>

using namespace std;

int LongCadena(char cadena[]){

    int longitud = -1;
    char comparador = 'a';

    while (comparador != '\0'){
        longitud++;
        comparador = cadena[longitud];
    }

    return longitud;
}

int main(){

    int longitud;
    char cadena[15] = {'P','R','U','E','B','A'};

    longitud = LongCadena(cadena);

    cout<<longitud;

    return 0;
}