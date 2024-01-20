#include <iostream>

using namespace std;

void InicialitzarVector(int V[],int val,int elements){

    for (int i=0; i<elements; i++){
        V[i] = val;
        cout<<val;
    }

}

void LlegirVector(int V[], int elements){
    for (int i=0; i<elements; i++){
        cin>>V[i];
    }
}

void EscriureVector(int V[], int elements){
    for (int i=0; i<elements; i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}

float MitjanaVector(int V[],int elements){
    float mitjana;
    for (int i=0; i<elements; i++){
        if(i==0){
            mitjana = V[0];
        }else{
            mitjana+=V[i];
        }
    }
    return mitjana/elements;
}

int MaximVector(int V[],int elements){
    int max;

    for (int i = 0; i<elements; i++){
        if ( i==0 ){
            max = V[i];
        } 
        if (max < V[i]){
            max = V[i];
        }
    }
    return max;
}

int MinimVector(int V[],int elements){
    int min;

    for (int i = 0; i<elements; i++){
        if ( i==0 ){
            min = V[i];
        } 
        if (min > V[i]){
            min = V[i];
        }
    }
    return min;
}

int MinimVectorNoZero(int V[],int elements){
    int min;

    for (int i = 0; i<elements; i++){
        
        if(V[i] != 0){
              if ( i==0 ){
              min = V[i];
            } 
            if (min > V[i]){
                min = V[i];
            }
        }
    }
    return min;
}