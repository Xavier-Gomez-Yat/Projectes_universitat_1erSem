#include <iostream>
#define DIM 5

using namespace std;

int BuscarPosicio(int V[], int num, int elements){

    int index = -1, i=0;
    bool trobat = 0;

    while((i<elements) && !trobat){
        if (V[i]<num){
            index = i;
            trobat = 1;
        }
        i++;
    }
    return index;
}

bool OrdenatDecreixent(int V[], int elements){

    bool ordenat = 1;
    int last, i = 0;
    while((i<elements) && ordenat){

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

    bool decreixent = false;
    while(!decreixent){
        cout<<"introdueix els nombres delm arry";
        for (int i = 0; i<elements; i++){
        cin>>V[i];
        }
        decreixent = OrdenatDecreixent(V,elements);
    }
}

int main(){

    int V[DIM];
    int num,index;

    LlegirVector(V, DIM);
    cin>>num;
    index=BuscarPosicio(V,num,DIM);
    
    if (index != -1){
        cout<<"El valor ha d'anar a la posicio "<<index;
    } else{
        cout<<"Tots els valors del vector son mes grans que "<<index;
    }
    



    return 0;
}