#include <iostream>

#define FILES 3
#define COLUMNES 3

using namespace std;

void LlegirMatriu(int M[FILES][COLUMNES], int f, int c){

    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            cin>>M[i][j];
        }
    }
}

bool SimetriaMatriu(int M[FILES][COLUMNES], int f, int c){
    bool simetria = 1;
    
    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            if (M[i][j] != M[j][i]){
                simetria = 0;
            }
        }
    }
    
    return simetria;
}

int main(){

    int M[FILES][COLUMNES];
    bool simetria;

    LlegirMatriu(M,FILES,COLUMNES);

    simetria = SimetriaMatriu(M,FILES,COLUMNES);

    if (simetria){
        cout<<"MATRIU SIMETRICA";
    } else {
        cout<<"MATRIU NO SIMETRICA";
    }

    return 0;   
}