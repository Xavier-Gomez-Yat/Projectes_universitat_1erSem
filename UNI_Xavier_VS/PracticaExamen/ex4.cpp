/*Exercici 4 (1 punt)
Fer una funció anomenada ExisteixNombreNCops per saber si un nombre (num) apareix n cops
(cops). La funció rebrà:
1. un array d'enters
2. la dimensió de l'array passat com a primer paràmetre
3. un nombre enter (num)
4. un nombre enter (cops)
La funció retornarà true si el nombre num apareix un nombre igual o superior a cops en l’array i
false en cas contrari.*/

bool ExisteixNombreNCops(int v[],int dim ,int num, int cops){
    
    int vegades;

    for (int i = 0; i<dim; i++){
        if (v[i] == num){
            vegades++;
        }
    } 
    return (cops <= vegades);
}