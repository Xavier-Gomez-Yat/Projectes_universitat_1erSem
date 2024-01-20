#include <iostream>

using namespace std;

bool Senar(int N){

    bool senar=(N%2);

    cout<<"cosetes";

    return senar;

}


int main(){

    int nums[10];
    int i;
    bool check = true;

    for (i = 0; i<=9;i++){
        cin>>nums[i];
    }

    i=0;

    while(i<=9 && check == true){

        if (nums[i]%2 == 0){
            check = false;
            i = 10;
        }
        i++;
    }

        if(check){
            cout<<"TOTS SON SENARS";
        } else{
            cout<<"NO TOTS SON SENARS";
        }

    return 0;
}