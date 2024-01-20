#include <iostream>

using namespace std;

int main(){

int V1[10] = {0,1,2,3,4,5,6,7,8,9};
int V2[10], V3[10], V4[10];

for (int i = 0; i<=9; i++){
    V2[i] = 2*i;
    cin>>V3[i];
    V4[i] = V1[i] + V2[i] + V3[i];
}

    cout<<"Vector 1: ";
    for(int i = 0; i<=9;i++){
        cout<<V1[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector 2: ";
    for(int i = 0; i<=9;i++){
        cout<<V2[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector 3: ";
    for(int i = 0; i<=9;i++){
        cout<<V3[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector 4: ";
    for(int i = 0; i<=9;i++){
        cout<<V4[i]<<" ";
    }

    return 0;
}