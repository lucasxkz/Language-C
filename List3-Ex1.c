#include <stdio.h>
#include <math.h>
int main (void){
  int posit=0, zer=0, negat=0, q;
  double n;
  printf ("Quantos valores serão fornecidos? ");
  scanf ("%d", &q);
  while(q>=1){
     q= q-1;
    printf("Digíte o valor de cada um: ");
    scanf("%lf", &n); 
    if(n >= 1){
      posit=posit+1;
    }else if(n <= -1){
      negat=negat+1;
    }else if(n == 0){
      zer=zer+1;
    }
  }
  printf ("Existem %d positivos, %d negativos, %d zeros.", posit, negat, zer);
  return 0;
  }
