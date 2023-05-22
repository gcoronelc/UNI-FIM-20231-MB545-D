#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

struct Estudiante{
	string nombre;
	int nota1;
	int nota2;
	int promedio;
	string condicion;
};

Estudiante lineaToEstructura(string datos) {
	Estudiante objeto;
	int posicion = 0, nroCampo = 0;
	string dato;
	cout << datos << endl;
	while( datos.size() > 0){
		posicion = datos.find(",");
		nroCampo++;
		if(posicion > 0){
			dato = datos.substr(0, posicion);
			datos.erase(0, posicion + 1);
		} else {
			dato = datos;
			datos = "";
		}
		cout << dato << "      " << endl;
		switch (nroCampo) {
			case 1: objeto.nombre = dato; break;
			case 2: objeto.nota1 = stoi(dato); break;
			case 3: objeto.nota2 = stoi(dato); break;
		}	
	}
	return objeto;
}

void actualizarArchivo(Estudiante lista[]) {
	
}

int main(){
	
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	wstring strW = L"ARREGLO DE ESTRUCTURAS";
	//SetConsoleTitle(strW.c_str());
	
	
	// Variables
	Estudiante lista[100];
	int contador;
	char rpta;
	ifstream archivo;
	string texto;
	
	// Abrir el archivo en modo lectura
	archivo.open("Alumnos.txt",ios::in);
	
	// Validar
	if(archivo.fail()){
		cout << "No se puede abrir el archivo.\n";
		exit(1);
	}
	
	// Inicializar variables
	contador = 0;
	
	
	// Leer estudiantes
	while(!archivo.eof()){
		getline(archivo,texto);
		lista[contador]=lineaToEstructura(texto);
		contador++;
	}
	
	
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
	
	// Actualizar Archivo
	actualizarArchivo(lista);
		
	return 0;
}
