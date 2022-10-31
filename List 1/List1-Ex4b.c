#include <stdio.h>
#include<math.h>
int main (void){
    int bita, bitb, bitc, bitd;
    int bind;
    printf("Digite um binario de 4 digitos, um de cada vez");
    scanf("%d", &bita);
    scanf("%d", &bitb);
    scanf("%d", &bitc);
    scanf("%d", &bitd);
    if (bita>1 || bita<0){
        printf ("binario inexistente");
        return 0;
        };
    if (bitb>1 || bitb<0){
        printf ("binario inexistente");
        return 0;
        };
    if (bitc>1 || bitc<0){
        printf ("binario inexistente");
        return 0;
        };
    if (bitd>1 || bitd<0){
        printf ("binario inexistente");
        return 0;
        } else
        bind = bita *pow(2,3);
        bind = bind + bitb* pow(2,2);
        bind = bind + bitc*  pow(2,1);
        bind = bind + bitd*pow(2,0);
        printf("O valor em decimal do binario resulta em: %d", bind);
        return 0;
    }
