
/*
Desarrollar un programa que genere 4 numeros aleatorios y determine el mayor.
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    // Variables
    int operacion, num1, num2;
    // Lectura
    cout << "OPERACION";
    cout << "--------------------------------\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Resto\n";
    cout << "--------------------------------\n";
    cout << "Operacion: "; cin >> operacion;
    cout << "Numero 1: "; cin >> num1;
    cout << "Numero 2: "; cin >> num2;
    // Proceso
    
    // Reporte
    cout << "\n";
    cout << "Reporte\n";
    cout << "--------------------------------\n";
    
    return 0;
}
