#include <stdio.h>
#include <stdlib.h>

int encaixa(int a, int b){
	
	int cont = 0;
	int auxA = a, auxB = b;
	int casas_dec;
	while(b!=0){
		cont++;
		b = b/10;
	}
	casas_dec = pow(10,cont);
	if((auxA%casas_dec) == auxB)
		return 1;
	else
		return 0;
}
