#include <iostream>

using namespace std;

int main(){

        int dia,mes,any,diesContador;
        char c;
        bool x,y,z;
        

        cout<<"Introdueix una data en format D/M/A : ";
        cin>>dia>>c>>mes>>c>>any;
        x=(any%4);
        y=(any%100);
        z=(any%400);

        switch (mes){

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            diesContador = 31;
            break;

            case 4:
            case 6:
            case 9:
            case 11:
            diesContador = 30;
            break;

            case 2:
            if (x==0 && y==1){
            diesContador = 29;
        }else if (z==0){
            diesContador = 29;
        } else {
            diesContador = 28;
        }
            break;

            default:
            cout<<"Error: Mes incorrecte"<<endl;
            return 0;;
        }        

        if (dia >diesContador || dia <= 0){
            cout<<"Error: Dia incorrecte";
        } else {
            cout<<"Data correcta";
        }





    return 0;
}