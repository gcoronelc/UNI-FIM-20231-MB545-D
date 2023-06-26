/*
En este ejemplo se ilustra la sobre-escritura de metodos.
La clase Cuadrado hereda de la clase Cuadrilatero y sobre-escribe los métodos calcularPerimetro y calculaArea.
La clase Rectangulo hereda de la clase Cuadrilatero y sobre-escribe los métodos calcularPerimetro y calculaArea.
La clase TrapecioRectangular hereda de la clase Cuadrilatero y sobre-escribe los métodos calcularPerimetro y calculaArea.
*/

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

class Cuadrilatero{
	public:
		Cuadrilatero(){
		}
		virtual float calcularPerimetro() = 0; // método abstracto
		virtual float calculaArea() = 0; // método abstracta
};

class Cuadrado : public Cuadrilatero{
	private:
		
		float lado;
	
	public:
		Cuadrado(float _lado){
			lado = _lado;
		}
		float calcularPerimetro(){
			return 4*lado;
		}
		float calculaArea(){
			return lado * lado;
		}
};

class Rectangulo : public Cuadrilatero {
	private:
		float base;
		float altura;
	public:
		Rectangulo(float _base, float _altura){
			base = _base;
			altura = _altura;
		}
		float calcularPerimetro(){
			return 2*(base+altura);
		}
		float calculaArea(){
			return base * altura;
		}
};
class Trapecio : public Cuadrilatero {
	private:
		float base1, base2;
		float altura;
	public:
		Trapecio(float _base1, float _base2, float _altura){
			base1 = _base1;
			base2 = _base2;
			altura = _altura;
		}
		float calcularPerimetro(){
			float hipotenusa;
			hipotenusa = sqrt(pow(base1-base2,2)+pow(altura,2));
			return base1+base2+altura+hipotenusa;
		}
		float calculaArea(){
			
			return (base1+base2)*altura/2;
		}
};



int main(){
	
	Trapecio obj1(10,6,3);
	cout << "Perimetro: " << obj1.calcularPerimetro() << endl;
	cout << "Area: " << obj1.calculaArea() << endl;
	
	Cuadrilatero* arreglo[5];
	arreglo[0] = new Trapecio(5,5,5);
	cout << endl;
	cout << "Perimetro: " << arreglo[0]->calcularPerimetro() << endl;
	cout << "Area: " << arreglo[0]->calculaArea() << endl;
	
	
	system("pause");
	return 0;
}
