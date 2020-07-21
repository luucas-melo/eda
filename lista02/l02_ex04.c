#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,v[10001],x,i;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&v[i]);	
	}
	scanf("%d",&x);

	for(i=0;i<n;i++){
		if(v[i]==x){
			printf("pertence\n");
			break;
		}
		else if(i==n-1)
			printf("nao pertence\n");
	}
	
	return 0;
}
