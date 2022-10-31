#include <stdio.h>
int main (void){
    char frase [];
    printf("Digite a Frase: ");
    scanf("%s", frase);
    if (frase[0]>96 && frase[0]<123){
        frase[0]=frase[0]-32;
    }
    printf ("%s", frase);
    return 0;
}
