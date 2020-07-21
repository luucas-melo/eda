#include <stdio.h>
void troca(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int x,y;
	scanf ("%d %d", &x, &y);
	troca(&x,&y);
	
	printf("x: %d y: %d\n", x, y);


	return 0;
}
