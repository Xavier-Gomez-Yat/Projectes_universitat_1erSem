#include <iostream>

using namespace std;

int centenes(int Num){
    int res;
    res = (Num/100)%10;

    return res;
}

int main(){

int resultat,N;

cin>>N;

resultat = centenes(N);

cout<<"Les centenes del nombre "<<N<<" son "<<resultat;

    return 0;
}