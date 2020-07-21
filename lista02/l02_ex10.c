#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
	char nome[100], email[100], unb[7] = "@unb.br";
	int i = 0, j = 0, espaco =0, x =0;

	scanf ("%[^\n]s",nome);
	
	while (nome[i] != '\0') {
		if(nome[i] == ' '){
			nome[i] = '.';
			espaco =i;	
		}
		i++;
	}
	while (nome[j] != '.' && nome[j]!='\0') {
		email[j] = tolower(nome[j]);
		j++;
	}
	x = j;
	while (nome[x] != '\0') {
		email[x] = tolower(nome[espaco]);
		x++;
		espaco++;
	}
	email[x] = nome[i]; // recebendo o '\0'
	printf("%s@unb.br\n",email);
	
	
	return 0;
}
