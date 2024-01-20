#include <iostream>

using namespace std;

int main(){

        bool comparador;
        int x;
        int y;

        cin>>(x); cin>>(y);

        comparador=(x<=10 && x>=0 && y<=10 && y>=0);

        cout<<("El resultat es: "); cout<<(comparador);



    return 0;
}