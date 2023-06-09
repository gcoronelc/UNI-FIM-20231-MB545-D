#include <iostream>
#include <windows.h>

using namespace std;

struct Estudiante{
	string nombre;
	int nota1;
	int nota2;
	int promedio;
	string condicion;
};

int main(){
	
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	wstring strW = L"ARREGLO DE ESTRUCTURAS";
	//SetConsoleTitle(strW.c_str());
	
	
	// Variables
	Estudiante lista[100];
	int contador;
	char rpta;
	
	
	// Inicializar variables
	contador = 0;
	
	
	// Leer estudiantes
	do{
		
		cout << endl;
		cout << "ESTUDIANTE " << (contador + 1) << endl;
		cout << "=================================" << endl;
		cout << "Nombre: "; cin >> lista[contador].nombre;
		cout << "Nota 1: "; cin >> lista[contador].nota1;
		cout << "Nota 2: "; cin >> lista[contador].nota2;
		contador++;
		
		cout << endl;
		cout << "Hay otro estudiante (S/N): "; cin >> rpta; 
		
	} while( rpta == 'S' || rpta == 's');
	
	
	// Proceso
	for(int i=0; i<contador; i++){
		lista[i].promedio = (lista[i].nota1 + lista[i].nota2) / 2;
		if (lista[i].promedio>=10) lista[i].condicion = "Aprobado";
		else lista[i].condicion = "Trika";
	}
	
	// Reporte
	cout << "ID \t Nombre \t Nota1 \t Nota2 \t Promedio \t Condición "<< endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	for(int i=0; i<contador; i++){
		cout << (i+1) << "\t";
		cout << lista[i].nombre << "\t";
		cout << lista[i].nota1 << "\t";
		cout << lista[i].nota2 << "\t";
		cout << lista[i].promedio << "\t";
		cout << lista[i].condicion << endl;
	}
		
	return 0;
}
