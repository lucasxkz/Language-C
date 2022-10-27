#include <stdio.h>
#include <math.h>
int main (void){
    int seg, min, hr;
    printf("Digite o valor em segundos");
    scanf("%d", &seg);
    hr=seg/60/60;
    min=(seg-(hr*60*60))/60;
    seg=(seg-(hr*60*60)-(min*60));
    printf("\n Horas:%d \n Minutos:%d \n Segundos:%d", hr,min,seg);
    return 0;
}
