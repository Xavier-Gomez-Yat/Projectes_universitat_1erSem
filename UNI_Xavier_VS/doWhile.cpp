#include <iostream>

using namespace std;

int main(){

    int i = 1,suma = 0,n;

    cin>>n;

do{

cout<<"Error: el valor ha de ser mes gran que zero"<<endl;
cin>>n;

} while (n<=0);


do
{
    suma += i;
    i++;
} while (i<=n);
    
    cout<<"El sumatori de "<<n<<" es: "<<suma;


    return 0;
}