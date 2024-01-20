#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

int num,proba,intents;
bool ganes = 1;
char si;


while(ganes == 1){

num= (rand() % 10) + 1;

    for(int i = 0; i<=5;i++){
    
    intents = i;
    
    cin>>proba;
   
    while (num<1 && num>10){
        cout<<"Error: Valor fora del rang 1-10"<<endl;
    cin>>proba;
    }

    if (proba>num){
        cout<<"El numero a endevinar es mes petit"<<endl;
    } else if (proba<num){
        cout<<"El numero a endevinar es mes gran"<<endl;
    } else {
        cout<<"Has guanyat!!! Has encertat en "<<i<<" intents"<<endl;
        i=6;
    }
}

    if (intents>5){
        cout<<"Has perdut: El numero secret era"<<num;
    } 

    cout<<"Vols tornar a jugar?"<<endl;
    cin>>si;

    if (si == 'S' || si=='s'){
        ganes = 1;
    }else {
        ganes = 0;
    }

}
    return 0;
}