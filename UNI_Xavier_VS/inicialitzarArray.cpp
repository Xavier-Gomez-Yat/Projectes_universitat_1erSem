#include <iostream>

using namespace std;

int main(){

    float notes[20] = {0};
    int  aprovats = 0;

    for (int i = 0; i<= 19; i++){

        cin>>notes[i];
        while(notes[i] < 0 || notes[i] > 10){
            cout<<"Error: nota no valida"<<endl;
            cin>>notes[i];
        }
        if (notes[i] >= 5){
            aprovats++;
        }

    }

    cout<<aprovats;


    return 0;
}