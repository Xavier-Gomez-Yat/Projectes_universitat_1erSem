#include <iostream>
#include <string.h>
#define MAX 200

using namespace std;

char PrimerDiferent(char c1[],char c2[]){
    char diferent = 'a';
    bool iguals = 1;
    int i = 0;

        while(iguals && diferent != '\0'){
            if(c1[i] != c2[i]){
                diferent = c1[i];
            }
            iguals = (c1[i] == c2[i]);
            i++;
        }
    return diferent;
}

int main(){

    char c1[MAX], c2[MAX];
    char caracterDiferent;

    scanf("%s",c1);
    scanf("%s",c2);

    caracterDiferent = PrimerDiferent(c1,c2);

    if (caracterDiferent == '0'){
        cout<<"No hi ha cap caracter diferent";
    } else {
        cout<<"El primer caracter diferent es "<<caracterDiferent;
    }

    return 0;
}