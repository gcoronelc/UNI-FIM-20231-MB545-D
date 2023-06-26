/*
En este ejemplo se ve la herencia en un ejemplo sencillo.
La clase hija puede crear sus propios metodos ampliando la funcionalidad.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Clase1{
	
	public:
		Clase1(){
		}
		int sumar(int n1, int n2){
			return (n1+n2);
		}
	
};

class Clase2 : protected Clase1{
	
	public:
		
		Clase2(){
		}
		
		int producto(int n1, int n2){
			return (n1*n2);
		}
	
};

class Clase3 : public Clase2{
	
	public:
		
		Clase3(){
		}
		
		int otraSuma(int n1, int n2){
			return this->sumar(n1,n2);
		}
	
};


int main(){

	Clase3 objeto;
	
	//cout << "6 + 7 = " << objeto.sumar(6,7) << endl;
	cout << "6 + 7 = " << objeto.otraSuma(6,7) << endl;
	cout << "6 * 7 = " << objeto.producto(6,7) << endl;
	
	system("pause");
	return 0;
}
