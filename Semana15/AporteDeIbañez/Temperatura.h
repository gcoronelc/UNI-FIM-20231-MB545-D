#pragma once

#include "tipo_conv.h"

//conversión de TEMPERATURA pasando por Celsius
//Victor Ibañez Aliaga
class Temperatura {

public:

	//temp: temperatura
	//tipo: tipo de conversión, incluir enumerado "tipo_conv.h"
	static double conv(double temp, tipo_conv tipo) {
		switch (tipo) {
		case CTOF: return (9  * temp) / 5 + 32;
		case FTOC: return (5 * (temp - 32)) / 9;
		case CTOK: return temp + 273.15;
		case KTOC: return temp - 273.15;
		case CTOR: return (9 * (temp + 273.15)) / 5;
		case RTOC: return ((5 * temp) / 9) - 273.15;
		}
	}

};