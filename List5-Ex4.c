#include <stdio.h>
int calc_divi(int numer, int denom){
  if (numer<denom)
    return numer;
  else return calc_divi (numer=numer-denom, denom);
}
int main (void){
  int num, den, resultado;
  printf ("Digite o numerador e o denominador para calcular o resto da divisão: ");
  scanf ("%d %d", &num,&den);
  calc_divi (num, den);
  printf("O resultado da divisão é %d", (calc_divi(num, den)));
return 0;
}
