#include <stdio.h>
#include <math.h>
int main (void){
    int n, inte;
    int unid, dez, cent, milh;
    printf("Digite o numero: ");
    scanf("%d", &n);
unid= n%10;
dez = (n%100)/10;
cent= (n%1000)/100;
milh= n/1000;
printf ("%d%d%d%d", unid,dez,cent,milh);
return 0;
}
