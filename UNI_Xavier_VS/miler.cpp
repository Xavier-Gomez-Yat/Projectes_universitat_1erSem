#include <iostream>

using namespace std;

int main(){

    int x,z;


    cout<<"introdueix el nombre: ";
    cin>>x;

    z= (x/1000)%10;
    
    cout<<"Les unitats de miler del nombre "<<x<<" son "<<z;


    return 0;
}