#include <iostream>

using namespace std;

int main(){

    int nums[10];
    int last, index, i;
    bool check = false;

    for (i = 0; i<=9;i++){
        cin>>nums[i];
    }

    last = nums[0];
    i=0;

        while(i<=9 && check == false){
            
            index = i;

            if(last > nums[i]){
            index = i - 1;
            check = true;
            }
            last = nums[i];
            i++;
        }

    cout<<index;

    return 0;
}