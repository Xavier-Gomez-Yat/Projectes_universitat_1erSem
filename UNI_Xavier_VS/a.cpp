#include <iostream>

using namespace std;

int Acumular(int a, int b, int c){

    while((a>b)&&(c>0)){
        b++;
        c--;
    }
    return c;
}

void Calcular(int &x, int y, int &z){
    if (x>y){
        z = Acumular(x,y,z);
    } else{
        z = Acumular(y,x,z);
    }
}

int main(){

    int x,y,z;

    cin>>x>>y>>z;

    Calcular(x,y,z);

    cout<<x<<endl<<y<<endl<<z;

    return 0;
}