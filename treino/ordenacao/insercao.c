#include <stdio.h>
#include <stdlib.h>
void troca(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void insercao (int *v, int n) {
	for (int i = 1;i < n;i++) 
		for (int j = i; j > 0 && v[j] < v[j-1];j--)			
			troca (&v[j], &v[j-1]);
}
void insercao_rec (int *v, int n, int i) {
	if (i !=0){
		insercao_rec(v,n,i-1);
		for (int j = i; j > 0 && v[j] < v[j-1];j--)			
			troca (&v[j], &v[j-1]);
	}
}

int main () {
	int v[5] = {3, 2, -3 , 4, 1};
	
	insercao_rec(v, 5,5);
	for(int i = 0; i<5;i++)
		printf("%d ", v[i]);

	return 0;
}
