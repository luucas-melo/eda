#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	int n,i,cont=0,j=0,x=0;
	char word[43];
	int ordenada[43];
	
	scanf("%d",&n); 
	for(x=0;x<n;x++){
		word[x] = (char *)malloc(n*43);
		scanf("%s",word[x]);

		while(word[x][cont]!='\0'){
			cont++;
		}
	
		for(i=0;i<cont;i++){
			if(tolower(word[x][i])<tolower(word[x][i+1]))
				j++;	
		}
		if(j==cont-1)
			ordenada[x]=1;	
		else
			ordenada[x]=0;
			
		j=0;
		cont = 0;
		}
	
		for(x=0;x<n;x++){
			if(ordenada[x] == 1)
				printf("%s: O\n",word[x]);
			else
				printf("%s: N\n",word[x]);
		}
	
	
	return 0;
}
