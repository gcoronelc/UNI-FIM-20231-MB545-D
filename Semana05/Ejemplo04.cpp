/*
Desarrollar las siguientes funciones:
- Función fnMcd: Calcula el MCD de 2 numeros enteros.
- Función fnMcm: Calcula el MCM de 2 números enteros.
*/
#include <iostream> 
using namespace std;
int fnMcd (int a, int b){
	//Variable
	int resultado;
	//Proceso
	while(a!=b){
		if (a>b) a=a-b;
		else b=b-a;
	}
	resultado=a;
	//Reporte
	return resultado;
}
int fnMcm (int a, int b){
	//Variable
	int resultado;
	//Proceso
	resultado=(a*b)/fnMcd(a,b);
	//Reporte
	return resultado;
	
}
int main() {
	cout << "MCD de 15 y 20: " << fnMcd(15,20) << endl; 
	cout << "MCM de 15 y 20: " << fnMcm(15,20) << endl;

	return 0;
}
