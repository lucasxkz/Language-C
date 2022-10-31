#include <stdio.h>
#include <math.h>
int main (void){
    int n;
    double resultado=1, cont;
  printf ("Digite o ultimo dividendo: ");
  scanf ("%d", &n);
    for(cont=2;cont<=n;cont++){
        resultado=resultado+1/cont;
        printf("\nO resultado é:%lf", resultado);
    }
return 0;
}
