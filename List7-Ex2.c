#include <stdio.h>
int main (void){
    int x=10, *p;
    p=&x;
    printf ("%d", *p);
    p++;
    printf("\n%d", *p);
    // quando se aloca um p++, é acrescentado 4 bits resultando em 4 valores à frente do anterior, ou seja, ao acrescentar '1' é mostrado e endereço da frente.
    x=10;
    p=&x;
    (*p)++;
    printf("\n%d, %d.", *p, x);
    // quando se diz (*p)++ significa que é acrescentado 1 no conteúdo de p, modificando também o valor de x.
    x=10;
    p=&x;
    *(p++);
    printf ("\n%d", *p);
    // basicamente *(p++) significa praticamente a mesma coisa do primeira porém seria como se estivesse apontando pro endereço mais um porém retornando o conteúdo e não o endereço.
    //sendo assim *(p+10) seria 10 números à frente de x, em um vetor pegaria o 10 valores à frente na memória e printaria o conteúdo.
return 0;
}
