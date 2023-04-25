#include <iostream>
#include <string>

using namespace std;


int fnMenorNota(int n1, int n2, int n3, int n4, int n5) {
	// Variables
	int notaMenor;
	// Proceso
	notaMenor = n1; // Se asume como verdad
	notaMenor = (notaMenor > n2) ? n2 : notaMenor;
	notaMenor = (notaMenor > n3) ? n3 : notaMenor;
	notaMenor = (notaMenor > n4) ? n4 : notaMenor;
	notaMenor = (notaMenor > n5) ? n5 : notaMenor;
	// Reporte
	return notaMenor;
}

int fnPromedio(int n1, int n2, int n3, int n4, int n5) {
	// Variables
	int promedio, notaMenor;
	// Proceso
	notaMenor = fnMenorNota(n1, n2, n3, n4, n5);
	promedio = (n1 + n2 + n3 + n4 + n5 - notaMenor) / 4;
	// Reporte
	return promedio;
}


int main41() {
	// Variables
	int n1, n2, n3, n4, n5, notaMenor, promedio;
	// Datos
	cout << "Nota 1: "; cin >> n1;
	cout << "Nota 2: "; cin >> n2;
	cout << "Nota 3: "; cin >> n3;
	cout << "Nota 4: "; cin >> n4;
	cout << "Nota 5: "; cin >> n5;
	// Proceso
	notaMenor = fnMenorNota(n1, n2, n3, n4, n5);
	promedio = fnPromedio(n1, n2, n3, n4, n5);
	// Reporte
	cout << "\n";
	cout << "Nota menor: " << notaMenor << endl;
	cout << "Promedio: " << promedio << endl;
	return 0;
}



