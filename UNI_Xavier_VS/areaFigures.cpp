#include <iostream>

using namespace std;

int main(){

    char opcio = '0';
    float base,alsada,resultat;

    while(opcio != '4'){
        void MenuSeleccio();
        cin>>opcio;

        /*cout << "----- MENU -----" << endl << endl;
         cout << "1.-Area quadrat" << endl;
         cout << "2.-Area rectangle" << endl;
         cout << "3.-Area triangle" << endl;
         cout << "4.-Sortir" << endl << endl;
         cout << "Tria una de les opcions: " << endl;
        */

        switch (opcio)
        {
        case '1':
            cin>>base;
            AreaQuadrat(base,resultat);
        break;
        case '2':
            cin>>base>>alsada;
            AreaRectangle(base,alsada,resultat);
        break;
        case '3':
            cin>>base>>alsada;
            AreaTriangle(base,alsada,resultat);
        break;
        case '4':
            return 0;
        break;

        default:
        cout<<"Error: Opcio Incorrecta";
        break;
        }

        if(resultat <= 0 || (base <= 0 && alsada <= 0)){
        cout<<"Error: Dimensions incorrectes";
        } else {
        cout<<"Area: "<<resultat;
        }

    }

    if(resultat <= 0 || (base <= 0 && alsada <= 0)){
        cout<<"Error: Dimensions incorrectes";
    } else {
        cout<<"Area: "<<resultat;
    }


    return 0;
}