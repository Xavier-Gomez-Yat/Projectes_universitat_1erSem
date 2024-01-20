#include <iostream>

using namespace std;

int main(){

int num,positius = 0,negatius = 0;

for (int i = 1; i <= 5; i++){
    cin>>num;

    if(num>0){
        positius++;
    } else if (num<0){
        negatius++;
    }
}

    cout<<"Positius: "<<positius<<" - Negatius: "<<negatius;

    return 0;
}