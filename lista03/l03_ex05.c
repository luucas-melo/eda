#include <stdio.h>
int i = 0;
int compara (char str[]){
  if (*str == '\0') {
    return i;
  }
  else {
     
    if ( *str == *(str+2)){
      i++;  
    }
    compara (str + 1);
  } return i;
}

int main () {
  char string[201];

  scanf("%s", string);
  printf ("%d\n", compara (string));

  return 0;
}
