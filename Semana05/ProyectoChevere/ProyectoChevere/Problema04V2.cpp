// Victor Ibañez

#include <iostream>
#include <vector>

using namespace std;

//función que retorna el menor entero de un vector de enteros.
int menor_elemento(vector<int> v) {
	int menor = v[0];
	for (int i = 1; i < v.size(); i++) {
		menor = (v[i] < menor) ? v[i] : menor;
	}
	return menor;
}

//función que calcula el promedio de un conjunto de enteros eliminando el menor entero
double promedio_menor_anul(vector<int> v) {
	double suma = 0;
	for (int i = 0; i < v.size(); i++) {
		suma = suma + v[i];
	}
	return (suma - menor_elemento(v)) / (v.size() - 1);
}

int main() {
	//configuración
	setlocale(LC_ALL, "");
	//declaración de variables
	vector<int> notas;
	//lectura de datos
	int new_nota;
	for (int i = 1; i <= 5; i++) {
		cout << "Introducir nota " << i << ": ";
		cin >> new_nota;
		notas.push_back(new_nota);
	}
	//reporte
	cout << "Nota menor: " << menor_elemento(notas) << endl;
	cout << "Promedio con la nota menor anulada: " << promedio_menor_anul(notas) << endl;

	return 0;
}