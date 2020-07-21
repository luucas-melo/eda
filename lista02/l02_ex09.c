#include <stdlib.h>
#include <stdio.h>

typedef struct tipoData {
	int dia;
	int mes;
	int ano; 

} tipoData;

typedef struct tipoPessoa {
	char nome[80];
	tipoData dtNascimento;

} tipoPessoa;
struct tipoPessoa pessoa;	
struct tipoPessoa separaInfo (char nome[80], int dt_nascimento) {
	int i=0;
	while (nome[i] != '\0') {
		pessoa.nome[i] = nome[i];
		i++;
	}
	pessoa.nome[i]= nome[i];
	pessoa.dtNascimento.ano = dt_nascimento/10000;
	pessoa.dtNascimento.mes = (dt_nascimento/100) % 100;
	pessoa.dtNascimento.dia = (dt_nascimento%100);
	return pessoa; 
}



