#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int segmento(int a, int b){	
	int cont=0,menor, maior,casa,aux_maior, aux_menor,cont2=0;
	int aux_maior2;
	if(a<b){
		menor = a;
		maior = b;
	}
	else{
		menor = b;
		maior = a;
	}
	aux_menor = menor;
	aux_maior = maior;
	aux_maior2=maior;
	while(aux_menor!=0){
		cont++;
		aux_menor = aux_menor/10;
	}
	while(aux_maior!=0){
		cont2++;
		aux_maior = aux_maior/10;		
	}
	casa = pow(10,cont);
	while(cont2!=0){
		aux_maior2 = aux_maior2%casa;
		maior=maior/10;
		if(aux_maior2==menor)
			return encaixa(aux_maior2,menor);
		aux_maior2 = maior;
		cont2--;
	}	
		return encaixa(aux_maior2,menor);
	
}





