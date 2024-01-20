/*Exercici 5 (1 punt)
Fer un procediment anomenat FrequenciaLloguer que rebrà tres paràmetres:
1. un array setmanes on guardem informació de quin soci ha reservat cada setmana
2. la dimensió de l’array setmanes
3. un array socis on guardarem quantes reserves té cada soci
NOTA: La taula socis estarà inicialitzada a 0 (no cal inicialitzar-la en aquest procediment).
*/

#include <iostream>

using namespace std;

void FrequenciaLloguer(int setmanes[], int dim, int socis[]){
    for (int i = 0; i<dim; i++){
        socis[setmanes[i]]++;
    }
}