#include <iostream>

using namespace std;

int main(){

    int n;
    bool parell = 0;

    while(n!=0){
        cin>>n;
        if(n%2 == 0 && n!= 0){
            parell = 1;
        }
    }

    if (parell == 1){

        cout<<"Algun nombre de la sequencia es parell.";
    } else {
        cout<<"No hi ha cap nombre parell en la sequencia.";
    }

    return 0;
}