#include<iostream>

int generarCopa(int i){// es una funcion que genera un numero del 1 al 3.
	return (i%3)+1;
}
	
void estafa(int &saldoFinal, int cantApuesta, int copa){
	saldoFinal -= cantApuesta;
	switch(copa){
	case 1: 
		printf("  O O\n");
		break;
	case 2: 
		printf("O   O\n");
		break;
	case 3:
		printf("O O  \n");
		break;
	};
	printf("No ha acertado\n");
	printf("Saldo: %d", saldoFinal);
}
	
void juego(int &saldoFinal, int cantApuesta, int copa, bool gano){
	switch(copa){
	case 1: 
		printf(". O O\n");
		break;
	case 2: 
		printf("O . O\n");
		break;
	case 3:
		printf("O O .\n");
		break;
	};
	
	if (gano){
		saldoFinal += cantApuesta;
		printf("Ha acertado\n");
		printf("Saldo: %d", saldoFinal);
	}else{
		saldoFinal -= cantApuesta;
		printf("No ha acertado\n");
		printf("Saldo: %d", saldoFinal);
	}
}
	
int apuesta(int saldoFinal){
	int cantidad;//cantidad que apuesta el usuario.
	
	do{
		scanf("%d", &cantidad);
	} while(cantidad < 0 || cantidad > saldoFinal);
	return cantidad;
}
