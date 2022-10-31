#include <stdio.h>
#include <math.h>
int main (void){
    int nota;
    printf ("Insira a sua nota: ");
    scanf("%d", &nota);
    if (nota<5 && nota>0){
        printf("\n Nota insuficiente :(");
        return 0;
    };
    if (nota>=5 && nota<7 ){
        printf ("\n Nota regular");
        return 0;
    };
    if (nota>= 7 && nota<8){
        printf ("\n Nota boa");
        return 0;
    };
    if (nota>=8 && nota<=10){
        printf ("\n Nota ótima");
        return 0;
    };
    if (nota<0 && nota>10){
        printf ("\n Nota inválida");
        return 0;
    };
return 0;
}
