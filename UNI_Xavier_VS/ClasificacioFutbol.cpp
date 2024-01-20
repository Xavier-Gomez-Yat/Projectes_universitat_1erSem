#include <iostream>

#define DIM 30
#define N_EQUIPS 5

using namespace std;

typedef
struct
{
    char nom[DIM];
    char ciutat[DIM];
    int punts;
    float pressupost;
}
Furbo;

void OmplirDadesEquip(Furbo &equip){
    cin>>equip.nom>>equip.ciutat>>equip.punts>>equip.pressupost;
}

void InicialitzarGuio(Furbo equips){
    equips.ciutat[0]='-';
    equips.ciutat[1]='-';
    equips.ciutat[2]='-';
    equips.ciutat[3]='-';
    equips.ciutat[4]='-';
    equips.ciutat[5]='\0';

    equips.nom[0]='-';
    equips.nom[1]='-';
    equips.nom[2]='-';
    equips.nom[3]='-';
    equips.nom[4]='-';
    equips.nom[5]='\0';
}

void InicialitzarClassificacio(Furbo Equips[],int elements){

    for (int i = 0; i<elements; i++){

        InicialitzarGuio(Equips[i]);
        Equips[i].pressupost=0;
        Equips[i].punts=0;
    
    }
}

void MostrarClassificacio(Furbo equips[], int elements){
    for (int i = 0; i<elements; i++){
        cout<<i+1<<".-"<<equips[i].nom<<" "<<equips[i].punts<<endl;
    }
}

void DesplacarClassificacio(Furbo equips[], int elements, int index){
    for (int i = elements -1; i >= index; i--){
        equips[i + 1] = equips[i]; 
    }
    InicialitzarGuio(equips[index - 1]);
    equips[index - 1].pressupost=0;
    equips[index - 1].punts=0;
}

int main(){

    Furbo equips[DIM];
    int i = 0, index;
    char SiNo = 'S';

    InicialitzarClassificacio(equips,DIM);

    while (SiNo == 'S' && i<5){
       
        cout<<"Introdueix l'index: "; cin>>index;
        DesplacarClassificacio(equips, N_EQUIPS, index);
        OmplirDadesEquip(equips[index]);


        MostrarClassificacio(equips,N_EQUIPS);

        cout<<"Vols continuar? (S/-)"; 
        cin>>SiNo;
        i++;

        

    }

    return 0;
}