/*
Ejemplo 2
Desarrollar un programa que lea numeros enteros positivos.
La lectura finaliza cuando se ingresa un numero negativo o cero.
Luego debe mostrar el promedio.
*/

#include <iostream> 
#include <sstream> 
using namespace std; 
int main() {
	// Variables
	int numero, cantNumeros, suma, promedio;
	stringstream datos;
	// Lectura
	cantNumeros = 0;
	do{
		cout << "Número " << (cantNumeros+1) << ": ";
		cin >> numero;
		if(numero>0){
			datos << " " << numero;
			cantNumeros++;
		}
	} while(numero>0);
	// Proceso
	suma = 0;
	for(int i=1; i<=cantNumeros; i++){
		datos >> numero;
		suma += numero;
	}
	promedio = suma / cantNumeros;
	// Reporte
	cout << "Promedio: " << promedio << "\n";
	return 0;
}
