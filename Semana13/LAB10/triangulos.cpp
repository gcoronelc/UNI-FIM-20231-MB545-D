#include <cmath>
#include <iostream>

using namespace std;

class Triangulo {
	public:
	
	virtual float calcularPerimetro() = 0;	
	virtual float calcularArea() = 0;
	
};

class TrianguloEquilatero : public Triangulo {
	
	private:
		float lado;
	public:
		
		TrianguloEquilatero(float lado) {
			this->lado = lado;
		}
		
		float getlado() {
			return this->lado;
		}
		
		float calcularPerimetro() {
			return 3 * this->lado;
		}
		float calcularArea() {
			return (pow(lado, 2) * pow(3, 0.5)) / 4;
		}
};

class TrianguloIsoceles : public Triangulo {
	private:
		float ladoComun;
		float base;
	public:
		TrianguloIsoceles(float ladoComun, float base) {
			this->ladoComun = ladoComun;
			this->base = base;
		}
		float getladoComun() {
			return this->ladoComun;
		}
		float getBase() {
			return this->base;
		}
		float calcularPerimetro() {
			return 2 * ladoComun + base;
		}
		float calcularArea() {
			float altura;
			altura = pow(pow(ladoComun,2)-pow((this->base/2),2),0.5);
			return (this->base * altura)/2;
		}
		
};

class TrianguloEscaleno : public Triangulo{
	private:
		float lado1, lado2, lado3;
	public:
		TrianguloEscaleno(float lado1, float lado2, float lado3){
			this ->lado1 = lado1;
			this ->lado2 = lado2;
			this ->lado3 = lado3;
		}
		float getlado1() {
			return this->lado1;
		}
		float getlado2() {
			return this->lado2;
		}
		float getlado3() {
			return this->lado3;
		}
		float calcularPerimetro() {
			return lado1+lado2+lado3;
		}
		float calcularArea() {
			float p;
			p = calcularPerimetro()/2;
			return sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
		}
		
		
};
int main() {
	// Ejemplo Triangulo Equilatero
	TrianguloEquilatero t = TrianguloEquilatero(1);
	
	std::cout << "Lado: " << t.getlado() << std::endl;
	std::cout << "Perimetro: " << t.calcularPerimetro() << std::endl;
	std::cout << "Area: " << t.calcularArea() << std::endl;
	// Ejemplo Triangulo Isoceles
	TrianguloIsoceles ti(5,8);
	cout << "Lado comun: " << ti.getladoComun() << endl;
	cout << "Base: " << ti.getBase() << endl;
	cout << "Perimetro: " << ti.calcularPerimetro() << endl;
	cout << "Area: " << ti.calcularArea() << endl;
	// Ejemplo Triangulo Escaleno
	TrianguloEscaleno Te(1,1,1);
	cout << "Lado 1: " << Te.getlado1() << endl;
	cout << "Lado 2: " << Te.getlado2() << endl;
	cout << "Lado 3: " << Te.getlado3() << endl;
	cout << "Perimetro: " << Te.calcularPerimetro() << endl;
	cout << "Area: " << Te.calcularArea() << endl;
	
	return 0;
}


