#include <iostream>

//S: X1 - A: X2 - N: X3 - E: X4 - MH: X5

using namespace std;

int main(){

    float nota;
    int suspesos = 0,aprovats = 0, notables = 0, excelents = 0, matricules = 0;

    cin>>nota;
    while (nota >= 0 && nota <= 10){
        
        if(nota<5){
            suspesos++;
        }else if(nota <7){
            aprovats++;
        } else if(nota<9){
            notables++;
        }else if (nota<10){
            excelents++;
        } else{
            matricules++;
        }

        cin>>nota;
    }


    cout<<"S: "<<suspesos<<" - A: "<<aprovats<<" - N: "<<notables<<" - E: "<<excelents<<" - MH: "<<matricules;



    return 0;
}