#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,v1[10001],v2[10001],x,i, vSoma[10001];

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&v1[i]);	
	}
	for(i=0;i<n;i++){
		scanf("%d",&v2[i]);	
	}
	for(i=0;i<n;i++){
		vSoma[i]= v1[i]+v2[i];
	}

	for(i=0;i<n-1;i++){
		printf("%d ",vSoma[i]);
	}
	printf("%d\n",vSoma[i]);
	return 0;
}
