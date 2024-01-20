#include <iostream>

#define COL 3

using namespace std;

void LlegirMatriu(float M[][COL], int f, int c){
    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            cin>>M[i][j];
        }
    }
}

void EscriureMatrius(float M[][COL], int f, int c){
    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

void ProducteMatrius(float M1[][COL], float M2[][COL], float Mres[][COL], int f, int c){
    for (int i = 0; i<f; i++){

        for (int j = 0; j<c; j++){
            float sumand = 0;
                for (int jsum = 0; jsum<c; jsum++){
                sumand += M1[i][jsum] * M2[jsum][j];
                }

            Mres[i][j] = sumand;   
        }
    }
}

int main(){

    float M1[2][COL], M2[COL][COL], Mres[2][COL];

    LlegirMatriu(M1,2,COL);
    LlegirMatriu(M2,COL,COL);

    ProducteMatrius(M1,M2,Mres,2,COL);

    EscriureMatrius(Mres,2,COL);

    return 0;
}