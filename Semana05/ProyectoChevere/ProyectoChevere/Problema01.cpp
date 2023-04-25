// Victor Iba�ez


#include <iostream>
#include <string>

using namespace std;

/*Funci�n que retorna bool true si el par�metro entero n es primo
y bool false si el par�metro n no es primo. Retorna false si el
par�metro es negativo o 0.*/

bool es_primo(int n) {
	//retorna falso para n�meros enteros menores a 2 (negativos) o para cualquier n�mero par.
	if (n < 2 or (n % 2 == 0 and n != 2)) {
		return false;
	}
	//retorna verdadero para el n�mero 2
	else if (n == 2) {
		return true;
	}
	/*para los enteros impares, hace un bucle desde el n�mero 3 hasta el impar inmediatamente
	menor a la ra�z cuadrada del n�mero, si encuentra un divisor, retorna falso; si no encuentra
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
	//configuraci�n
	setlocale(LC_ALL, ""); //permite imprimir caracteres especiales en espa�ol.
	//declaraci�n de variables
	int num;
	//lectura de datos
	cout << "Introducir un n�mero entero: ";
	cin >> num;
	//proceso
	string result = (es_primo2(num) ? "El n�mero es primo." : "El n�mero no es primo");
	//reporte
	cout << "\n" << result;

	return 0;
}
