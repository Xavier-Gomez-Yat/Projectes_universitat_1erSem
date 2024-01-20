#include <iostream>
#define MAXF 5
#define MAXC 5

using namespace std;

void InicialitzarMatriu(int M[MAXF][MAXC],int f, int c){

    for (int i = 0; i<f; i++){
        for (int j = 0; j<c;j++){
            M[i][j] = 5*i + j;
        }
    }
}

void EscriureMatriu(int M[MAXF][MAXC],int f, int c){

    for (int i = 0; i<f; i++){
        for (int j = 0; j<c;j++){
            cout<<M[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int m1[MAXF][MAXC] = {{6,7,8,9},{6,5,4,3},{1,0,0,1}};
    int m2[MAXF][MAXC];

    InicialitzarMatriu(m2,5,3);
    EscriureMatriu(m1,3,4);
    EscriureMatriu(m2,5,3);

    return 0;
}