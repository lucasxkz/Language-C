#include <stdio.h>
#include <math.h>
float calc_fatorial (int cfat, int n, float e, float fat){
	for(e = 1; n > 1; n = n - 1) {
		cfat=n;
		for(fat=1; cfat > 1; cfat = cfat - 1)
			fat=fat*cfat;

		e = e+1/fat;
    }
 printf("\n Resultado: %f",e);
}
int main(void){
	int cfat, num;
	float e, fat;
    printf ("Digite o valor do ultimo fatorial: ");
    scanf ("%d", &num);
    calc_fatorial (0, num, 1, 0);
    return 0;
}
