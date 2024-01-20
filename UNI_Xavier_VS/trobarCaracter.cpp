#include <iostream>
#include <string.h>

#define MAX 20

using namespace std;

bool TrobarCaracter(char c[], char caracter){

    bool dins = 0;
    char comparador = 'a';
    int i = 0;

    while(!dins && comparador != '\0'){
         comparador = c[i];
         dins = (comparador == caracter); 
         i++;
    }

    return dins;
}

int main(){

    char cadena[MAX];
    bool dins;
    char caracter;

    scanf("%s",cadena);
    cout<<"introdueix caracter"<<endl;
    cin>>caracter;
    cout<<cadena<<endl;
    dins = TrobarCaracter(cadena,'a');

    if (dins){
        cout<<"DINS!!";
    } else {
        cout<<"nope";
    }

    return 0;
}