#include <stdio.h>

int soma(int n) {
	if (n == 1) {
		return 1;
	}
	else{
		return n + soma(n-1);
	}

}

int main() {
	
	int x = soma(3);

	printf ("%d\n",x);

	return 0;
}
