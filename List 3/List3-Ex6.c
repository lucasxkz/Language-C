#include <stdio.h>
#include <math.h>
int main (void){
 int p, resultado=1,num1=0,num2=1, cont;
 printf("Digite o numero/posição do fibonacci: ");
 scanf("%d", &p);
  if (p==0){
    printf ("O número referente à essa posição é: 0.");
    return 0;
   }else(p!=0);{
     for (cont=1;cont<=p;cont++){
     resultado=num1+num2;
     num2=num1;
     num1=resultado;
     }
    }
  printf("O número referente à essa posição é: %d.", resultado);
  return 0;
}
