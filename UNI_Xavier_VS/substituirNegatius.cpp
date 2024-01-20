#include <iostream>

using namespace std;

int main(){

    int nums[12];
    int nums2[12];

    for (int i = 0; i <= 11; i++){

        cin>>nums[i];
        if (nums[i] < 0){
            nums2[i] = {0};
        } else {
            nums2[i] = nums[i];
        }

    }

    cout<<"Entrada: ";
    for (int i = 0; i <= 11; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Sortida: ";
    for (int i = 0; i <= 11; i++){
        cout<<nums2[i]<<" ";
    }


    return 0;
}