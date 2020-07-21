#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char orig, char dest, char temp){
	if(n==1){
		hanoi(n-1,dest,orig,temp);
	}

}

int main(){
	int n=1,cont=0,i=0;
	while(n!=0){
		scanf("%d",&n);
		cont++;
	}
	for(i=1;i<cont;i++){
		printf("Teste %d ", i);
	}
	
	hanoi(n,'A','B','C');
	return 0;
}
