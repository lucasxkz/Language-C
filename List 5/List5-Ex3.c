#include <stdio.h>
int calc_divi(int numer, int denom){
  if (numer<denom)
    return 0;
  else return 1+ calc_divi (numer=numer-denom, denom);
}
int main (void){
  int num, den, resultado;
  printf ("Digite o numerador e o denominador para calcular a divisão.");
  scanf ("%d %d", &num,&den);
  calc_divi (num, den);
  printf("O resultado da divisão é %d", (calc_divi(num, den)));
return 0;
}
