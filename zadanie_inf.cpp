#include <iostream>
using namespace std;

int main(){
	int s, w;
	
	cout << "podaj szerokosc: ";
	cin >> s;
	cout << "podaj wysokosc: ";
	cin >> w;
	
	for(int i = w; i >= 1; --i){
		for(int j = 0; j < w -i; j++){
			cout << " ";
		}
		for(int k = 0; k < 2 * i - 1; ++k){
			cout << "*";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}