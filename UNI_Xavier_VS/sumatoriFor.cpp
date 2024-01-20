#include <iostream>

using namespace std;

int main(){

        int num, sumatori = 0;
        cin>>num;

    while(num<=0){

        cout<<"Error: el valor ha de ser mes gran que zero"<<endl;
        cin>>num;
    }

        for (int i = 0; i <= num; i++){
        
        sumatori = sumatori + i;
        
        }
            cout<<"El sumatori de "<<num<<" es: "<<sumatori;
    
    return 0;
}