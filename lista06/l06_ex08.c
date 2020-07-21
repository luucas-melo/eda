#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double distancia(int x, int y){
	double dis = x*x + y*y;
	
	return dis;
}
int busca_binaria(int *v, int n, int x) {
	int e = -1;
	int d = n;
	int m;
	while(e < d-1){
		m = (e+d)/2;
		if(v[m] < x)
			e = m;
		else
			d = m;
	}
	return d;
}

int main () {
	int c, t;
	int i;
	int *raio, x, y;
	double dis;
	int pontos = 0;
	int busca;
	scanf ("%d %d", &c, &t);
	raio = malloc( c * sizeof(int));
	for(i = 0; i < c; i++) {	
		scanf("%d", &raio[i]);
	}
	for(i = 0; i < c; i++) {	
		raio[i]  = raio[i] * raio[i];
	}
	int k;
	for(i = 0; i < t; i++) {
		scanf("%d %d", &x, &y);
		dis = distancia(x, y);
		busca = (raio, c, dis);
	
	}
	
    printf ("%d\n", pontos);
	free(raio);
	return 0;
}
/*
3 10
1
2
5
0 0
-2 0
0 -2
3 -4
-4 -3
3 1
6 2
-1 2
-5 -2
1 -1
saida 13
3 6
1
2
5
1 0
0 3
-5 0
0 0
-3 -3
1 1

saida 11
*/
