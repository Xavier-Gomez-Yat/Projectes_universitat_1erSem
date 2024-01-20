#include <iostream>

using namespace std;

int main(){

    int num,count = 0,i=1;

    cin>>num;

    while(i<=num){

        if(num%1 == 0){
            count++;
        }
        i++;
    }

    if (count <=2){
        cout<<"PRIMER";
    } else{
        cout<<"NO PRIMER";
    }


    return 0;
}