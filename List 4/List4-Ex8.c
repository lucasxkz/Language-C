#include <stdio.h>
#include <math.h>
float calc_fracao (int num, double cont, float s){
 for(cont=1;cont<=num;cont++){
   s= s+((pow(cont,2)+1)/(cont+3));
 }
  printf("O resultado da expressão é %f", s);
}

int main (void){
 int num;
 printf ("Digite o número que vai ser colocado na expressão: ");
 scanf ("%d", &num);
 calc_fracao(num, 1, 0);
return 0;
}
