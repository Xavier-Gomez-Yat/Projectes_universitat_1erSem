#include <iostream>
#include "llibreriaVectors.h"

#define DIM 14
#define REPS 60

using namespace std;

int main(){

    int temperatures[DIM];
    int repeticions[REPS];
    int tempMax,tempMin;

    LlegirVector(temperatures,DIM);
    InicialitzarVector(repeticions,0,REPS);
    RepTemp(temperatures,repeticions,DIM);
    tempMax = MaximVectorNoZero(repeticions,REPS);
    tempMax-=10;
    tempMin = MinimVectorNoZero(repeticions,REPS);
    tempMax-=10;

    cout<<"Temperatura mes repetida: "<<tempMax<<" - Temperatura menys repetida: "<<tempMin;

    return 0;
}