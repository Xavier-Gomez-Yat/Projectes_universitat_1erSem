#include <iostream>
#include <string.h>

using namespace std;

bool Palindrom(char c[]){
    bool iguals = 1;
    int i = 0, longitud;
    longitud = strlen(c) - 1;

    while ((iguals) && (c[i] != '\0') && (longitud != i))
    {
        iguals = (c[i] == c[longitud]);
        i++;
        longitud--;
    }
    return iguals;
}

int main(){

    char c[20];
    bool iguals;

    scanf("%s",c);
    iguals = Palindrom(c);

    if (iguals){
        cout<<"iguasl";
    } else{
        cout<<"nop";
    }

    return 0;
}