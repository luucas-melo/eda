#include <stdio.h>
#include <math.h>

int main (){

    int n, m, i, pa, pb, x1=1, y1=1, x2, y2;	
	int p;
	int posX, posY, pos;
    scanf("%d %d", &n, &m);

    x2=n; y2=m;

    scanf("%d", &p);
if(p<1000){
    for(i=1;i<=p;i++){
        scanf("%d", &pa);
        scanf("%d", &pb);
	if(pa>=1 && pa<=100000 && pb>=1 && pb<=100000){
        if (pa==1)
            y1=y1+1;
        
        if (pa==2)
            y1=y1-1;
        
        if (pa==3)
            x1=x1+1;
        
        if (pa==4)
            x1=x1-1;
        

        if (pb==1)
            y2=y2+1;
        
        if (pb==2)
            y2=y2-1;
        
        if (pb==3)
            x2=x2+1;
       
        if (pb==4)
            x2=x2-1;
		pos = i;
		posX =0;
		posY =0;
		if(x1<=0 || y1<=0){
		posX = x1;
		posY = y1;
		pos = i;
		printf("\n");
		printf("PA saiu na posicao (%d,%d) no passo %d\n",posX,posY, pos);
		break;
		}
		if(x2<=0 || y2<=0){
		posX = x2;
		posY = y2;
		pos = i;
		printf("\n");
		printf("PB saiu na posicao (%d,%d) no passo %d\n",posX,posY, pos);
		break;
		}
		
	if(x1>0 || y2>0 || y1>0 || y2>0){
	if (x1==x2 && y1==y2){
		printf("Encontraram-se na posicao (%d,%d) no passo %d\n", x1, y1, p);
		break;
		}
	else if(i==p){
		printf("Nao se encontraram\n");
	}
		}
		
		}
	}
	
	}
		
		return 0;
    }
