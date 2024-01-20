#include <iostream>

using namespace std;

int main(){

    float x,y,z;

    cin>>x>>y>>z;

    if ((x+z==y)|| (x+y==z)|| (z+y==x)){
            cout<<"IGUALS";
    } else {
            cout<<"DIFERENTS";
    }

    return 0;
}