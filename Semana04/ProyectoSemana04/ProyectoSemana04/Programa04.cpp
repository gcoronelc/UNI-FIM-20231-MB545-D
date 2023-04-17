#include <iostream> 
#include <vector>
using namespace std;
int main() {

	int datos[][5] = {
		{48,34,87,90,23},
		{48,34,90,23,34},
		{48,34,87,90,23},
		{48,34,87,76,23},
	};


	for (int i = 0; i <= 3; i++) {
		cout << "Fila " << i << ": ";
		for (int j = 0; j <= 4; j++) {
			cout << datos[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "Filas: " << sizeof(datos) / sizeof(datos[0]) << "\n";
	cout << "Columnas: " << sizeof(datos[0]) / sizeof(datos[0][0]) << "\n";

	return 0;
}