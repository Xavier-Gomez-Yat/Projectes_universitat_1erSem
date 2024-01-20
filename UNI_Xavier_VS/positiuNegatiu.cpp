#include <iostream>

using namespace std;

int main(){

    float x;

    cout<<"introdueix el numero: ";
    cin>>x;


    if(x>0){

        cout<<"Positiu";
    } else if (x==0){

        cout<<"Zero";

    }
    
    
    else {

        cout<<"Negatiu";

    }

    return 0;
}