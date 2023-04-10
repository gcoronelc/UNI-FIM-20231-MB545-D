//factorial de N

#include <iostream>

using namespace std;

int main() {
	
	//variables
	int num, factorial = 1;
	//lectura de datos
	cout << "Introducir numero: ";
	cin >> num;
	//proceso
	for (int i = num; i>0; i--) {
		factorial = factorial * i;
	}
	//reporte
	cout << factorial;
	
	return 0;
}
