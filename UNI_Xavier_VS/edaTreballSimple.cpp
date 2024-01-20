#include <iostream>

using namespace std;

int main(){

    int edat,naixament;
    const int any = 2023;

    cin>>naixament;
    edat = any - naixament;

    cout<<"Tens "<<edat<<" anys ";

    if (edat>=16 && edat<67){

    cout<<"Estas en edat de treballar";

    }


    return 0;
}