#include <iostream>

using namespace std;

int main() {

	int data,edat;
	const int any = 2023;

	//Tens XX anys i ets menor d'edat.
	//Tens XX anys i ets major d'edat.

	cin >> data;

	edat = any - data;

	if (edat >= 18) {
		cout << "Tens " << edat << " anys i ets major d'edat.";
        if(edat<67){
                cout<<" Estas en edat de treballar";
        } else if (edat>=67){
                cout<<" Estas en edat de jubilacio";
        }

	}
	else {
		cout << "Tens " << edat << " anys i ets menor d'edat. ";

        if(edat<=12){
                cout<<"Encara no has acabat primaria";
        } else if (edat>12){
                cout<<"Has acabat primaria";
        }
	}

	return  0;
}