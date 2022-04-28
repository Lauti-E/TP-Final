#include "Pieza.h"
#include "EleIzq.h"

#include <conio2.h>
#include <iostream>
using namespace std;

EleIzq::EleIzq(){
	
	figura[0][0] = 0;
	figura[0][1] = 219;
	figura[0][2] = 219;
	figura[0][3] = 0;
	
	figura[1][0] = 0;
	figura[1][1] = 0;
	figura[1][2] = 219;
	figura[1][3] = 0;
	
	figura[2][0] = 0;
	figura[2][1] = 0;
	figura[2][2] = 219;
	figura[2][3] = 0;
	
	figura[3][0] = 0;
	figura[3][1] = 0;
	figura[3][2] = 0;
	figura[3][3] = 0;
	
	int contador = 18;
	
	while(contador > 0){
		if(tiempo + paso < clock()){
			textcolor(color);
			dibujar();
			y++;
			contador--;
			tiempo = clock();
		}
	}
}
