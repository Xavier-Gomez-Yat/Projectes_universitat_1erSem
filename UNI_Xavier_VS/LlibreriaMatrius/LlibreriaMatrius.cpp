#include <iostream>
#include "LlibreriaMatrius.h"

using namespace std;

void LlegirMatriu(float M[][N_COL],int files, int columnes){
    for (int i = 0; i<files; i++){
        for (int j = 0; j<columnes; j++){
            cin>>M[i][j];
        }
    }
}

void EscriureMatriu(float M[][N_COL],int files, int columnes){
    for (int i = 0; i<files; i++){
        for (int j = 0; j<columnes; j++){
            cin>>M[i][j];
        }
    }
}