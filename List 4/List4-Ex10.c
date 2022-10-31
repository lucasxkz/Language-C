#include <stdio.h>
#include <math.h>
float nivel_nad (int idade){
 if(idade<=4){
   printf ("Idade inferior ao esperado!");
   return 0;}
  else if (idade>4 && idade<=7){
   printf ("Nadador nível F.");
   return 0;}
  else if (idade>=8 &&idade<=10){
   printf ("Nadador nível E.");
    return 0;}
  else if (idade>=11 &&idade<=13){
    printf ("Nadador nível D.");
    return 0;}
  else if (idade>=14 &&idade<=15){
    printf ("Nadador nível C.");
    return 0;}
  else if (idade>=16 &&idade<=17){
    printf ("Nadador nível B.");
    return 0;}
  else{
    printf ("Nadador nível A.");
    return 0;}
}

int main (void){
 int idade, cont;
  printf("Digite a idade do nadador ");
  scanf ("%d", &idade);
  nivel_nad (idade);
  return 0;
  }
