#include <stdio.h>
#include <stdlib.h>
int total_conta(int valor){
	int total=7;
	if(valor>=11 && valor<=30){
		total=total + (valor-10);
	}
	if(valor>=31 && valor<=100){
		total= total + 20 +(valor-30)*2;
	}
	if(valor>=101){
		total= total + 160 +(valor-100)*5;
	}
		
	return total;
}
int main(){

	int n,conta;
	scanf("%d",&n);
	conta = total_conta(n);
	printf("%d\n",conta);

	return 0;
}
