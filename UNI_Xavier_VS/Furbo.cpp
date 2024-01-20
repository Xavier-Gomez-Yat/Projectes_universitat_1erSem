#include <iostream>
#include "tipusFurbo.h"

using namespace std;

void OmplirDadesEquip(Furbo &equip){
    cin>>equip.nom>>equip.ciutat>>equip.punts>>equip.pressupost;
}

void MostrarDadesEquip(Furbo equip){
    cout<<equip.nom<<" "<<equip.ciutat<<" "<<equip.punts<<" "<<equip.pressupost;
    cout<<endl;
}

int CompararEquips(Furbo equip1, Furbo equip2){
    int comparador = 0;

    if(equip1.punts<equip2.punts){
        comparador = -1;
    } else if (equip1.punts>equip2.punts){
        comparador = 1;
    }

    return comparador;
}

int main(){

    Furbo equip1, equip2;
    int comparador;

    OmplirDadesEquip(equip1);
    OmplirDadesEquip(equip2);

    comparador = CompararEquips(equip1,equip2);

    MostrarDadesEquip(equip1);
    MostrarDadesEquip(equip2);

    if (comparador == 1){
        cout<<equip1.nom<<" te mes punts a la lliga que "<<equip2.nom;
    } else if (comparador == -1){
        cout<<equip1.nom<<" te menys punts a la lliga que "<<equip2.nom;
    } else {
        cout<<equip1.nom<<" te els mateixos punts a la lliga que "<<equip2.nom;
    }


    return 0;
}