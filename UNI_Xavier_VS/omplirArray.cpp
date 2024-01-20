#include <iostream>

using namespace std;

int main(){

    int nums[10] = {1};
    int i = 0;

   while(i<=9){

        cin>>nums[i];

        if(nums[i] == 0){
            i=10;
        }

        i++;

   }    
        if(i == 11){
            cout<<"Hem introduit un zero";
        }else {
            cout<<"Hem arribat al final de l'array";
        }

    return 0;
}