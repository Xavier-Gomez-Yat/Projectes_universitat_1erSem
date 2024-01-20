#include <iostream>

using namespace std;

int main(){

    float nums[10];
    int index, i;
    float sum = 0;

    for (i = 0; i<=9;i++){
        cin>>nums[i];
    }

    i=0;

    while(i<=9 && sum < 25){
        sum += nums[i];
        i++;
        index = i;
    }

    if(sum > 25){
        cout<<index;
    }else{
        cout<<"La suma acumulada de l'array es inferior o igual a 25";
    }

    return 0;
}