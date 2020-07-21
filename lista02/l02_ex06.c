#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,v[10001],x,i,media,soma=0,vMedia[10001], tamMedia=0;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&v[i]);	
	}
	for(i=0;i<n;i++){
		soma+=v[i];
	}
	media = soma/i;
	
	for(i=0;i<n;i++){
		if(v[i]>media){
			vMedia[tamMedia]=v[i];
			tamMedia++;
		}
	}
	for(i=0;i<tamMedia-1;i++){
		printf("%d ",vMedia[i]);
	}
	printf("%d\n",vMedia[i]);
	return 0;
}
