#include <stdio.h>
#include <math.h>

int main(){
	int cfat, n;
	float e, fat;
	printf("Digite N:");
	scanf("%d",&n);
	for(e = 1; n > 1; n = n - 1) {
		cfat=n;
		for(fat=1; cfat > 1; cfat = cfat - 1)
			fat=fat*cfat;

		e = e+1/fat;
	}
	printf("\n Resultado: %f",e);
    return 0;

}
