#include <iostream>
#include <unistd.h>

using namespace std;

int Alarma(int N){

    if (N==0){
    cout<<"Alerta: S'ha acabat el temps"<<endl;
    } else{
        cout<<"Alerta: Queden "<<N<<" segons";
    }
    sleep(1);
    return 0;
}

int main(){
    int secs;
    cin>>secs;

    while (secs >= 0){

    Alarma(secs);
    secs--;

    }
    return 0;
}