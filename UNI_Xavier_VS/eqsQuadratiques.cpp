#include <iostream>
#include <math.h>

using namespace std;


int equacio(int a, int b, int c, float &res1, float &res2){

    if( pow(b,2)-4*a*c < 0){
        return 0;
    } else if( pow(b,2)-4*a*c == 0){
        res1 = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
        return 1;
    } else {
        res1 = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
        res2 = (-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
        return 2;
    }

}



int main(){

    int a,b,c,check;
    float resu1,resu2;

    cin>>a>>b>>c;

    check = equacio(a,b,c,resu1,resu2);

    cout<<"check: "<<check<<"resultats: "<<resu1<<endl<<resu2;
    

    return 0;
}