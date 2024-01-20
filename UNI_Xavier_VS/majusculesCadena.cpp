#include <iostream>
#include <string.h>

#define max 40

using namespace std;

void Majuscules(char c[]){
    int i = 0;
    
    while(c[i] != '\0'){
        if (c[i] >= 97){
            c[i] -= 32;
        }
        i++;
    }
}

int main(){

    char c[max];

    scanf("%s",c);
    Majuscules(c);

    cout<<c;

    return 0;
}
