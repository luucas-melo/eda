//COMPLEXIDADAE O(N)
void remove_elemento (int *v, int i, int n) {
	for(int j = 1;j < n-1;i++) {
		v[j] = v[j+1];
		v = realloc (v, (n-1)*sizeof(int));

	}
}
//COMPLEXIDADAE O(N)
void insere_elemento (int *v, int x, int i, int n) {
	v = realloc(v, (n+1)*sizeof(int));

	for (int j = n-2; j>=i; j--) {
		v[j+1] = v[j];
	}
	v[i] = x;

}
/*
	Ou seja, para uma sequencia de m operaçoes de insercao  e remocao a complexidade
	torna-se O(M*N). Isso é ruim quando m e n são muito grandes.


*/
