#include <stdlib.h>
#include <stdio.h>

int main() {
	int *p1;
	int *p2;
	int x = 3;
	int n;
	scanf ("%d", &n);
	p2 = malloc(n*sizeof(int)) ;
	for(int i = 0;i <n; i++) {
		printf ("%d\n", *(p2+i));
		
	}
	printf ("%d\n", *p2);
	
	return 0;
}
