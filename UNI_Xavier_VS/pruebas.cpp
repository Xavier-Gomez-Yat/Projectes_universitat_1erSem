#include <iostream>
#include <string>
using namespace std;

int main(){

        string nombre;
        float salario, tasas, eurosHora;
        int horas;

        cout<<("Nombre del trabajador:"); cin>>nombre;
        cout<<("\nHoras trabajadas:"); cin>>horas;
        cout<<("\nCuanto cobra por hora:"); cin>>eurosHora;

        salario = horas*eurosHora;
        tasas = 0.25f * salario;

        cout<<("\n"); cout<<(nombre);cout<<(" cobró " );
        cout<<(salario);cout<<("€ Netos y hacienda le robo ");cout<<(tasas); cout<<("€");

        return 0;
}