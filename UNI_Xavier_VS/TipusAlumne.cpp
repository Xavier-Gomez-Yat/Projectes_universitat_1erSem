#include <iostream>

using namespace std;

int main(){

    struct TipusAlumne
    {
        char Nom[10];
        char Cognom1[15];
        char Cognom2[15];
        float Nota;
    };

    TipusAlumne Alumne1;
    
    cin>>Alumne1.Nom;
    cin>>Alumne1.Cognom1;
    cin>>Alumne1.Cognom2;
    cin>>Alumne1.Nota;

    cout<<Alumne1.Cognom1<<" "<<Alumne1.Cognom2<<", "<<Alumne1.Nom<<" "<<Alumne1.Nota;

    return 0;
}
