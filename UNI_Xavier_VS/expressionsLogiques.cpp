#include <iostream>

using namespace std;

int main(){

    int x,y,z;
    bool a,b,c;

    char car = 'c';

    cout<<"Introdueix tres nombres enters: "<<endl; cin>>x>>y>>z;

    a = ((x < 7) && ((y > z) || (7 > z)));
    b = (((x == car) && (y < -5)) && ((z >= 100) || (z < 6)));
    c = (((9 >= x) && (13 < y)) || (-36 >= z));

    cout<<"Resultat de les expressions: "<<a<<" "<<b<<" "<<c;

    return 0;
}