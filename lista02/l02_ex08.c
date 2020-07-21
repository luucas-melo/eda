#include <stdlib.h>
#include <stdio.h>

int main() {
	int n, k, x, j, i, menor;
	int tipo[1001];

	scanf ("%d %d", &n, &k);
	for (j = 0;j < k ; j++) {
		tipo[j] = 0;
	}
	for (i = 0; i < n; i++) {
		scanf ("%d", &x);
		tipo[x-1]++;
	}	 
	menor = n;
	for (i = 0; i < k; i++) {
		if (tipo[i] < menor)
			menor = tipo[i];
	//printf("tipo i %d\n", tipo[i]);
	//printf("%d\n", menor);
	}
	printf("%d\n", menor);

	return 0;
}	
