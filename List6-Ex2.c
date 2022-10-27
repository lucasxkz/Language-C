#include <stdio.h>
#define TAM_MAX 100
int main(void) {
  int seq1[TAM_MAX], seq2[TAM_MAX], aux, i, j;
  printf("Digite os valores da primeira sequência: ");
  for(i=0;i<TAM_MAX;i++){
    scanf ("%d", &aux);
    if (aux==-99)
      break;
    else seq1[i]=aux;
  }
  printf ("Digite os valores da segunda sequência: ");
    for(j=0;i<TAM_MAX;j++){
    scanf ("%d", &aux);
    if (aux==-99)
      break;
    else seq2[j]=aux;
  }
  int n;
    for (n=0; n<=i || n<=j ; n++){
    n= seq1[n];
    n= n+ seq2[n];
    printf("\n%d", n);
  }
  
  return 0;
}
