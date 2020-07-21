

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char *substitui_pFrase(char *, const char *, const char *);
int main()
{
    char frase[100],palavra[15], palavraNova[15], novafrase[125];
    palavraNova[0] = '\0';

    printf("Digite uma frase(maximo 100 caracteres): ");
    gets(frase);
    printf("Digite uma palavra(maximo 15 caracteres): ");
    gets(palavra);
    printf("Digite uma palavra nova(maximo 15 caracteres): ");
    gets(palavraNova);

    if(substitui_pFrase(frase,palavra,palavraNova)){
        strcpy(novafrase,substitui_pFrase(frase,palavra,palavraNova));
        printf("Nova frase: %s\n",novafrase);
    }
    else printf("Palavra: %s nao encontrada na frase!\n",palavra);

    return 0;
}
/* Frase: a frase que contém a palavra para ser substituída
   palavra: palavra a ser substituída
   novaPalavra: palavra que substituirá */
const char *substitui_pFrase(char *frase, const char *palavra, const char *novaPalavra){
    register int i;
    bool found = false;
    char result[strlen(frase)-strlen(palavra)+strlen(novaPalavra)], rest[128];
    int len = strlen(frase), lenstrike = strlen(palavra), j = 0, k = 0, r = 0;

    result[0]  = '\0';
    rest[0] = '\0';
    for(i = 0; i < len; i++){
            //Procurar palavra a partir de i
            for(j = i, k = 0; frase[j] == palavra[k] && k < lenstrike; j++, k++){}
            //Caso a palavra foi encontrada
            if(k >= lenstrike-1){
                //Obter resto da frase
                for(r = 0; j < len; r++, j++){
                    if(frase[j] == '\0')
                        rest[r] = ' ';
                    else
                        rest[r] = frase[j];
                }
                rest[r] = '\0';
                //Copiar frase antes da palavra a ser trocada
                for(j = 0; j < i; j++){
                    result[j] = frase[j];
                }
                result[strlen(result)] = '\0';
                //Copiar nova palavra para frase
                for(k = 0; k <= strlen(novaPalavra); k++){
                    result[j+k] = novaPalavra[k];
                }
                strcat(result,rest);
                found = true;
                break;
            }else j = 0;
    }
    if(!found) return NULL;
    result[strlen(result)] = '\0';
    return result;
}
