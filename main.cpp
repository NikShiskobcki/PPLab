#include<iostream>
#include "sorteo.h"
using namespace std;

int main(int argc, char *argv[]) {
	int saldoInicial = 1000;
	int ronda = 0;
	int rGanadasSeguidas = 0; // RONDAS GANADAS SEGUIDAS.
	int saldoFinal = saldoInicial;
	int posElegida;// posicion elegida de la copa del usuario
	int cantApuesta; // cantidad que quiera guardar/apostar el usuario.
	int copa;
	
	while (saldoFinal > 0){
		printf("\nO O O\n1 2 3\n");
		printf("Copa?: ");
		scanf("%d",&posElegida);
		printf("Apuesta?: ");
		cantApuesta = apuesta(saldoFinal);
		ronda++;
		
		copa = generarCopa(ronda); 
		
		if(copa == posElegida){
			if(rGanadasSeguidas == 2){
				estafa(saldoFinal, cantApuesta, copa);
				rGanadasSeguidas = 0;
			}else{
				juego(saldoFinal, cantApuesta, copa,true);
				rGanadasSeguidas++;
			}
		}else{
			juego(saldoFinal, cantApuesta, copa,false);
			rGanadasSeguidas = 0;
		}
	}
	printf("\nGracias por jugar");
	
	return 0;
}
