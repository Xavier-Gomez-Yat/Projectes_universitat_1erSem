#include <iostream>

using namespace std;

void incrementarHora(int &hora, int &min, int &sec){

    sec++;

    if (sec == 60){
        sec = 0;
        min++;
        if (min == 60){
            min == 0;
            hora++;
            if (hora == 24){
                hora == 0;
            }
        }
    }    
}