#include <stdio.h>

int potencia(int a, int b) {
	if (b== 0)
		return 1;
	else 
		return a * potencia(a, b-1);


}

int main() {
		
	int x,z;
	scanf ("%d %d", &x, &z);
	
	printf ("%d", potencia(x,z));
	return 0;
}
