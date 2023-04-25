// Victor Ibañez


#include <iostream>
#include <string>

using namespace std;

/*Función que retorna bool true si el parámetro entero n es primo
y bool false si el parámetro n no es primo. Retorna false si el
parámetro es negativo o 0.*/

bool es_primo(int n) {
	//retorna falso para números enteros menores a 2 (negativos) o para cualquier número par.
	if (n < 2 or (n % 2 == 0 and n != 2)) {
		return false;
	}
	//retorna verdadero para el número 2
	else if (n == 2) {
		return true;
	}
	/*para los enteros impares, hace un bucle desde el número 3 hasta el impar inmediatamente
	menor a la raíz cuadrada del número, si encuentra un divisor, retorna falso; si no encuentra
	ninguno, retorna verdadero*/
	else {
		for (int i = 3; i <= pow(n, 0.5); i = i + 2) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}

bool es_primo2(int n) {
	// Variables
	bool primo;
	int contador;
	// Proceso
	contador = 0;
	for (int i = 1; i <= n; i++) {
		contador += (n % i == 0) ? 1 : 0;
		if(contador>2) {
			break;
		}
	}
	primo = (contador == 2);
	// Reporte
	return primo;
}


int main01() {
	//configuración
	setlocale(LC_ALL, ""); //permite imprimir caracteres especiales en español.
	//declaración de variables
	int num;
	//lectura de datos
	cout << "Introducir un número entero: ";
	cin >> num;
	//proceso
	string result = (es_primo2(num) ? "El número es primo." : "El número no es primo");
	//reporte
	cout << "\n" << result;

	return 0;
}
