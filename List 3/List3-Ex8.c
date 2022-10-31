#include <stdio.h>
#include <math.h>
int main (void){
    int voto=1, can1=0, can2=0, can3=0, can4=0, nulo=0, branco=0;
    while(voto!=0){
      printf("Digite o seu voto: ");
      scanf("%d", &voto);
       switch(voto){
         case(0):
         printf("Votação finalizada.");
         break;
         case(1):
         can1++;
         break;
         case(2):
         can2++;
         break;
         case(3):
         can3++;
         break;
         case(4):
         can4++;
         break;
         case(5):
         nulo++;
         break;
         case(6):
         branco++;
         break;
         default:
         printf("Voto inválido!");
         break;
      }
    }
  printf ("O candidato 1 recebeu: %d.\n O candidato 2 recebeu: %d.\n O candidato 3 recebeu %d.\n O candidato 4 recebeu:%d.\n Votos nulos: %d.\n Votos brancos: %d.", can1, can2, can3, can4, nulo, branco);
  return 0;
  }
