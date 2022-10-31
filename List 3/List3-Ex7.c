#include <stdio.h>
#include <math.h>
int main (void){
 int p, resultado=1,num1=0,num2=1, cont;
 printf("Digite o numero/posição do fibonacci: ");
 scanf("%d", &p);
  p--;
  printf("0,");
   for (cont=1;cont<=p;cont++){
   resultado=num1+num2;
   printf("%d,", resultado);
   num2=num1;
   num1=resultado;
   }
  return 0;
}
