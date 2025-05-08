#ifndef SORTEO_H
#define SORTEO_H
void estafa(int &saldoFinal, int cantApuesta, int copa);
void gano(int &saldoFinal, int cantApuesta, int copa);
void perdio(int &saldoFinal, int cantApuesta, int copa);
int generarCopa(int i);
int apuesta(int saldoFinal);

#endif
