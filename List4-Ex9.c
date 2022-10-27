#include <stdio.h>
#include <math.h>
float calc_media(int contalun, int contaprov, int nota, int soma){
  while (nota){
    printf ("Digite a nota do aluno: ");
    scanf ("%d", &nota);
    contalun++;
    if (nota<6)
      continue;
    else {
      contaprov++;
      soma= soma+nota;
    }
  }
  soma= soma/contaprov;
  contalun=contalun-1;
printf ("A média final das notas dos aprovados é %d, e a quantidade total dos alunos é %d", soma, contalun );}
int main (void){
  calc_media(0, 0, 1, 0);
return 0;
}
