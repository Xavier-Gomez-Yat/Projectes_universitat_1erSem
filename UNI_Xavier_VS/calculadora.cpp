#include <iostream>

using namespace std;

int main(){

    int opcio;
    float operandA, operandB, resultat;
    char operacio;

    cout<<"MENU"<<"\n1.- Suma"<<"\n2.- Resta"<<"\n3.- Producte"<<"\n4.- Divisio"<<"\n5.- Sortir"
    <<"\nSelecciona una de les opcions:";

    cin>>opcio;
    cin>>operandA>>operandB;

    switch (opcio){

            case 1:
            operacio = '+';
            resultat = operandA + operandB;
            break;

            case 2:
            operacio = '-';
            resultat = operandA - operandB;
            break;

            case 3:
            operacio = 'x';
            resultat = operandA * operandB;
            break;

            case 4:
            if (operandB == 0){
                cout<<"Error: Divisio per zero";
                return 0;
            } else {
            resultat = operandA / operandB;
            operacio = '/';
            }
            break;

            case 5:
            cout<<"Sortint de la calculadora...";
            return 0;

            default:
            cout<<"Error: Opcio no valida";
            return 0;
    }


        cout<<operandA<<" "<<operacio<<" "<<operandB<<" = "<<resultat;


    return 0;
}