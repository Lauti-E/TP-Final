#ifndef PIEZA_H
#define PIEZA_H

#include <ctime>

class Pieza{
protected:
	int x = 5;
	int y = 2;
	
	int figura[4][4];
	
	int colores[4] = {14, 5, 4, 15};
	int color;
	
	clock_t tiempo;
	clock_t paso;
	
	int velocidad = 1;
public:
	Pieza();
	void dibujar();
	void borrar();
	
	int getX(){return x;}
	int getY(){return y;}
	int getColor();
	
	bool bajarFig(); 
};

#endif

