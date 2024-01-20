#include <iostream>

using namespace std;

typedef
struct{

    char nom[10];
    char cognom1[15];
    char cognom2[15];
    float nota;

} TipusAlumne;

void OmplirDades(TipusAlumne &alumne){
    cin>>alumne.nom>>alumne.cognom1>>alumne.cognom2>>alumne.nota;
}

void MostrarDades(TipusAlumne alumne){
    cout<<alumne.cognom1<<" "<<alumne.cognom2<<", "<<alumne.nom<<" "<<alumne.nota;
    cout<<endl;
}

int main(){

    TipusAlumne Alumnes[5];

    for (int i = 0; i<5;i++){
        OmplirDades(Alumnes[i]);
    }

    for (int i = 0; i<5;i++){
        MostrarDades(Alumnes[i]);
    }

    return 0;
}