#include <stdio.h>
int cont= 0;
void hanoi(int n,char orig, char dest, char temp) {
	if (n == 1)
		cont+=1;
	else{
		hanoi(n-1,orig,temp,dest);
        cont+=1;
        hanoi(n-1,orig,dest,temp);
	}

}

int main() {
	int n;
	scanf("%d", &n);
	hanoi(n ,'A', 'B', 'C');

	printf("%d", cont);

	return 0;
}
