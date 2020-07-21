#include <stdio.h>
     
#define MAXTAM 101     
int main(){
	int a, v, x, y, vetor[MAXTAM], n = 0, i;
	int maior = 0;
 
	scanf ("%d %d", &a, &v);
 
	while (a != 0 && v != 0 ) {
		n++;
 
		for (i=1; i <= a; i++) {
			vetor[i] = 0;
		}
 
		for (i=0; i < v; i++) {
			scanf("%d %d", &x, &y);
			vetor[x]++;
			vetor[y]++;
		}
 
		for (i=1; i <= a; i++) {
			if (vetor[i] >= maior) {
				maior = vetor[i];
			}
		}
 
		printf("Teste %d\n", n);
 
		for (i=1; i <= a; i++) {
			if (vetor[i] == maior) {
				printf("%d ", i);
			}
		}
		printf("\n\n");
 
		scanf("%d %d", &a, &v);
	}
 
	return 0;
}
