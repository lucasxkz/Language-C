#include <stdio.h>
#include <math.h>
double media_sal (int resultad, int salar, int media){
 return resultad=salar/media;}
int main (void){
 int soma=0, filhos=0, salario, cont_salar=0;
 double resultado=0;
 while (salario){
    printf( "Digite o salário da pessoa sabendo que 0 é o finalizador da contagem: ");
    scanf("%d", &salario);
   if (salario==0){
     break;
  }else{
     cont_salar++;
     soma=soma+salario;
       }
   }
  resultado=media_sal(resultado,soma,cont_salar);
  printf ("Contagem finalizada, a média de salário total é: %lf.",resultado);
  return 0;
  }
