#include <stdio.h>

int f91(long int n) {
	if (n>=101)
		return n-10;	
	else {
		return f91(f91(n+11));
	}	
}

int main() {	
	long int n;
	while(scanf ("%ld", &n) != 0) {
		if(n == 0)
			break;
		printf ("f91(%ld) = %d\n", n, f91(n));
	}
	
	return 0;
}
