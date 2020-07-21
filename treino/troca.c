#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void troca_int(int *a, int *b) {
	int tmp;	
	tmp = *a;
	*a = *b;
	*b = tmp;
}


void troca_str (char **x, char **y) {
	char *tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;	
}

int main() {
	int a = 5, b = 3;
	char *s1 = malloc(50*sizeof(char));
	char *s2 = malloc(50*sizeof(char));
	
	strcpy(s1, "Teste str");
	strcpy(s2, "Teste str2");
	troca_int(&a,&b);
	
	troca_str(&s1,&s2);

	printf("a %d b %d\n",a,b);
	printf("s1 %s s2 %s\n",s1,s2);
	return 0;
}
