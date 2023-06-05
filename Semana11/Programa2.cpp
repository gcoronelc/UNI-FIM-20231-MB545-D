#include <iostream>
#include "ClaseAlumno.h"
using namespace std;

int main(){
	
	Alumno a1 = Alumno(55,"Gustavo",18,20);
	a1.calcPromedio();
	a1.reporte();
	
	Alumno a2(56,"Robert",16,18);
	a2.calcPromedio();
	a2.reporte();
	
	return 0;
}
