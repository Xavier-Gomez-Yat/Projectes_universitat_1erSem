#include <iostream>

using namespace std;

float Potencia(float X, float N){

    float res = 1;

    if(N>0){
        for(int i = 0; i<N;i++){
        res *= X;
        }
    } else if (N==0){
        res = 1;
    } else{
        for(int i = 0; i>N;i--){
        res = res * (1/X);
        }
    }

    return res;
}


int main(){

    float x,n;
    float resultat;

    cin>>x>>n;

    resultat = Potencia(x,n);


    cout<<"El resultat d'elevar "<<x<<" a la potencia "<<n<<" es "<<resultat;

    return 0;
}