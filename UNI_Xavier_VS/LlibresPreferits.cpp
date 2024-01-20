#include <iostream>
#define DIM 15

using namespace std;

typedef 
struct 
{
    char titol[DIM];
    char editorial[DIM];
    float pagines;
    float preu;

}LlibresPreferits;

void LlegirRegistre(LlibresPreferits &llibre){
    cin>>llibre.titol;
    cin>>llibre.editorial;
    cin>>llibre.pagines;
    cin>>llibre.preu;
}

void EscriureRegistre(LlibresPreferits &llibre){
    cout<<llibre.titol<<" ";
    cout<<llibre.editorial<<" ";
    cout<<llibre.pagines<<" ";
    cout<<llibre.preu<<" "<<endl;
}

int main(){

    LlibresPreferits llibre1, llibre2;

    LlegirRegistre(llibre1);
    LlegirRegistre(llibre2);

    cout<<"Llibres preferits: "<<endl;
    EscriureRegistre(llibre1);
    EscriureRegistre(llibre2);

    return 0;
}