#include <iostream>
#include <algorithm>
#include <map>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

int main() {
	// Variables
	int n, numero, decenas, unidades, sumad, c;
	vector <int> numeros, numerosi;
	srand(time(NULL));

	// Lectura
	cout << "LECTURA DE DATOS: " << "\n";
	cout << "================================================= " << "\n";
	cout << "Ingrese el valor de N: "; cin >> n;

	// Validacion


	// Proceso
	for (int i = 0; i <= (n - 1); i++) {
		numero = 10 + round(rand() % 79);
		numeros.push_back(numero);
	}
	c = 0;
	for (int i = 0; i <= (n - 1); i++) {
		decenas = floor(numeros[i] / 10);
		unidades = numeros[i] % 10;
		sumad = decenas + unidades;
		if (!(sumad % 2 == 0)) {
			numerosi.push_back(numeros[i]);
			c++;
		}

	}

	// Reporte
	cout << "\n";
	cout << "REPORTE DE DATOS: " << "\n";
	cout << "SERIE INICIAL: ";
	for (int i = 0; i <= (n - 1); i++) {
		cout << numeros[i] << " ";
	}
	cout << "\n";
	cout << "SERIE DE SUMA DE DIGITOS IMPAR: ";
	for (int i = 0; i <= (c - 1); i++) {
		cout << numerosi[i] << " ";
	}


	return 0;
}
