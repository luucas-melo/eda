#include <stdio.h>
#include <stdlib.h>
void troca(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void ordena (int *v, int n) { 
  int i, j, min, aux;
	if(n <= 1){
		return;
	  ordena(v, n-1); 
	int ultimo = v[n-1]

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
