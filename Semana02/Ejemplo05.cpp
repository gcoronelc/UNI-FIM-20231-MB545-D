
/*
Leer el numero de un mes, y determinar cuantos dias tiene.
*/

#include <iostream>

using namespace std;

int main()
{
    // Variables
    int nroMes, dias;
    // Lectura de datos
    cout << "LECTURA DE DATOS\n";
    cout << "===================================\n";
    cout << "nroMes: "; cin >> nroMes;
    // Proceso
    switch(nroMes){
        case 4: case 6: case 9: case 11:
            dias=30;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias=31;
            break; 
        case 2:
            dias=28;
            break;
    }
    // Reporte
    cout << "\n";
    cout << "REPORTE\n";
    cout << "===================================\n";
    cout << "Numero de mes: " << nroMes << "\n";
    cout << "Dias: " << dias << "\n";
    return 0;
}