#pragma once

enum TConvert
{
	CTOF, CTOK, CTOR,
	FTOC, FTOK, FTOR,
	KTOC, KTOF, KTOR,
	RTOC, RTOF, RTOK,
};


class CLogica {
private:
	// Constructor privado
	CLogica(){}
public:
	// Método de clase
	static float convert(TConvert tipo, float dato) {
		float resultado = 0;
		switch (tipo) {
		case CTOF: resultado = dato*9/5+32.0; break;
		case CTOK: resultado = 2; break;
		case CTOR: resultado = 3; break;
		case FTOC: resultado = 4; break;
		case FTOK: resultado = 5; break;
		case FTOR: resultado = 6; break;
		case KTOC: resultado = 7; break;
		case KTOF: resultado = 8; break;
		case KTOR: resultado = 9; break;
		case RTOC: resultado = 10; break;
		case RTOF: resultado = 11; break;
		case RTOK: resultado = 12; break;
		}
		return  resultado;
	}

};




