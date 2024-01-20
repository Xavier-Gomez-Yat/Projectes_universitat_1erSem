#include <iostream>

using namespace std;

int main (){

int unitats;
float preu,preuF,preuIVA;

    cin>>unitats>>preu;

    preuIVA = (unitats * preu) + (unitats*preu*0.07);

    if(preuIVA>500 && preuIVA<=1000){
        preuF = preuIVA - (preuIVA * 0.05);
    } else if (preuIVA<=500){
        cout<<"L'import final de la compra son "<<preuIVA<<" euros.";
    return 0;
    }
    else {
        preuF = preuIVA - (preuIVA * 0.1);
    }

        cout<<"L'import final de la compra son "<<preuF<<" euros.";
    return 0;
}