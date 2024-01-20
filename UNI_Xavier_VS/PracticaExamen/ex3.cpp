/*Exercici 3 (1 punt)
Fer el procediment ImprimirSetmanes que rep dos paràmetres:
1. un array d'enters amb la informació de setmanes disponibles i reservades
2. la dimensió de l'array passat com a primer paràmetre
Aquest procediment imprimirà la disponibilitat de les setmanes en el següent format:
En el cas d'estar lliure (valor 0 en l'array), s'imprimirà el número de setmana. En el
cas d'estar reservada (valor diferent de 0 en l'array), s'imprimirà un asterisc (*).
S'imprimirà en blocs de 4 setmanes amb un espai entre el número o asterisc de cada setmana
(veure exemple).
NOTA: Recordeu que la primera setmana és la setmana 1.*/

#include <iostream>

using namespace std;

void ImprimirSetmanes(int setmanes[], int dim){
    for (int i = 0; i<dim; i++){
        if (setmanes[i] == 0){
            cout<<i + 1<<" ";
        } else {
            cout<<"* ";
        }
        
        if (i%4 == 3){
            cout<<endl;
        }
    }
}