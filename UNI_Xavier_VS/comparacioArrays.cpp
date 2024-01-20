#include <iostream>

using namespace std;

int main(){

    int nums1[6];
    int nums2[6];
    int j = 0;
    bool iguals = 1;

    for(int i = 0; i<=5;i++){
        cin>>nums1[i];
    }
    for(int i = 0; i<=5;i++){
        cin>>nums2[i];
    }

    while(j<=5 && iguals == 1){
        if(nums1[j] != nums2[j]){
            iguals = 0;
        }
        j++;
    }

    if(iguals){
        cout<<"IGUALS";
    } else{
        cout<<"DIFERENTS";
    }

    return 0;
}