#include <stdio.h>
#include <math.h>
int main (void){
  int cont=0, n, var39=0, var5=0, var2=0;
  printf("Digite os 10 numeros.");
  for (cont=0;cont<10;cont++){
    printf("\nDigite o valor: ");
    scanf("%d", &n);
    if(n%3==0 || n%9==0){
        var39++;
        continue;
     }else if(n%2==0) {
        var2++;
        continue;
     }else if(n%5==0) {
        var5++;
        continue;
    }else {
        printf("Número não divisível");
    }
  }
printf(" A quantidade de números divisíveis por 3 e 9 resulta em %d, enquanto a quantidade de números divisíveis por 5 e por 2, são respectivamente %d, %d.", var39, var5, var2);
return 0;
}
