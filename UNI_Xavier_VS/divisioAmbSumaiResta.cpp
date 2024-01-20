#include <iostream>

using namespace std;

int Suma(float x,float y){
    int res;

    res = x+y;
    return res;
}

int Resta(float x, float y){
    int res;

    res = x-y;
    return res;
}

int abs(int X, bool &neg){

    if(X<0){
        X*=-1;
        neg = 1;
    }

    return X;
}


int main(){

    int dividend, divisor;
    bool diviNeg = 0,disorNeg = 0;
    int i = 0;

    cin>>dividend>>divisor;

    dividend = abs(dividend,diviNeg);
    divisor = abs(divisor,disorNeg);


    if (divisor == 0){
        cout<<"Error: Divisio per zero"; 
        return 0;
    }
    else if (dividend == divisor || dividend + divisor == 0){
        cout<<"Resultat - Quocient: 1 i Residu: 0";
        return 0;
    
        
    }
    
    while(dividend>=divisor){
            dividend = Resta(dividend,divisor);
            i++;
    }

    if(diviNeg == 1 && disorNeg == 1 && dividend != 0){
        dividend*=-1;
    } else if ((disorNeg == 1 && diviNeg != 1) || (diviNeg == 1 && disorNeg != 1)){
        i*= -1;
        if (diviNeg == 1){
            dividend *= -1;
        }
    }

    cout<<"Resultat - Quocient: "<<i<<" i Residu: "<<dividend;

    return 0;
}