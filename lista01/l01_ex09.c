#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m, movimento, i=0;
	int pa,pb;
	int xa=1,ya=1,xb,yb;
	
	scanf("%d %d",&n, &m);
	scanf("%d", &movimento);
	xb = n;
	yb = m;
	while(i<movimento && (xa!=xb || ya!=yb) && (xa>0 && xa<=n) && (xb>0 && xb<=n) && (ya>0 && ya<=m) && (yb>0 && yb<=m)){
		scanf("%d %d", &pa, &pb);
		if(pa == 1)
			ya++;  //ya = cordenada y de a
		if(pa == 2)
			ya--;
		if(pa == 3)
			xa++; //xa = cordenada x de a
		if(pa == 4)
			xa--;

		if(pb == 1)
			yb++; //yb = cordenada y de b
		if(pb == 2)
			yb--;
		if(pb == 3)
			xb++; //xb = cordenada x de b
		if(pb == 4)
			xb--;
		i++;
	}
	if(xa == xb && ya==yb){
		printf("Encontraram-se na posicao (%d,%d) no passo %d\n",xa,ya,i);
	}
	else if((xa<1 || xa>n) || (ya<1 || ya>m))
		printf("PA saiu na posicao (%d,%d) no passo %d\n",xa,ya,i);
	else if((xb<1 || xb>n) || (yb<1 || yb>m))
		printf("PB saiu na posicao (%d,%d) no passo %d\n",xb,yb,i);
	else
		printf("Nao se encontraram\n");
	return 0;
}
