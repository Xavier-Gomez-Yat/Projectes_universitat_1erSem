#include <iostream>

using namespace std;

bool OrdenatDecreixent(int V[], int elements){

    bool ordenat = 1;
    int last, i = 0;

    while((i<elements) && ordenat == 1){

        if (i==0){
            last = V[i];
        }
        if (V[i]>last){
            ordenat = 0;
        }
        last = V[i];
        i++;
    }
    return ordenat;
}

void LlegirVector(int V[], int elements){

    for (int i = 0; i<elements; i++)
        cin>>V[i];
}

int main(){

    int elements;
    cin>>elements;
    bool ordenat;
    int V[elements];

    LlegirVector(V,elements);
    ordenat=OrdenatDecreixent(V,elements);

    cout<<ordenat;

    return 0;
}