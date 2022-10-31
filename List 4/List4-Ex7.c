#include <stdio.h>
#include <math.h>
int neg_posit (int numer){
    if (numer<0){
     printf("\nNúmero negativo.");
     return 0;
    }else
     printf ("\nNúmero positivo.");
}
int main(void){
 float num;
 printf("\nDigite o número que quer saber se é positivo ou negativo: ");
 scanf ("%d", &num);
 neg_posit(num);
return 0;
}
