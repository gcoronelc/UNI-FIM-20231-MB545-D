
/*
Calcular el promedio de un estudiante.
Son 2 notas y la nota minima aprobatoria es 14.
*/

#include <iostream>

using namespace std;

int main()
{
    // Variables
    int nota1, nota2, promedio;
    string condicion;
    // Lectura de datos
    cout << "LECTURA DE DATOS\n";
    cout << "===================================\n";
    cout << "Nota 1: "; cin >> nota1;
    cout << "Nota 2: "; cin >> nota2;
    // Proceso
    promedio = (nota1 + nota2) / 2;
    if(promedio>=14) condicion = "Aprobado";
    else condicion = "Desaprobado";
    // Reporte
    cout << "\n";
    cout << "REPORTE\n";
    cout << "===================================\n";
    cout << "Promedio: " << promedio << "\n";
    cout << "Condición: " << condicion << "\n";
    return 0;
}
