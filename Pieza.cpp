#include "Pieza.h"

#include <conio2.h>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

Pieza::Pieza(){
	int c = rand()%4;
	color = colores[c];
	
	paso = CLOCKS_PER_SEC/velocidad;
	tiempo = clock();
}

int Pieza::getColor(){
	return color;
}

void Pieza::dibujar(){
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 4;j++){
			textcolor(color);
			gotoxy(x,y+j);
			cout<<(char)figura[i][j];
		}
	}
}

void Pieza::borrar(){
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 4;j++){
			textcolor(color);
			gotoxy(x,y+j);
			cout<<" ";
		}
	}
}
