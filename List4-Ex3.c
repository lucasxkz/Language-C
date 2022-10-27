#include <stdio.h>
#include <math.h>
int cresc (int num1, int num2, int num3){
  if (num1 > num3) {
        int tmp = num3;
        num3 = num1;
        num1 = tmp;
    }
    if (num1 > num2) {
        int tmp = num2;
        num2 = num1;
        num1 = tmp;
    }
    if (num2 > num3) {
        int tmp = num3;
        num3 = num2;
        num2 = tmp;
    }
  printf("O a sequência de números fica em %d, %d, %d.", num1, num2, num3);
  return 0;
}
int main(void) {
 int a, b, c;
 printf("Digite 3 numeros:\n");
 scanf("%d %d %d", &a, &b, &c);
  cresc(a, b, c);
}
