#include <iostream>

using namespace std;

int main(){

    char vocal,vocalmin;
    string morse;

    cin>>vocal;
    
    vocalmin = (char)tolower(vocal);
    

    switch (vocalmin){

        case 'a':
        morse = ".-";
            break;
        case 'e':
        morse = ".";
            break;
        case 'i':
        morse = "..";
            break;
        case 'o':
        morse = "---";
            break;
        case 'u':
        morse = "..-";
            break;
        default: 

            cout<<"Error: El caracter introduit no es una vocal";

        return 0;
    }
        cout<<" Vocal: "<<vocal<<" - Codi Morse: "<<morse;

    return 0;
}