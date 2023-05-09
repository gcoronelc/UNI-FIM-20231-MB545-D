#include <iostream>
#include <time.h>
#include <sstream>
using namespace std;

// Menu Principal
void menuPrincipal() {
	// Limpiando pantalla
	system("cls");
	// Menu
	cout << "===============================\n";
	cout << "          MATEMATICA\n";
	cout << "       Menu de Opciones\n";
	cout << "===============================\n";
	cout << "    1. Aproximacion de e^x\n";
	cout << "    2. Divisor\n";
	cout << "    3. Raíces de una ecuación\n";
	cout << "    4. Suma de dígitos\n";
	cout << "    5. Salir\n";
}
// Factorial
int factorial(int n) {
	// Variable
	int fact;
	// Inicializacion de variable
	fact = 1;
	// Validacion neutra
	if (n == 0) return fact;
	// Proceso
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	// Retorno
	return fact;
}
// Potencia de un numero
int potencia(int x, int y) {
	// variable
	int resultado;
	// Inicializacion de variable
	resultado = 1;
	// Validacion neutra
	if (y == 0) return resultado;
	// Proceso
	for (int i = 1; i <= y; i++) {
		resultado *= x;
	}
	// Retorno
	return resultado;
}

// Suma de cifras
int sumaCifras(int numero) {
	// Variable
	int sumac, a;
	// Inicialización de Variable
	sumac = 0; a = numero;
	// Proceso
	while (1) {
		sumac += (a % 10);
		a = a / 10;
		if (a < 1) break;
	}
	// Retorno
	return sumac;
}

// Numero primo
bool numeroPrimo(int numero) {
	// Variable
	int contador, a;
	// Inicialización de variable
	contador = 0; a = numero;
	for (int i = 1; i <= a; i++) {
		if ((a % i) == 0) contador++;
	}
	// Retorno
	if (contador == 2) return true;
	else return false;
}

// Leer opcion
int leerOpcion() {
	// variable
	int opcion;
	// Procesor
	do {
		cout << "Opcion: "; cin >> opcion;
		if (opcion < 1 or opcion > 5) {
			cout << "Opcion invalida, elija de nuevo!!\n";
		}
	} while (opcion < 1 or opcion > 5);
	// Retorno
	return opcion;
}

// Aproximar la exponencial
void aproximar_exp() {
	// Limpiando pantalla
	system("cls");
	// Presentacion
	cout << "===================================\n";
	cout << "         APROXIMANDO e^x\n";
	cout << "e^x = 1 + x + x^2/2! + x^3/3! + ...\n";
	cout << "===================================\n";
	// variable
	int x, N;
	double sumatoria;
	stringstream serie;
	do {
		cout << "Índique es valor de x: "; cin >> x;
		if (x < 0 or x > 15) {
			cout << "x debe estar entre 0 y 15, escoja de nuevo\n";
		}
	} while (x < 0 or x > 15);
	// Proceso
	do {
		cout << "Índique el valor de tamaño de la serie: "; cin >> N;
		if (N < 0) {
			cout << "El número debe ser un entero positivo, escoja nuevamente!!\n";
		}
	} while (N < 0);
	sumatoria = 1;
	serie << "e^" << x << " = ";
	serie << sumatoria;
	if (N == 1) {
		cout << "La serie sería: " << serie.str() << sumatoria << "\n";
		cout << "La sumatoria de la serie sería: " << sumatoria << endl;
	}
	else {
		for (int i = 1; i <= N; i++) {
			sumatoria += (1.0 * potencia(x, i)) / (1.0 * factorial(i));
			serie << "+ (" << x << "^" << i << "/" << i << "!) ";
		}
		cout << "La serie seria: " << serie.str() << "\n";
		cout << "La sumatoria de la serie sería: " << sumatoria << endl;
	}
}

// Verificando divisores
void divisor() {
	// Limpiando pantalla
	system("cls");
	// Presentacion
	cout << "=================================================\n";
	cout << "    DIVISIBILIDAD DE NUMEROS ENTEROS POSITIVOS\n";
	cout << "=================================================\n";
	// Proceso
	int num1, num2;
	do {
		cout << "Índique el primer número: "; cin >> num1;
		cout << "Índique el segundo número: "; cin >> num2;
		if (num1 < 0 or num2 < 0) {
			cout << "Deben ser números enteros positvos, indique nuevamente\n";
		}
	} while (num1 < 0 or num2 < 0);
	if (num1 % num2 == 0) {
		cout << num2 << " es divisor de " << num1 << endl;
	}
	else if (num2 % num1 == 0) {
		cout << num1 << " es divisor de " << num2 << endl;
	}
	else {
		cout << "Los numeros indicados no son divisibles\n";
	}
}

// Raices de una ecuacion cuadrática
void raices_ecuacion() {
	// Limpiando pantalla
	system("cls");
	// Presentacion
	cout << "=================================================\n";
	cout << "    RAICES DE UNA ECUACION CUADRÁTICA\n";
	cout << "			ax^2 + bx + c = 0\n";
	cout << "=================================================\n";
	// variables
	int a, b, c, disc;
	pair <float, float> raices;
	// Proceso
	cout << "Índique el valor de a: "; cin >> a;
	cout << "Índique el valor de b: "; cin >> b;
	cout << "Índique el valor de c: "; cin >> c;
	disc = pow(b, 2) - (4.0 * a * c);
	if (disc < 0) {
		cout << "La ecuacion tiene soluciones imaginarias" << endl;
	}
	else if (disc == 0) {
		cout << "La solucion única es: " << ((-1.0 * b) / (2.0 * a)) << endl;
	}
	else {
		raices.first = ((-1.0 * b) + disc) / (2.0 * a);
		raices.second = ((-1.0 * b) - disc) / (2.0 * a);
		cout << "La primera raíz sería: " << raices.first << "\n";
		cout << "La segunda raíz sería: " << raices.second << "\n";
	}
}

// Sumando digitos
void suma_digitos() {
	// Limpiando pantalla
	system("cls");
	// Presentacion
	cout << "================================================================\n";
	cout << "     NUMEROS CON SUMA DE CIFRAS IGUAL A UN NUMERO PRIMO\n";
	cout << "================================================================\n";
	// Variable
	int N, sumacf;
	int* numeros = NULL;
	// Proceso 1: Creando la lista original de numeros
	cout << "Índique el valor de N: "; cin >> N;
	numeros = new int[N];
	for (int i = 0; i < N; i++) {
		numeros[i] = 100 + round(rand() % 900);
	}
	cout << "Los números generados fueron: ";
	for (int i = 0; i < N; i++) {
		cout << numeros[i] << " ";
	}
	cout << "\n";
	// Proceso 2: Lista de suma de cifras prima
	for (int i = 0; i < N; i++) {
		sumacf = sumaCifras(numeros[i]);
		if (!numeroPrimo(sumacf)) {
			numeros[i] = 0;
		}
	}
	cout << "La lista de numeros cuya suma de cifras es un numero primo es: ";
	for (int i = 0; i < N; i++) {
		if (numeros[i] != 0) {
			cout << numeros[i] << " ";
		}
	}
	cout << "\n";
	delete[] numeros;
}

// Salir
void salir() {
	// Limpiar pantalla
	system("cls");
	// Proceso
	cout << "====================\n";
	cout << "FIN DEL PROGRAMA\n";
	cout << "Adiosin" << endl;
}

// Programa Principal
int main() {
	// configuracion
	system("color 0B");
	setlocale(LC_ALL, "Spanish");
	srand(time(NULL));
	// variables
	int op;
	// Proceso
	do {
		menuPrincipal();
		op = leerOpcion();
		switch (op)
		{
		case 1: aproximar_exp(); break;
		case 2: divisor(); break;
		case 3: raices_ecuacion(); break;
		case 4: suma_digitos(); break;
		case 5: salir(); break;
		}
		system("pause");
	} while (op != 5);
	// Finalizacion
	return 0;
}