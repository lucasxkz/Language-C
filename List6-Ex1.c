#include <stdio.h>
#define TAM_MAX 50 
int main(){
 int i, num, vet[TAM_MAX];
 printf("Digite o número: ");
 for(i=0; i < TAM_MAX; i++){
     scanf("%d",&num);
     if(num == -99) break;
     vet[i] = num;
}
 int n;
 for(n=0;n<i;n++){
    if (vet[n] % 2 == 0){
         printf("\n%d    \t%d\n", vet[n], n+1);
   }
 }
return 0;}
