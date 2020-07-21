#include <stdio.h>

int soma(unsigned long long n) {
	if (n/10 == 0)
		return n;	
	else {
		return soma(n/10) + n%10;
	}	
}

int main() {	
	unsigned long long n;
	scanf ("%llu", &n);
	printf ("%d\n",soma(n));
	return 0;
}
