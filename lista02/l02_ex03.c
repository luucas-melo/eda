#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i;	
	int v[10001], pos, ultimoImpar, ultimoPar;
	scanf ("%d",&n);
	for (i=0;i<n;i++) {
		scanf ("%d",&v[i]);
		if (v[i]%2==0) {
			ultimoPar = i;
		}
		else{
			ultimoImpar = i;
		}
	}
	for (i=0;i<n;i++) {
		if (v[i]%2==0) {
			if(i != ultimoPar)
				printf("%d ",v[i]);
			else
				printf ("%d", v[i]);
		}
	}
	printf("\n");
	for (i=0;i<n;i++){
		if (v[i]%2!=0) {
			if(i != ultimoImpar)
				printf("%d ",v[i]);
			else
				printf ("%d", v[i]);
		}
	}
	printf("\n");
	return 0;
}
