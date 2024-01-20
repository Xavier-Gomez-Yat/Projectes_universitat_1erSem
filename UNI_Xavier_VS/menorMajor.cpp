#include <iostream>

using namespace std;

int main() {

	int data,edat;
	const int any = 2023;

	//Tens XX anys i ets menor d'edat.
	//Tens XX anys i ets major d'edat.

	cout << "Introdueix la teva data de naixement: "<<endl;
	cin >> data;

	edat = any - data;

	if (edat >= 18) {
		cout << "Tens " << edat << " anys i ets major d'edat.";
	}
	else {
		cout << "Tens " << edat << " anys i ets menor d'edat.";
	}

	return  0;
}