#include <iostream>

using namespace std;

int main(){

        int x;

        cin>>(x);

        if (x>=0 && x<=10){

            cout<<("El nombre "); cout<<(x); cout<<(" esta en l'interval");
        } if (x<0 || x>10) {

            cout<<("El nombre "); cout<<(x); cout<<(" NO esta en l'interval");

        }


    return 0;
}