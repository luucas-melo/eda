#include <stdio.h>
#include <stdlib.h>
int fib (int n){
	if (n == 1 || n == 2)
		return 1;
	else{
		int ant1, ant2, atual;	
		ant1 = ant2 = 1;
		for (int i = 2;i < n;i++){
			atual = ant1 + ant2;
			ant1 = ant2;
			ant2 = atual;
		}
	return atual;
	}
	
}

void fib_rec (int *fib, int n){
	if(n == 1)
		fib[0] == 1;
	else if(n==2)
		fib[0] = fib[1] = 1;
	else{
		fib_rec(fib,n-1);
		fib[n-1] = fib[n-2] + fib[n-3];
	}

}
int main() {
	int f,num;
	int*fib,n;
	scanf ("%d", &n);
	fib = malloc(n*sizeof(int));
	if(fib == NULL)
		return EXIT_FAILURE;
	fib_rec(fib, n);
		printf("fib(%d) = %d", n, fib[n-1]);
	free(fib);
	//scanf ("%d", &num); 
	//f = fib (num);
	//printf ("%d\n", f);

}
