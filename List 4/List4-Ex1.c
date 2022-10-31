#include <stdio.h>
#include <math.h>
float media_arit (char A, int a, int b, int c){
 return A=(a+b+c)/3;}
float media_pond (char B, int a, int b, int c){
 return B=(a*5+b*3+c*2)/10;
}
int main (void){
 int nota1, nota2, nota3, alun, cont;
 float resultado;
 char dig;
  printf("Digite a quantidade de alunos: ");
  scanf ("%d", &alun);
  for(cont=1;cont<=alun;cont++){
    printf("\nDigite as 3 notas do aluno: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    printf("\nDigite se quer fazer média aritmética ou média ponderada com a Letra A ou B (respectivamente): ");
    scanf(" %c", &dig);
    if (dig=='A'){
      resultado=media_arit(dig,nota1,nota2,nota3);
      }else if (dig=='B'){
      resultado=media_pond(dig,nota1,nota2,nota3);
      }printf("\n%f", resultado);
    }
  return 0;
  }
