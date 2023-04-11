// Creditos: victor ibañez

#include <iostream>
#include <sstream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "");

    //VARIABLES
    stringstream secuencia;
    int n, aux1 = 1, aux2 = 1, aux0;

    //LECTURA DE DATOS
    cout << "Introducir cantidad de términos: ";
    cin >> n;

    //PROCESO
    secuencia << 1 << endl << 1 << endl;

    if (n > 2) {
   	 for (int i = 3; i < n + 1; i++) {
   		 secuencia << aux1 + aux2 << endl;
   		 aux0 = aux1;
   		 aux1 = aux2;
   		 aux2 = aux0 + aux2;
   	 }
    }

    //REPORTE
    cout << secuencia.str();

    return 0;
}

