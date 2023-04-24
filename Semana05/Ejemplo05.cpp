/*
Desarrollar las siguientes funciones:

- Función promedioFinal
  Calcula el promedio de un estudiante en base a la siguiente formula:
  PF = PP * 0.30 + EP * 0.30 + EF * 0.4

- Función condicionFinal
  Determina la condición del estudiante en base a su promedio final:
  -----------------------------------
  |  PROMEDIO FINAL | CONDICION     |
  -----------------------------------
  |     [18,20]     | EXCELENTE     |
  -----------------------------------
  |     [11.18>     | APROBADO      |
  -----------------------------------
  |     [0,11>      | DESAPROBADO   |
  -----------------------------------
*/
// Creditos: Robert Barrios Berna.
#include <iostream> 
#include <string>
using namespace std;

float promedioFinal (int PP, int EP, int EF) {
	float promedio = PP*0.3 + EP*0.3 + EF*0.4;
	return promedio;
}

string condicionFinal (int pFinal) {
	string condicion;
	if (pFinal >= 0 and pFinal < 11) {
		condicion = "DESAPROBADO";
	}
	else if (pFinal >= 11 and pFinal < 18) {
		condicion = "APROBADO";
	}
	else if (pFinal >= 18 and pFinal <= 20) {
		condicion = "EXCELENTE";
	}
	return condicion;
}

int main() {
	float pFinal = promedioFinal(06,11,12);
	cout << "El promedio del alumno es: " << pFinal << endl;
	cout << "La condicion final del estudiante es: " << condicionFinal(pFinal) << endl;
	return 0;
}
