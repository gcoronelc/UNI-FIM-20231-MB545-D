/*
Ejemplo 1
Mostrar los numeros pares entre m y n.
*/

#include <iostream> 
#include <sstream> 
using namespace std; 
int main() {
	// Variables
	int m, n;
	stringstream resultado;
	// Lectura
	cout << "Valor de m: "; cin >> m;
	cout << "Valor de n: "; cin >> n;
	// Proceso
	resultado << "Resultado: ";
	for(int i=m; i<=n; i++){
		if (i%2==0){
			resultado << i << "\t";
		}
	} 
	// reporte
	cout << resultado.str() << "\n";
}
