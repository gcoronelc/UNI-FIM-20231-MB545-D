#include <iostream>
#include "logica.h"
using namespace std;

int main(){
	
	//Logica logica; // Tiene sentido si la clase solo tiene metodos estatucos?
	
	cout << "80°C equivale a " << Logica::converCelToFah(80) << "°F" << endl;
	
	return 1;
}

