#include <iostream>

using namespace std;
int series(int start, int end){
    for (;start<=end; start++){
        cout<<start<<" ";
    }
    cout<<endl;
    return start;
}
int serieDivisor(int u, int dos, int divisor){
    for (u; u<=dos;u++){

        if (u%divisor == 0){
            cout<<u<<" ";
        }
        
}
    cout<<endl;
    return u;
}
int main(){

    series(1,10);
    series(25,35);
    serieDivisor(50,80,2);
    serieDivisor(1,50,3);    

    return 0;

}