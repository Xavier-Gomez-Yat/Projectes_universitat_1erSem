#include <iostream>
#include <stdlib.h>

#define LongCodi 4
#define MaxIntents 15


using namespace std;

int Aleatori(int NumMin, int NumMax)
{
	int NumAleatori;

	NumAleatori = NumMin + (rand() % (NumMax - NumMin + 1));

	return NumAleatori;
}


void Menu(){
    cout<<"MASTER MIND"<<endl<<endl;
    cout<<"Escull una opcio:"<<endl;
    cout<<"\nOpcio 1 Ajuda"<<endl;
    cout<<"Opcio 2 Jugar"<<endl;
    cout<<"Opcio 3 Sortir"<<endl;
}

void Ajuda(){
    cout<<"L'objeciu del joc es trobar el codi ocult"<<endl;
    cout<<"El codi es de longitud "<<LongCodi<<" nombres del 0 al 9"<<endl;
    cout<<"Despres de cada intent et dona la seguent informacio:"<<endl;
    cout<<"\tNombre de nombres encertats (en la posicio correcte)"<<endl;
    cout<<"\tNombre de nombres aproximats (correctes pero mal col.locats)"<<endl;
    cout<<"El nombre de intents son "<<MaxIntents<<endl;
}

void GenerarCodiOcult(int V[], int elements){
    for (int i = 0; i<elements; i++){
        V[i] = Aleatori(0,9);
    }
}

int LlegirNombre(int min, int max){

    int num;

    cout<<"Entra valor entre "<<min<<" i "<<max<<endl;;
    cin>>num;

    while(num<min || num>max){
        cout<<"Error: valor fora de l'interval"<<endl;
        cin>>num;
    }

    return num;

}

void IntToArray(int num, int V[], int elements){

    int divisor = 1;

    for (int i = elements-1; i>=0; i--){

        V[i] = (num/divisor)%10;
        divisor*=10;
    }
}

void InicialitzarArray(int V[], int elements, int num){

    for (int i = 0; i<elements;i++){
        V[i]=num;
    }

}

void FrequenciaDigit(int V[],int elements,int freq[]){
    int i;

    for(i=0;i<elements;i++){
        freq[V[i]]++;
    }
}

int NombreEncerts(int CMaster[],int CBreaker[],int elements){
    int i, encerts=0;
    for(i=0;i<elements;i++){
        if(CMaster[i]==CBreaker[i]){
            encerts++;
        }
    }
    return encerts;
}

int Minim(int Valor1,int Valor2){
    if(Valor1>Valor2){
        return Valor2;
    }
    else{
        return Valor1;
    }
}

int NombreAproximacions(int FreqCM[],int FreqCB[],int encerts){
    int i, t = 0, w;
    for(i=0;i<10;i++){
        t+=Minim(FreqCB[i],FreqCM[i]);
    }
    w=t-encerts;
    return w;
}

void ImprimirComparacions(int encerts,int aproxs){
    cout<<"Aquest codi te "<<encerts<<" enecerts i "<<aproxs<<" aproximacions"<<endl;
}

int JocMasterMind(){

    int CodiMaster[LongCodi];
    int CodiBreaker[LongCodi];

}