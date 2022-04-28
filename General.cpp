#include "General.h"
#include "EleIzq.h"
#include "Pieza.h"

#include <iostream>
#include <conio2.h>
using namespace std;

General::General(){}

void General::mostrarTablero(){
	for(int largo = 0;largo < 21;largo++){
		cout<<endl;
		for(int ancho = 0;ancho < 12;ancho++){
			if(ancho == 0 || ancho == 11 || largo == 20){
				textcolor(GREEN);
				tablero[largo][ancho] = 8;
			}else{
				textcolor(BLUE);
				tablero[largo][ancho] = 0;
			}
			cout<<tablero[largo][ancho];
		}
	}
}

void General::randomFig(){
	EleIzq();
}
