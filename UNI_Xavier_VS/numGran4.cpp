#include <iostream>

using namespace std;

int main (){

    int n1,n2,n3,n4,ncomps,nF;
    cin>>n1>>n2>>n3>>n4;

    if (n1>n2 && n1>n3 && n1>n4){
        ncomps = 2+1;
        nF=n1;
            
    } if (n2>n1 && n2>n3 && n2>n4){
        ncomps = 2+1;
        nF=n2;
            
    } if (n3>n1 && n3>n2 && n3>n4){
        ncomps = 2+1;
        nF=n3;
            
    } if (n4>n1 && n4>n2 && n4>n3){
        ncomps = 2+1;
        nF=n4;
            
    } 

    cout<<"El numero mes gran de la serie es "<<nF<<". Comparacions: "<<ncomps;

    return 0;
}