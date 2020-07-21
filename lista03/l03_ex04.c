#include <stdio.h>
int soma_dig(int n) {
	if (n/10 == 0)
		return n;	
	else {
		return soma_dig(n/10) + n%10;
	}	
}
int rumo9s(int num) {
	int cont = 0;
	if (num < 10)
		return 1;
	else{
		num = soma_dig(num);
		return rumo9s(num)+1;
	}
}
int sum(char *string) {
	int soma=0;	
	if (*string == '\0'){	
		return *string;
	}
	else{
		soma = (*string) - '0' + sum(string+1) ;
		return soma;		
	}
}

int main() {
	char string[1000];
	int x;
	while (scanf ("%s", string) && sum(string) != 0) {
		x = rumo9s(sum(string));
		if(x == 0)
			break; 
		if(sum(string)==9)
			x = 1;
		if (sum(string) % 9 == 0){
			printf ("%s is a multiple of 9 and has 9-degree %i.\n", string, x);
		}
		else{
			printf ("%s is not a multiple of 9.\n", string);
		}
	}
	
 	
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int rumo9s(int num) {
	int cont = 0;
	if (num/10 == 0)
		return 1;
	else
		return rumo9s(num/10)+1;
}
   int main(){
      int soma, grau, i;
      char c, string[1000], a;
      scanf( "%c", &c );
      while( ;c != '0'; ){
         soma = grau = i = 0;
         soma += c - '0';
         string[i++] = c;
         scanf( "%c", &c );
         while( isdigit( c ) ){
            soma += c - '0';
            string[i++] = c;
            scanf( "%c", &c );
         }
         string[i] = '\0';
         if( soma % 9 == 0 ){
			grau = rumo9s(soma);
            printf( "%s is a multiple of 9 and has 9-degree %i.\n", string, grau );
         }
         else{
            printf( "%s is not a multiple of 9.\n", string);
         }
         scanf( "%c", &c );
      };
      return 0;
   } 

*/

