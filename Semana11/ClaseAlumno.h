#include <iostream>
#include "Libreria2023.h"
using namespace std;

class Alumno{
	private:
		int id;
		string nombre;
		int nota1;
		int nota2;
		int promedio;
	public:
		Alumno(){
			this->id = 0;
			this->nombre = "";
			this->nota1 = 0;
			this->nota2 = 0;
			this->promedio = 0;
		}
		Alumno(int id,string nombre, int nota1, int nota2){
			this->id = id;
			this->nombre = nombre;
			this->nota1 = nota1;
			this->nota2 = nota2;
			this->promedio = 0;
		}
		void calcPromedio(){
			this->promedio = (this->nota1 + this->nota2)/2;
		}
		void reporte(){
			cout << "\n";
			cout << "Codigo: " << this->id << "\n";
			cout << "Nombre: " << this->nombre << "\n";
			cout << "Nota 1: " << this->nota1 << "\n";
			cout << "Nota 2: " << this->nota2 << "\n";
			cout << "Promedio: " << this->promedio << "\n";
		}
		void cargarDatos(string datos){
			vector<string> valumno = split(datos,'|');
			this->id = stoi(valumno[0]);
			this->nombre = valumno[1];
			this->nota1 = stoi(valumno[2]);
			this->nota2 = stoi(valumno[3]);
		}
		string obtenerCadenaDatos(){
			string cadena = "";
			cadena += to_string(this->id)+"|";
			cadena += this->nombre+"|";
			cadena += to_string(this->nota1)+"|";
			cadena += to_string(this->nota2)+"|";
			cadena += to_string(this->promedio);
			return cadena;
		}
};


