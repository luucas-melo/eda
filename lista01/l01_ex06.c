# include <stdio.h>
# include <stdlib.h>

int main ()

{

int n,i,j,x;
	scanf("%d",&n);
	x=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
			for(j=1;j<i*2;j++){
				printf("*");
			}
		printf("\n");
	}

	return 0;

}
