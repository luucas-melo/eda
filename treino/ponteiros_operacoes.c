#include <stdio.h>

int main() {
	int v[5] ={1, 2, 3, 4, 5};
	int *ptr;
	ptr =v;
	
	printf ("ptr+1: %ld\n",ptr+1);
	printf ("(*ptr)+1: %d\n",(*ptr)+1);
	printf ("*(ptr+1): %d\n",*(ptr+1));
	printf ("*(ptr+10): %ld\n",*(ptr+10));
	return 0;
}
