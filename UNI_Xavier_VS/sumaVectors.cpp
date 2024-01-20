#include <iostream>
#define DIM 5

using namespace std;

void LlegirVector(int nums[DIM]){

    for (int i = 0; i<DIM; i++){
        cin>>nums[i];
    }
}
void EscriuVector(int nums[DIM]){
    for (int i = 0; i<DIM; i++){
        cout<<nums[i]<<endl;
    }
}
void SumaVectors(int nums1[DIM], int nums2[DIM], int res[DIM]){
    for (int i = 0; i<DIM; i++){
        res[i] = nums1[i] + nums2[i];
    }
}

int main(){

    int v1[DIM], v2[DIM], res[DIM];

    LlegirVector(v1);
    LlegirVector(v2);
    SumaVectors(v1,v2,res);
    EscriuVector(res);

    return 0;
}