#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

  
int aloca (int num ,int preenche){
  int *vetPtr=NULL;
  if (preenche == TRUE){
    vetPtr = (int*) calloc (num, sizeof(int)); 
  }
  else if (preenche == FALSE){
    vetPtr = (int*) malloc (num * sizeof(int));
    }
  return *vetPtr;
}


void imprime(int *v, int n){
  for( int i=0; i<n ; i++){
    printf (" %i\n ",*(v+1));
  }
}


int preeenche (int *V, int tam, int valor, int is_aleatorio){
  if (is_aleatorio == TRUE){
    for
    V[tam]=rand()%100;
  } 
}

int main(void) {
  int vet;
  return 0;
}
