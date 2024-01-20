#include <iostream>

using namespace std;

int main(){
    int n,i = 1,resultat = 0;

cin>>n;
while (n <= 0){
    cout<<"Error: el valor ha de ser mes gran que zero"<<endl;
    cin>>n;
}


while (n>=i){

    resultat += i;
    i++;
}
    cout<<"El sumatori de "<<n<<" es: "<<resultat;
    return 0;
}