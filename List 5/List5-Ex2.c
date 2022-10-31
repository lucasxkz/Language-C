#include <stdio.h>
int soma_dig (int num1){
  int n=num1%10;
 if (num1==0) return 0;
else n=n+soma_dig(num1/10);
  return n;}
int main (void){
 int num;
 printf ("Digite o valor do número que deseja somar seus dígitos: ");
 scanf ("%d", &num);
 printf ("\n%d", soma_dig(num));
return 0;}
