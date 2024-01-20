#include <iostream>
#include <cstdlib>

using namespace std;

int Aleatori(int Min,int Max){

    int resultat;

    resultat = (rand() % (Max - Min + 1)) + Min;

return resultat;
}
int main(){

    int min,max,Num;
    cin>>min>>max;
    Num = Aleatori(min,max);
    cout<<Num;

}