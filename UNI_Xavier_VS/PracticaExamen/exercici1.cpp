/*Exercici 1 (1 punt)
Fer una funció anomenada IntroduirValor, que rep dos valors enters (min i max), on min <
max. La funció llegirà un nombre del teclat i haurà de comprovar que pertany a l’interval [min,max]
(interval tancat).
La funció informarà a l’usuari amb el missatge: Entra valor entre XX i YY:
on XX i YY seran els valors min i max passats com a paràmetres.
En cas d’equivocació, el missatge serà: Error: valor fora de l'interval
i tornarà a demanar el valor. Aquest procés es repetirà fins que s’introdueixi un valor correcte.
Si tot és correcte, la funció retornarà el valor llegit (dintre l’interval)*/

#include <iostream>

using namespace std;

int IntroduirValor(int min, int max){
    int val;

    cout<<"Entra valor entre XX i YY: ";
    cin>>val;

    while(val<min || val>max){
        cout<<"Error: valor fora de l'interval";
        cout<<"Entra valor entre XX i YY: ";
        cin>>val;
    }
    return val;
}