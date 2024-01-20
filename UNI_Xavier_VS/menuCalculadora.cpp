#include <iostream>

using namespace std;

void Menu(){
    cout<<"MENU"<<"\n1.- Suma"<<"\n2.- Resta"<<"\n3.- Producte"<<"\n4.- Divisio"<<"\n5.- Sortir"
    <<"\nSelecciona una de les opcions:";
}

int main(){

    int opcio;
    float operandA, operandB, resultat;
    char operacio, sortir = 'S';
    

 do{   
    cin>>operandA>>operandB;
do{
    
    Menu();
    cin>>opcio;
    

    switch (opcio){

            case 1:
            operacio = '+';
            resultat = operandA + operandB;
            cout<<operandA<<" "<<operacio<<" "<<operandB<<" = "<<resultat<<endl;
            break;

            case 2:
            
            operacio = '-';
            resultat = operandA - operandB;
            cout<<operandA<<" "<<operacio<<" "<<operandB<<" = "<<resultat<<endl;
            break;

            case 3:
            
            operacio = 'x';
            resultat = operandA * operandB;
            cout<<operandA<<" "<<operacio<<" "<<operandB<<" = "<<resultat<<endl;
            break;

            case 4:
            
            if (operandB == 0){
                cout<<"Error: Divisio per zero"<<endl;
                break;
            } else {
            resultat = operandA / operandB;
            operacio = ':';
            cout<<operandA<<" "<<operacio<<" "<<operandB<<" = "<<resultat<<endl;
            }
            break;

            case 5:
                cout<<"Vols operar amb uns altres operands? (S/-)"<<endl;
                cin>>sortir;
                operacio = 5;
            break;

            default:
            cout<<"Error: Opcio no valida"<<endl;
            break;
    }

}while(operacio != 5 );
}while (sortir == 'S');

            cout<<"\nSortint de la calculadora...";


    return 0;
}