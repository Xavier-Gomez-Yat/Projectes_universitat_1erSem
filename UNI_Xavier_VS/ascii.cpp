#include <iostream>

using namespace std;

int main(){

    char n1,n2,n3;
    int num1;

    cout<<"Introdueix 1 numero entre 0 i 200: "<<endl;

    cin>>num1; cout<<endl;

    if (num1<=200 && num1>=0){
    
    n1 = num1;
    n2 = num1 + 1;
    n3 = num1 + 10;


    cout<<n1<<" "<<n2<<" "<<n3<<endl;
    }

    return 0;
}