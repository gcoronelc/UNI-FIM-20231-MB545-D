/*
Ejemplo 4:
Serie 1: 2, 8, 50, 98, 188, ....
           6  42  48  90 

Se pide la secuencia y la suma hasta el termino indicado por el usuario	     

*/

#include <iostream> 
#include <sstream> 
using namespace std; 
int main() {
	// Variables
	int n, n3, n4, aux1, aux2, temp, suma;
	stringstream serie;
	// Lectura
	cout << "Ingrese el valor de n: "; cin >> n;
	// Proceso
	if(n==1){
		suma = 2;
		serie << 2;
	} 
	if(n==2){
		suma = 2 + 8;
		serie << 2 << "," << 8;
	} 
	if(n>=3){
		suma = 2 + 8 + 50;
		serie << 2 << "," << 8 << "," << 50;
	}
	n3 = 50;
	aux1 = 6;
	aux2 = 42;
	for(int i=4; i<=n; i++){
		// Elemento 4
		n4 = n3 + aux1 + aux2;
		serie << "," << n4;
		suma += n4;
		// Proximo elemento
		temp = aux1 + aux2;
		aux1 = aux2;
		aux2 = temp;
		n3 = n4;
	}
	// Reporte
	cout << "Suma: " << suma << "\n";
	cout << "Serie: " << serie.str() << "\n";
	return 0;	
}
