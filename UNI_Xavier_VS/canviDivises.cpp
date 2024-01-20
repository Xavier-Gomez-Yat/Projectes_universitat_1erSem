#include <iostream>

using namespace std;

//1-Dolars(USD), 2-Lliures(GBP), 3-Francs suïssos(CHF), 4-Yens(JPY) 
//“XX euros son YY ZZZ”
//1€ = 1.34 USD = 0.83 GBP =1.23 CHF = 133.11 JPY

int main(){

    int opcio;
    float euros, conversio;
    string divisa;

    cout<<"Introdueix els euros i la divisa a la que els vols convertir (1USD 2GBP 3CHF 4JPY):"<<endl;

    cin>>euros>>opcio;

    switch (opcio){

            case 1:
                conversio = euros * 1.34;
                divisa = "USD";
            break;
            case 2:
                conversio = euros * 0.83;
                divisa = "GBP";
            break;
            case 3:
                conversio = euros * 1.23;
                divisa = "CHF";
            break;
            case 4:
                conversio = euros * 133.11;
                divisa = "JPY";
            break;
            default:
            cout<<"Error: moneda no disponible";
            return 0; 
    }

    cout<<euros<<" euros son "<<conversio<<" "<<divisa;

    return 0;
}