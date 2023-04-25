// Creditos: Barrios Kevin

#include <iostream>
#include <sstream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <map>

using namespace std;

float sumaSerie(int termino) {
	// Varialbes
	float suma;
	// Proceso
	suma = 0;
	for (int i = 1; i <= termino; i++) {
		if (i % 2 == 0) {
			suma += 3 / static_cast<float>(2 * i);
		}
		else {
			suma -= 1 * static_cast<float>(3 / (2 * i));
		}
	}
	// Retorno
	return suma;
}

float sumaSerie2(int termino) {
	// Varialbes
	float suma;
	// Proceso
	suma = 0;
	for (int i = 1; i <= termino; i++) {
		if (i % 2 == 0) {
			suma += 3 * 1.0 /(2 * i);
		}
		else {
			suma -= 3 * 1.0 / (2 * i);
		}
	}
	// Retorno
	return suma;
}

int main8() {
	// Variables
	int Nterminos;
	float sumaS;
	stringstream serie;

	// Lectura
	cout << "LECTURA DE DATOS:" << "\n";
	cout << "============================" << "\n";
	cout << "Indique el numero de terminos: "; cin >> Nterminos;

	// Proceso
	for (int i = 1; i <= Nterminos; i++) {
		if (i % 2 == 0) {
			serie << " + 3/" + to_string(2 * i);
		}
		else if (i % 2 != 0) {
			serie << " - 3/" + to_string(2 * i);
		}
	}

	sumaS = sumaSerie2(Nterminos);

	// Reporte
	cout << "REPORTE DE RESULTADOS:" << "\n";
	cout << "============================" << "\n";
	cout << "La serie es: " << serie.str() << "\n";
	cout << "La suma de la serie es:" << sumaS << endl;

	return 0;
}
