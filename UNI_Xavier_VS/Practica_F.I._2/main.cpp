#include <iostream>
#include <stdlib.h>
#include <time.h>

#define ESCUT 1
#define CARREGA 2
#define TRET 3

#define EMPAT 0
#define WINA 1
#define WINB 2

using namespace std;

void PresentacioJoc(){
    cout<<"Dam dam dish, es un joc infantil on es simula un duel de pistolers. L'objectiu del joc es matar al contrincant"<<endl;
    cout<<"El joc es per parelles hi ha tres moviments basics :"<<endl;
    cout<<"- Bracos en creu sobre el pit : escut"<<endl;
    cout<<"- Mans en forma de pistola apuntant al contrincant : tret"<<endl;
    cout<<"- Dits index i del mig tocant el lateral del front : carregar"<<endl;
    cout<<"El joc es al millor de N partides on N es un nombre senar"<<endl;
}

bool Senar(int num){
    bool senar;

    senar = (num%2);

    return senar;
    //0 = false es parell 1=true es senar
}

int LlegirSenar(){
    int num;
    
    cout<<"Introduir un nombre senar"<<endl;
    
    cin>>num;

    if (!Senar(num)){
        cout<<"ERROR: El nombre introduit es parell"<<endl;
    while(!Senar(num)){
        cin>>num;
    }
    }
    return num;
}

int Aleatori(int min, int max)
{
    srand((unsigned)time(NULL));
	int NumAleatori;

	NumAleatori = min + (rand() % (max - min + 1));

	return NumAleatori;
}

void MenuDamDamDish(){
    cout<<"Escull entre:"<<endl;
    cout<<"1. Escut: protegeix dels trets del rival"<<endl;
    cout<<"2. Carrega: afegeix una bala al carregador"<<endl;
    cout<<"3. Tret: dispara al teu rival"<<endl;
}

int LlegirNombre(int min, int max){

    int num;

    cout<<"Entra valor entre "<<min<<" i "<<max<<endl;
    cin>>num;

    while(num<min || num>max){
        cout<<"Error: valor fora de l'interval"<<endl;
        cin>>num;
    }

    return num;
}

void MissatgeAI(int num){

    if(num == ESCUT){
        cout<<"L'ordinador ha escollit aleatoriament ESCUT"<<endl;
    } 
    if(num == CARREGA){
        cout<<"L'ordinador ha escollit aleatoriament CARREGA"<<endl;    
    }   
    if(num == TRET){
        cout<<"L'ordinador ha escollit aleatoriament TRET"<<endl;
    }
}

int JocDamDAmDish(int PlayerA, int PlayerB){

    int resultat;

    if(PlayerA == PlayerB || PlayerA + PlayerB == 4 || PlayerA + PlayerB == 3){
        resultat = EMPAT;
    } else {
        if(PlayerA == TRET && PlayerB == CARREGA){
        resultat = WINA;
    } else {
        resultat = WINB;
    }
    }
    return resultat;
}

int main(){

    int Npartides, opcioA, opcioB, resultat, balesA = 1, balesB = 1, i, vicA = 0, vicB = 0;

    PresentacioJoc();

    Npartides = LlegirSenar();

    for (i = 0; i<=Npartides; i++){

        if (balesA == 0){
            opcioA = Aleatori(ESCUT,CARREGA);
        } else {
            opcioA = Aleatori(ESCUT,TRET);
        }

        if (opcioA == CARREGA){
            balesA++;
        }else if (opcioA == TRET){
            balesA--;
        }

        MenuDamDamDish();
        
        if(balesB == 0){
            cout<<"No tens bales. Escull entre 1 (Escut) o 2 (Carrega)"<<endl;
            opcioB = LlegirNombre(ESCUT,CARREGA);
        } else {
            opcioB = LlegirNombre(ESCUT, TRET);
        }

        if (opcioB == CARREGA){
            balesB++;
        }else if (opcioB == TRET){
            balesB--;
        }

        ///
        cout<<balesA<<"balesa";
        ///

        resultat = JocDamDAmDish(opcioA,opcioB);

        MissatgeAI(opcioA);

        switch (resultat)
        {
        case EMPAT:
            cout<<"Empat. Seguim la partida"<<endl;
            i--;
            break;

        case WINA: 

            cout<<"Et guanya un ordinador!!!"<<endl;
            balesA = 1;
            balesB = 1;
            vicA++;
            cout<<"MARCADOR - Ordinador "<<vicA<<" Tu "<<vicB<<endl;
            break;

        case WINB:
            cout<<"Guanyes Tu!!!"<<endl;
            balesA = 1;
            balesB = 1;
            vicB++;
            cout<<"MARCADOR - Ordinador "<<vicA<<" Tu "<<vicB<<endl;
            break;
        }

        if (vicA == ((Npartides/2) + 1)|| vicB == ((Npartides/2) + 1)){
            i = Npartides;
        }

    }

    if (vicA>vicB){
        cout<<"El guanyador final es l'ordinador"<<endl;
    } else {
        cout<<" Tu ets el guanyador final"<<endl;   
            
    }

    return 0;
}