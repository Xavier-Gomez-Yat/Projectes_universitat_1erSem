#include <iostream>

using namespace std;

int main(){

    float celsius, farenheit, a=9, b=5;

    cout<<"Introdueix els graus celsius: ";cin>>celsius;

    farenheit = ((a/b)*celsius) + 32;

//CC graus Celsius son FF graus Fahrenheit

    cout<<celsius<<" graus Celsius son "<<farenheit<<" graus Fahrenheit";

    return 0;
}