#include <stdio.h>
#include <stdlib.h>

int main(){

	int c;
	int a;
	int x;
	int resto;
	scanf ("%d", &c);
	scanf("%d", &a);
	x = a / (c-1);
	resto = a % (c-1);
	if (resto>0)
		x++;
	printf("%d\n", x);
	return 0;
}
