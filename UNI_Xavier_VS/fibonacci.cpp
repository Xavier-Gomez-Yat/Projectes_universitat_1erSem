#include <iostream>

using namespace std;

int Fibonacci(int n){

    int a = 0, b = 1, c = 1;
    for (int i = 1; i<n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main (){

    int n,res;
    cin>>n;
    while (n<0){
        cout<<"Error: El nombre no pot ser negatiu"<<endl;
        cin>>n;
    }

    if (n==0){
        cout<<"El terme "<<n<<" de la serie de Fibonacci es 0";
        return 0;
    }

    res = Fibonacci(n);
    cout<<"El terme "<<n<<" de la serie de Fibonacci es "<<res;

    return 0;
}