#include <stdio.h>
#include <stdlib.h>
void troca(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void selecao(int *v, int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(v[j] < v[min]) 
         min = j;
     }
     if (v[i] != v[min])
       troca(&v[i], &v[min]);
  }
}
int main () {
	int x[1000];
	int i = 0,j;
	int num;
	while(scanf("%d", &num) != EOF){
		x[i] = num;	
		i++;
	}
	selecao(x, i);
	for(j = 0;j < i-1; j++)
		printf("%d ",x[j]);
	printf("%d\n",x[j]);
	return 0;
}
