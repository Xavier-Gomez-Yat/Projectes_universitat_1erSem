#include <iostream>

#define MAXDORSALS 10

using namespace std;

int index_element(int num, int array[], int elements){
    
    int index = -1, i = 0;
    bool trobat = 0;
    
    while (i<elements && !trobat){
        
        trobat = (num==array[i]);
        if (trobat){
            index = i;
        }
        i++;
    }
    return index;
}

int millor_progressio(int a_meitat[], int a_final[], int max_dorsals){
    
    int bestDorsal, dorsalMeitat, dorsalFinal, index;
    
    for (int i = 1; i<=max_dorsals; i++){
        dorsalMeitat = index_element(i,a_meitat,max_dorsals); //Aqui dorsalMeitat es el indice de a_meitat[x] = i. 
        //osea que encuentra la posicion de llegada en el checkpoint
        dorsalFinal = index_element(i,a_final,max_dorsals);

        if (dorsalFinal != -1){
            if (((dorsalMeitat - dorsalFinal)>bestDorsal) || (i == 1)){
                bestDorsal = dorsalMeitat - dorsalFinal;
                index = i;
            }
        }
    }
    return index;
}

void omplirVectors(int v[], int elements){
    for (int i = 0; i< elements; i++){
        cin>>v[i];
    }
}

int main(){

    int a_meitat[MAXDORSALS], a_final[MAXDORSALS];
    int millordorsal;

    omplirVectors(a_meitat,MAXDORSALS);
    omplirVectors(a_final,MAXDORSALS);

    millordorsal = millor_progressio(a_meitat,a_final,MAXDORSALS);

    cout<<"El pibe que mejoro mas fue el dorsal: "<<millordorsal;

    return 0;
}

//3 4 5 1 2 6 10 7 0 0
//7 3 10 1 5 4 0 0 0 0