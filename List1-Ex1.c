#include <stdio.h>
#include <math.h>
int main (void){
    int graus; 
    double radiano;
    printf("Digite o Valor em graus:");
    scanf("%d", &graus);
    radiano=(graus*3.14)/180;
    radiano=sin(radiano);
    printf("O valor do seno do grau é %lf",radiano);
    
    return 0;
}
