#include <stdio.h>
#include <stdlib.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
	double velMedia;
	velMedia = distancia/((tB-tA)/3600.0);
	return velMedia;
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
	if(distancia/((tB-tA)/3600.0)>velocidadeMaxima){
		return 1;
	}
	else{
		return 0;
	}

}


