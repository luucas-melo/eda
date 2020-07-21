#include <stdio.h>
#include <stdlib.h>
int busca_binaria(int *v, int n, int x){
	int e = -1;
	int d = n;
	int m;
	int encontrado = 0;
	int k;
	while (e < d-1) {
		m = (e+d)/2;
		if(v[m] == x) 
			encontrado = 1;
		if(v[m] < x)
			e = m;
		else
			d = m;
	}
	if(encontrado)
		return d;
	return -1;
	
}
void troca (int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int insercao (int *v, int n) {
	for (int i = 1;i < n;i++) 
		for (int j = i; j > 0 && v[j] < v[j-1];j--)			
			troca (&v[j], &v[j-1]);
	
}	
int main () {
	int m,n, *v;
	int i, num;
	scanf("%d %d", &n, &m);
	v = malloc (n* sizeof (int));
	for(i = 0;i <n;i++){
		scanf("%d", &v[i]); 
	}
	insercao(v, n);
	for(i = 0;i <m;i++){
		 scanf("%d", &num);
		 printf("%d\n",busca_binaria(v, n, num));
	}
	return 0;
}
