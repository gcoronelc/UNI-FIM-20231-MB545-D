#include <string>

enum sistema = { A,B,C, };

class Alumno {
public:
	
	int pp, ep, ef;
	
	double prom_final(sistema _sistema) {
		switch (_sistema) {
			case A:
				return (this->pp + this->ep + this->ef) / 3;
			case B:
				return (2 * this->pp + this->ep + this->ef) / 4;
			case C:
				return (this->pp + this->ep + 2 * this->ef) / 4;
		}
	}
	
	string condicion() {
		return (this->prom_final() >= 10) ? "Aprobado" : "Desaprobado";
	}

};
