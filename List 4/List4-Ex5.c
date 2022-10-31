#include <stdio.h>
#include <math.h>
float media_alun (int nota_fin){
 if(nota_fin<0){
   printf ("Nota inválida!");
   return 0;}
  else if (nota_fin>0 && nota_fin<=39){
   printf ("O aluno tirou F.");
   return 0;}
  else if (nota_fin>=40 && nota_fin<=59){
   printf ("O aluno tirou E.");
    return 0;}
  else if (nota_fin>=60 && nota_fin<=69){
    printf ("O aluno tirou D.");
    return 0;}
  else if (nota_fin>=70 && nota_fin<=79){
    printf ("O aluno tirou C.");
    return 0;}
  else if (nota_fin>=80 && nota_fin<=89){
    printf ("O aluno tirou B.");
    return 0;}
  else{
    printf ("O aluno tirou A.");
    return 0;}
}


int main (void){
 int nota_final, alun, cont;
  printf("Digite a quantidade de alunos: ");
  scanf ("%d", &alun);
  for(cont=1;cont<=alun;cont++){
    printf("\nDigite a nota final do aluno: ");
    scanf("%d", &nota_final);
    media_alun (nota_final);
    }
  return 0;
  }
