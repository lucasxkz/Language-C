#include <stdio.h>
#include <math.h>
int main (void) {
    double m;
    double juros=1.01;
    m = 500*juros;
    printf("O primeiro mês equivale a %lf", m);
    m = m*juros;
    printf("\n O segundo mês equivale a %lf", m);
	m = m*juros;
	printf("\n O terceiro mês equivale a %lf", m);
	m = m*juros;
	printf("\n O quarto mês equivale a %lf", m);
return 0;
}
