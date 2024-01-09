#include <iostream>
using namespace std;

float a;
float b = 0,23;
int suma(int a, int b){
	return a * b;
}


int main(){
	int wybor;
	float netto, brutto;
	cout << "Ktora kwote chcesz obliczyc? /n1. Brutto /n2. Netto" << endl;
	cin >> wybor;
	
	switch(wybor){
		case 1:
			cout << "podaj kwote netto:";
			cin >> netto;
			cout << "Brutto: " << brutto(netto) << " zl" << endl;
			break;
			
			case 2:
				cout << "podaj kwote brutto:";
				cin >> brutto;
				cout << "Netto: " << netto(brutto) << " zl" << endl;
				break;
}