#include <iostream>

using namespace std;

int main(){

    float temperatures[12];
    float iMax, iMin, max, min, mitjana = 0;

    for (int i = 0; i<=11; i++){

        cin>>temperatures[i];

        if ( i==0 ){
            max = temperatures[i];
            min = temperatures[i];

            iMax = i + 1;
            iMin = i + 1;
        } 

        if (max < temperatures[i]){
            max = temperatures[i];
            iMax = i + 1;
        }

        if (min > temperatures[i]){
            min = temperatures[i];
            iMin = i + 1;
        }

        mitjana += temperatures[i];

    }

    mitjana = (mitjana/12);


    cout<<"Mes amb temperatura minima: "<<iMin<<endl;
    cout<<"Mes amb temperatura maxima: "<<iMax<<endl;
    cout<<"Temperatura mitjana: "<<mitjana<<endl;

    for (int j = 0; j<=11; j++){


        if(temperatures[j] == mitjana){
            cout<<"El mes "<<j + 1<<" ha tingut temperatura igual a la mitjana anual.";
        } 
        else if (temperatures[j] < mitjana){
            cout<<"El mes "<<j + 1<<" ha tingut temperatura inferior a la mitjana anual."<<endl;
        } 
        else if (temperatures[j] > mitjana){
            cout<<"El mes "<<j + 1<<" ha tingut temperatura superior a la mitjana anual."<<endl;
        }
    }

    return 0;
}