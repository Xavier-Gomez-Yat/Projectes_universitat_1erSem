#include <iostream>
#include <stdio.h>

#define FILES 2
#define COLUMNES 3

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
            cout<<M[f][c];
        }
        cout<<endl;
    }
}

void SumarMatrius(int M1[FILES][COLUMNES], int M2[FILES][COLUMNES], int MResultat[FILES][COLUMNES]){
    for (int f = 0; f<FILES; f++){
        for (int c = 0; c<COLUMNES; c++){
            MResultat[f][c] = M1[f][c] + M2[f][c];
        }
    }
}

int main(){

    int m1 [FILES][COLUMNES], m2[FILES][COLUMNES], mres[FILES][COLUMNES];

    LlegirMatriu(m1);
    LlegirMatriu(m2);

    SumarMatrius(m1,m2,mres);

    EscriureMatriu(mres);

}