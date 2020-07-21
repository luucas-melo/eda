#include <stdio.h>

int main() {
	int i = 5;
	int *ptr = &i;
	printf ("%ld\n",sizeof(ptr)); // tamanho do ponteiro = 8 pois é um long int

	printf ("*ptr = %d\n", *ptr);
	printf(" ptr = %ld\n", ptr);
	printf(" &ptr = %ld\n", &ptr);

	return 0;
}
