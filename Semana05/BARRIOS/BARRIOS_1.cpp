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
	float cantAlum, nota, suma, promedio;
	vector <float> notas;
	string categoria, mensaje1, mensaje2;
	srand(time(NULL));

	// Lectura
	cout << "LECTURA DE DATOS: " << "\n";
	cout << "================================================= " << "\n";
	cout << "Cantidad de alumnos: "; cin >> cantAlum;

	// Validacion


	// Proceso
	for (int i = 1; i <= cantAlum; i++) {
		nota = round(rand() % 20);
		notas.push_back(nota);
	}
	suma = 0;
	for (int i = 0; i <= (cantAlum - 1); i++) {
		suma += notas[i];
	}
	promedio = suma / cantAlum;
	if (promedio < 12) {
		categoria = "INSUFICIENTE";
		mensaje1 = "Lamentamos informarles que su desempeño no ha sido el mejor";
		mensaje2 = "No serà contratado el siguiente ciclo";
	}
	else if (promedio >= 12 and promedio < 15) {
		categoria = "SUFICIENTE";
		mensaje1 = "Lamentamos informarles que su desempeño no ha sido el mejor";
		mensaje2 = "No serà contratado el siguiente ciclo";
	}
	else if (promedio >= 15 and promedio < 17) {
		categoria = "BUENO";
		mensaje1 = "Agradecemos su esfuerzo y esperemos siga mejorando";
		mensaje2 = "Serà contratado el siguiente ciclo";
	}
	else if (promedio >= 17 and promedio < 19) {
		categoria = "DESTACADO";
		mensaje1 = "Buen desempeño, felicitaciones";
		mensaje2 = "Serà contratado el siguiente ciclo";
	}
	else if (promedio >= 19 and promedio <= 20) {
		categoria = "EXCELENTE";
		mensaje1 = "Su desempeño a sido de los mejores, siga asì";
		mensaje2 = "Serà contratado el siguiente ciclo";
	}

	// Reporte
	cout << "\n";
	cout << "REPORTE DE DATOS: " << "\n";
	cout << "NOTAS: ";
	for (int i = 0; i <= (cantAlum - 1); i++) {
		cout << notas[i] << " ";
	}
	cout << "\n";
	cout << "================================================= " << "\n";
	cout << "NOTA PROMEDIO: " << promedio << "\n";
	cout << "CATEGORIA: " << categoria << "\n";
	cout << "MENSAJE: " << mensaje1 << "\n" << mensaje2 << endl;


	return 0;
}
