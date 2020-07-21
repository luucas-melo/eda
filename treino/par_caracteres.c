#include <stdio.h>


int par (char *string) {
	if(*string == '\0')
		return 0;
	else {
		if (*string == *(string +2)){
			return par(string+1)+1;
		}
		par(string+1);	
	}
	
}


int main () {
	char string[201];
	scanf("%s", string);
	int x = par(string);
	printf("%d\n",x);


	return 0;
}
