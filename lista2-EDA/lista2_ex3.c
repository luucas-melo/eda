#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char nome[80];
	int ano;
}tipoBanda;


typedef struct tipoShows{
	char nome[80];
	int n;
	tipoBanda bandas[100];
};



void  pesquisarNomeBanda(char pesquisa [80] , struct tipoShow shows[50] , int n){
		int i;
		for(i=1;i<=n;i++){
		if(pesquisa == struct tipoShows.nome)
			printf("%s - ano %d",tipoBanda.nome, tipoBanda.ano);
		else
			printf("Banda nao cadastrada");

		}

}

int main(){
	
	
	return 0;
}
