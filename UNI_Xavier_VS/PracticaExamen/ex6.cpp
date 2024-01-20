#include <iostream>

using namespace std;

#define DIM 5
#define SETMANES 8

void MenuPrincipal()
{
 cout << "------ Menu ------" << endl;
 cout << "1 - Disponibilitat" << endl;
 cout << "2 - Reserva" << endl;
 cout << "3 - Cancel.lar" << endl;
 cout << "4 - Facturacio" << endl;
 cout << "5 - Sortir" << endl;
}

void InicialitzarVector(int v[], int dim, int num){
    for (int i = 0; i<dim; i++){
        v[i] = num;
    }
}


int main(){

    int setmanes[SETMANES];
    int socis[DIM];
    int opcio, valor;

    InicialitzarVector(socis,DIM,0);

    MenuPrincipal();

    cin>>opcio;

    switch (opcio){

        case 1:{
            //ImprimirSetmanes();
            break;
        }

        case 2:{
            valor = IntroduirValor(1,SETMANES);
            if (setmanes[valor -  1] = 0){
                
            } else {
                cout<<"Setmana no disponible.";
            }
        }


    }

    return 0;
}