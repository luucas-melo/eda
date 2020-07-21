#include <stdio.h>
#include <stdlib.h>
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
	
}
int main () {
	int m,n, *v;
	int i, num;
	scanf("%d %d", &n, &m);
	v = malloc (n* sizeof (int));
	for(i = 0;i <n;i++){
		scanf("%d", &v[i]); 
	}
	
	
	for(i = 0;i <m;i++){
		 scanf("%d", &num);
		 printf("%d\n",busca_binaria(v, n, num));
	}
	return 0;
}
