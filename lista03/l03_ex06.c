#include <stdio.h>
void contrario(char *s){
	if (*s) {
		contrario(s+1);
		printf ("%c",*s);	
	}
}

int main() {
	char x[500];
	scanf ("%s",x);
	contrario(x);
	printf("\n");
	return 0;
}
