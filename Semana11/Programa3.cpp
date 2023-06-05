#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "ClaseAlumno.h"
using namespace std;

int n;
Alumno arreglo[100];
string nombArchivo = "Notas.txt";

void cargarDatos(){
	ifstream archivo;
	string texto;
	n = 0;
	cout << "Cargando archivo...";
	archivo.open(nombArchivo,ios::in);
	while(!archivo.eof()){
		getline(archivo,texto);
		if(texto.length() > 0){
			arreglo[n].cargarDatos(texto);
			n++;	
		}
	}
	archivo.close();
	cout << "Fin de carga de archivo...";
}
void procesarDatos(){
	cout << "n=" << n << endl;
	for(int i=0; i<n; i++){
		arreglo[i].calcPromedio();
		arreglo[i].reporte();
	}
}
void actualizarArchivo(){
	ofstream archivo;
	archivo.open(nombArchivo,ios::out);
	for(int i=0; i<n; i++){
		string texto = arreglo[i].obtenerCadenaDatos();
		archivo << texto << endl;
	}
	archivo.close();
}

int main(){
	cargarDatos();
	procesarDatos();
	actualizarArchivo();
}

