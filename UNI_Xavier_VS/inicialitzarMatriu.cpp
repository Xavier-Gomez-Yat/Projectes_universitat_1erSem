#include <iostream>
#include <stdio.h>

#define FILES 4
#define COLUMNES 4

using namespace std;

void LlegirMatriu(int M[FILES][COLUMNES]){
    for (int f = 0; f<FILES; f++){
        for (int c = 0; c<COLUMNES; c++){
            cin>>M[f][c];
        }
    }
}

void EscriureMatriu(int M[FILES][COLUMNES]){
    for (int f = 0; f<FILES; f++){
        for (int c = 0; c<COLUMNES; c++){
            if (c == f){
            cout<<M[f][c];
            }
        }
    }
}

int main(){

    int matriu [FILES][COLUMNES];

    LlegirMatriu(matriu);
    EscriureMatriu(matriu);

}