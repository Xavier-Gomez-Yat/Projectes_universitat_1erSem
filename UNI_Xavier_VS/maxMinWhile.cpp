#include <iostream>

using namespace std;

int main(){

    int num = 0,count = 0,min = 1234567,max = 0;

    while(num >= 0 && count <10){
        cin>>num;

        if(num>=0){
        if (num < min){
            min = num;
        }

        if (num > max){
            max = num;
        }
    }
        count++;
    }

    if (max == 0 && min == 1234567){
        cout<<"No hi ha nombres a la sequencia";
    } else{

    cout<<"Maxim: "<<max<<" - Minim: "<<min;
    }

    return 0;
}