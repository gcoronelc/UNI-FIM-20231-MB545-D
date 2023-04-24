/*
Desarrollar una función que permita elevar un número a una potencia.
La base y el exponente deben ser números enteros.
Usando solo estructuras de control.
*/
#include <iostream> 
using namespace std;

// Creditos: Barrios
int potencia1(int base, int exp) {
	int numero = base;
	for (int n = 1; n<exp; n++) {
		base *= numero;
	}
	return base;
}

// Creditos: Profesor
int potencia2(int base, int exp) {
	// Variable
	int resultado;
	// Proceso
	resultado = 1;
	for(int i=1;i<=exp;i++){
		resultado *= base;
	}
	// Retorte
	return resultado;
}

// Creditos: Victor Ibañez y el salon
int potencia3(int base, int exp) {
	if (exp == 1) {
		return base;
	}
	else {
		return base * potencia3(base, exp - 1);
	}
}

int main() {
	cout << "El resultado es: " << potencia3(4,3) << endl;

	return 0;
}
