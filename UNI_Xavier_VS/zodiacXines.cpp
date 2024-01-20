#include <iostream>

using namespace std;

int main (){

    int any, modul;
    string signe;

    cout<<"Introdueix el teu any de naixement: "; cin>>any;

    modul = any%12;
    

    //0=“mono”, 1=“gall”, 2=“gos”, 3=“porc”, 4=“rata”, 5=“bou”,
    // 6=“tigre”, 7=“conill”, 8=“drac”, 9=“serp”, 10=“cavall”, 11=“cabra”.

    switch (modul){

        case 0:
            signe = "mono";
        break;
        case 1:
            signe = "gall";
        break;
        case 2:
            signe = "gos";
        break;
        case 3:
            signe = "porc";
        break;
        case 4:
            signe = "rata";
        break;
        case 5:
            signe = "bou";
        break;
        case 6:
            signe = "tigre";
        break;
        case 7:
            signe = "conill";
        break;
        case 8:
            signe = "drac";
        break;
        case 9:
            signe = "serp";
        break;
        case 10:
            signe = "cavall";
        break;
        case 11:
            signe = "cabra";
        break;
    }

    cout<<"Signe: "<<signe;


    return 0;
}