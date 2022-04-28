#ifndef GENERAL_H
#define GENERAL_H

#include "Pieza.h"

class General{
private:
	int tablero[21][11];
public:
	General();
	void mostrarTablero();
	void randomFig();
};

#endif

