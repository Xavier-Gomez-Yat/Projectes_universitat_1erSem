#include <iostream>
#include <math.h>
#define MAX 20

using namespace std;

typedef struct TPunt
{
    double x;
    double y;
};

typedef struct TPoligon
{
    int nCostats;
    TPunt punt;
};

void LlegirVertexsPoligon(TPoligon poligon[]){

    cin>>poligon[0].nCostats;
    for (int i=0;i<poligon[0].nCostats;i++){
        cin>>poligon[i].punt.x; cin>>poligon[i].punt.y;

    }
}

double PerimetrePoligon(TPoligon poligon[]){

    double perimetre = 0;

    for (int i = 0; i<poligon[0].nCostats -1;i++){
        perimetre+=sqrt(pow(poligon[i].punt.x - poligon[i+1].punt.x,2)+pow(poligon[i].punt.y - poligon[i+1].punt.y,2));
    }
    perimetre+=sqrt(pow(poligon[0].punt.x - poligon[poligon[0].nCostats - 1].punt.x,2)+pow(poligon[0].punt.y - poligon[poligon[0].nCostats - 1].punt.y,2));

    return perimetre;
}

int main(){

    TPoligon poligon[20];
    double perimetre;

    LlegirVertexsPoligon(poligon);
    perimetre = PerimetrePoligon(poligon);

    cout<<"Perimetre del poligon: "<<perimetre;

    return 0;
}