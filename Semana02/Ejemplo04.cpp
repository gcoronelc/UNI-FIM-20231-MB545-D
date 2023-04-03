
/*
Calcular el promedio de un estudiante.
Son 2 notas y la nota minima aprobatoria es 14.
Sistema 1, ambas notas tienen el mismo peso.
Sistema 2, nota 1 tiene el doble de peso.
Sistema 3, nota 2 tiene el doble de peso.
*/

#include <iostream>

using namespace std;

int main()
{
    // Variables
    int nota1, nota2, promedio, sistema;
    string condicion;
    // Lectura de datos
    cout << "LECTURA DE DATOS\n";
    cout << "===================================\n";
    cout << "Nota 1: "; cin >> nota1;
    cout << "Nota 2: "; cin >> nota2;
    cout << "Sistema (1,2,3): "; cin >> sistema;
    // Proceso
    switch(sistema){
        case 1:
            promedio = (nota1 + nota2) / 2;
            break;
        case 2:
            promedio = (2*nota1 + nota2) / 3;
            break; 
        case 3:
            promedio = (nota1 + 2*nota2) / 3;
            break;
    }
    condicion = (promedio>=14)?"Aprobado":"Desaprobado";
    // Reporte
    cout << "\n";
    cout << "REPORTE\n";
    cout << "===================================\n";
    cout << "Promedio: " << promedio << "\n";
    cout << "Condición: " << condicion << "\n";
    return 0;
}