#include <stdio.h>
#include <math.h>
int main (void){
  int posit=0, zer=0, negat=0, q, positp, negatp, zerp;
  double n, tot;
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
  tot= posit + negat + zer;
  negatp=negat/tot*100;
  positp=posit/tot*100;
  zerp=zer/tot*100;
  printf("A porcentagem de positivos é de %d porcento.", positp);
  printf("\nA pocentagem de negativos é de %d porcento.", negatp);
  printf("\nA porcentagem de zeros é de %d porcento.", zerp);
  return 0;
  }
