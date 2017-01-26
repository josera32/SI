#include<iostream>
using namespace std;

double calculecargos(int tiempo){
	double cargo;
	int contador;
		if (tiempo>=24) {
			cargo=10;
		}
		if((tiempo > 3)&&(tiempo<24)){
			contador=tiempo -2;
			cargo = contador + 0.5;
		}
		if (tiempo<=3) {
			cargo=2;
		}
			return cargo;
		
}
int main(){
	double tiempo1, tiempo2, tiempo3, coche1, coche2, coche3, sumadecoches;
	cout << "introduceme el tiempo primer coche" << endl;
	cin >> tiempo1;
	cout << "introduceme el tiempo del segundo coche" << endl;
	cin >> tiempo2;
	cout << "introduceme el tiempo del tercer coche" << endl;
	cin >> tiempo3;

	coche1=calculecargos(tiempo1);
	coche2=calculecargos(tiempo2);
	coche3=calculecargos(tiempo3);
	sumadecoches=coche1+coche2+coche3;

	cout << "coche1 = " << coche1 << endl;
	cout << "coche2 = " << coche2 << endl;
	cout << "coche3 = " << coche3 << endl;
	cout << "suma de coches = " << sumadecoches << endl;
}
	
	
		



	
