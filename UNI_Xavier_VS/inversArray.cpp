#include <iostream>

using namespace std;

#define DIM 5

void LlegirVector(int V[], int elements){
    for (int i = 0; i<elements; i++){
        cin>>V[i];
    }
}

bool InversArray(int V1[],int V2[],int elements){

    int indexSuperior = elements-1, indexInferior = 0;
    bool iguals = 1;

    while (iguals && indexInferior < elements){
        if(V1[indexInferior] != V2[indexSuperior]){
            iguals = 0;
        }
        indexInferior++;
        indexSuperior--;
    }
    return iguals;
}

int main(){

    int V1[DIM], V2[DIM];
    bool iguals;

    LlegirVector(V1,DIM);
    LlegirVector(V2,DIM);

    iguals = InversArray(V1,V2,DIM);
    if (iguals){
        cout<<"iguals";
    } else {
        cout<<"diferents";
    }

    return 0;
}