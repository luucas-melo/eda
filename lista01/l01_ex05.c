#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(j==i)
				printf("%.2d",i);		
			else 
				printf("%.2d ",i);
		}
		printf("\n");
		
	}
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(j==i)
				printf("%.2d",j);		
			else 
				printf("%.2d ",j);
		}
		printf("\n");
	}
	
	return 0;
}
