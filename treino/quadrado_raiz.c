#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void calcula(double num, double *quadrado, double *raiz) {
*quadrado = num*num;
*raiz = sqrt(num);

}
int main() {
	double n=5;
	double quadrado, raiz;
	calcula(n, &quadrado, &raiz) ;
	printf ("%lf %lf", quadrado, raiz);

	return 0;
}
