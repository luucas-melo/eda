#include <stdio.h>
#include <stdlib.h>
int transformar_dias(int anoH, int ano, int mesH, int mes, int diaH, int dia){
	int trans_dia;
	trans_dia = (anoH-ano)*372+(mesH-mes)*31+(diaH-dia);
	return trans_dia;
}
int main(){
	int dia, mes, ano;
	int diaH, mesH, anoH;
	int dias_ano;
	int idade_ano, idade_mes, idade_dia;
	
	scanf("%d %d %d",&dia, &mes, &ano);
	scanf("%d %d %d",&diaH, &mesH, &anoH);
	if(ano>=0 && anoH>=0 && ano<=9999 && anoH<=9999 && mes>=1 && mes<=15 && mesH>=1 && mesH<=15 && dia>=1 && dia <=35 && diaH>=1 && dia<=35){
		if(dia<1 || dia>31 || diaH<1 || diaH>31 || mes<1 || mes>12 || mesH<1 || mesH>12){
			printf("data invalida\n");
			return 0;
		}
		dias_ano = transformar_dias(anoH,ano,mesH,mes,diaH,dia);	
		printf("%d\n",dias_ano/372);
		idade_mes = (dias_ano%372)/31;
		idade_dia = ((dias_ano%372)%31);
		printf("%d\n",idade_mes);
		printf("%d\n",idade_dia);			
	}
	
	return 0;
}
