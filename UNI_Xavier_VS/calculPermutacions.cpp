#include <iostream>

using namespace std;

int NumN,NumM,resN,resM,nM,resnM,XX;

int factorial(int N){

int Fact = 1;

    for(int i=1;i<=N;i++){


        Fact *= i;
    }
    return Fact;
}
int main(){

cin>>NumN>>NumM;
resnM = NumN - NumM;
cout<<"Resta"<<resnM<<endl;

resN = factorial(NumN);
cout<<resN<<endl;
resM = factorial(NumM);
cout<<resM<<endl;
nM = factorial(resnM);
cout<<nM<<endl;

XX = resN/(resM * nM);

cout<<"El nombre d'equips que es poden formar es: "<<XX;

    return 0;
}