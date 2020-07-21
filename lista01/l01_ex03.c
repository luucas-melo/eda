#include <stdlib.h>
#include <stdio.h>

int main(){
	int vet[4],maior;
	for(int i=0;i<4;i++){
		scanf("%d",&vet[i]);
	}
	maior = vet[0];
	if(vet[1]>=vet[0] && vet[1]>=vet[2] && vet[1]>=vet[3])
		maior = vet[1];
	else if(vet[2]>=vet[0] && vet[2]>=vet[1] && vet[2]>=vet[3])	
		maior = vet[2];
	else if(vet[3]>=vet[0] && vet[3]>=vet[1] && vet[3]>=vet[3])	
		maior = vet[3];
	else 
		maior = vet[4];
	

	printf("%d\n",maior);
	return 0;
}
