#include <iostream>

using namespace std;

int main(){

    float teoria,seminarios,practiques,nota;

    //Nota Final = 0.4 x Teoria + 0.3 x Seminaris + 0.3 x Pràctiques
    cin>>teoria>>seminarios>>practiques;

    nota = (0.4*teoria) + (0.3*seminarios) + (0.3*practiques);

    if(nota>=0 && nota<5) {
        cout<<"La nota final es "<<nota<<" - SUSPES";
        
    } else if(nota>=5 && nota<7) {
        cout<<"La nota final es "<<nota<<" - APROVAT";
        
    } else if(nota>=7 && nota<9) {
        cout<<"La nota final es "<<nota<<" - NOTABLE";
        
    } else if(nota>=9 && nota<10) {
        cout<<"La nota final es "<<nota<<" - EXCEL.LENT";
        
    } else {
        cout<<"La nota final es "<<nota<<" - MATRICULA D'HONOR";
        
    } 


    return 0;
}