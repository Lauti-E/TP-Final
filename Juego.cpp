#include "Juego.h"
#include "General.h"

Juego::Juego(){}

void Juego::play(){
	General G;
	G.mostrarTablero();
	G.randomFig();
}
