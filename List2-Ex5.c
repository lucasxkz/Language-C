#include <stdio.h>
#include <math.h>
int main
int salario, aumento
printf ("Digite o valor do salário");
scanf ("%d", &salario);
switch(salario){
    case A:
    salario= (salario/100)*8+ salario
    printf("O salario seria de %d", salario);
    break;
    case B:
    salario= (salario/100)*11+ salario
    printf ("O salario seria de %d", salario);
    break;
    case 3:
    if (salario >= 1000){
        salario= salario + 350
         printf ("O salario seria de %d", salario);
    }else (salario > 1000){
        salario= salario +200
        printf ("O salario seria de %d", salario);
    }
    break;
    Default://else;
    printf (Valor inválido);
return 0;
}
