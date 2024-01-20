#include <iostream>
#include <string.h>

#define DIM 20

using namespace std;

int main(){

    char c1[DIM], c2[DIM], c3[DIM];
    bool c12,c13,c23;

    scanf("%s",c1);
    scanf("%s",c2);
    scanf("%s",c3);

    cout<<"Cadenes introduides: "<<c1<<" "<<c2<<" "<<c3<<endl;

    c12 = strcmp(c1,c2);
    c13 = strcmp(c1,c3);
    c23 = strcmp(c3,c2);

    if (!c12 && !c13 && !c23){
        cout<<"Les tres cadenes son iguals";
    } else if (c12 && c13 && c23){
        cout<<"Les tres cadenes son diferents";
    } else {
        if (!c12){
            cout<<"Les cadenes 1 i 2 son iguals";
        } else if (!c13){
            cout<<"Les cadenes 1 i 3 son iguals";
        } else{
            cout<<"Les cadenes 2 i 3 son iguals";
        }
    }


    return 0;
}