#include <stdio.h>
#include <math.h>
int main (void){
    int amg1, amg2, amg3;
    int prm, invest;
    printf("insira o valor investido dos amigos, depois o premio:");
    scanf("%d", amg1);
    scanf("%d", amg2);
    scanf("%d", amg3);
    scanf("%d", prm);
    invest= amg1+amg2+amg3;
    amg1= invest/100*amg1;
    amg2= invest/100*amg2;
    amg3= invest/100*amg3;
    prm= prm/100*amg1;
    printf("O valor ganho pelo amigo 1 resulta em: %d", amg1);
    prm= prm/100*amg2;
    printf("O valor ganho pelo amigo 2 resulta em: %d", amg2);
    prm= prm/100*amg3;
    printf("O valor ganho pelo amigo 4 resulta em: %d", amg3);
    return 0;
}
