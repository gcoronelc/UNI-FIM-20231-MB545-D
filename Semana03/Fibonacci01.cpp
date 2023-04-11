// Creditos: Robert Kevin Barrios Berna

#include <iostream>
#include <sstream> 
#include <cmath>
#include <locale>

using namespace std;

int main()
{
    // Variables
    int numeroT, base1, base2, n, suma;
    stringstream serie;
    
    
    // Lectura
    cout << "Indique el numero de terminos de la sucesion: "; cin >> numeroT;
    
    // Proceso
    base1 = 1; base2 = 1; suma = 2;
    serie << base1 << ", ";
    serie << base2 << ", ";
    for (int i=1; i<=numeroT-2; i++) {
        n = base1 + base2;
        suma = suma + n;
        if (i==numeroT-2) {
            serie << n << "\n";
        }
        else {
            serie << n << ", ";
        }
        base1 = base2;
        base2 = n;
    }
    
    // Resultado
    cout << "La serie de Fibonacci es: " << "\n";
    cout << serie.str() << "\n";
    cout << "La suma de la serie es: " << suma << "\n";
    cout << "El termino " << numeroT << " es: " << n << "\n";
    return 0;
}

