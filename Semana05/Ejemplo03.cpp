/*
Desarrollar una función que permita encontrar el termino N de la serie de Fibonacci.
*/
#include <iostream> 
using namespace std;

//créditos: Victor Ibañez
int fibonacci1(int N) {
	if (N == 1 or N == 2) {
		return 1;
	}
	else {
		return fibonacci1(N-1)+fibonacci1(N-2);
	}
}

// Creditos: Profesor
int fibonacci2(int N) {
	// Variables
	int resultado;
	int a, b, c;
	// Proceso
	a = 1;
	b = 1;
	resultado = 1; // asumo que N es 1 o 2
	for(int i=3; i<=N; i++){
		c = a + b;
		resultado = c;
		a = b;
		b = c;
	}
	// Reporte
	return resultado;
}

int main() {

	for (int i = 1; i < 10; i++) {
		cout << fibonacci2(i) << endl;
	}
	return 0;
}
