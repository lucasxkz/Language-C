#include <stdio.h>
int dig (int pos){
  if (pos<10) return 1;
else return dig(pos/10)+1;}
int main (void){
  int posi;
  printf ("Digite o valor do número que deseja calcular a quantidade de dígitos: ");
  scanf ("%d", &posi);
  printf ("\n%d", dig (posi));
return 0;
}
