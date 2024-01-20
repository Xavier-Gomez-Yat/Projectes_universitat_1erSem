#include <iostream>

using namespace std;

int main(){

    int vector1[10];
    int index, max;
    
    for (int i = 0; i<=9; i++){

        cin>>vector1[i];

        if ( i==0 ){
            max = vector1[i];
            index = i;
        } 
        if (max < vector1[i]){
            max = vector1[i];
            index = i;
        }
    }

    cout<<"El maxim del vector es "<<max<<" i es troba a l'index "<<index;



    return 0;
}