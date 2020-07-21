#include <stdlib.h>
#include <stdio.h>

int main(){
	int n[100000], maior=0, i=0;
	
	while(scanf("%d",&n[i])!=EOF){
		if(n[i]>=maior)
			maior = n[i];
		i++;
	}
	printf("%d\n",maior);
	
	
	return 0;
}
