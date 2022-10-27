#include <stdio.h>
#include <string.h>
int main (){
    int x=22, *px;
    float y=-1, *py;
    char z='a', *pz;
    printf ("Atualmente o valor de cada variavel é int :%i,float: %.0f,char: %c.", x, y, z);
    printf ("\nDigite os novos valores de cada variavel: ");
    scanf("%i", &x);
    px=&x;
    scanf("%f", &y);
    py=&y;
    scanf(" %c", &z);
    pz=&z;
    printf ("Os novos valores são :%i, %f, %c", *px, *py, *pz);
return 0;
}
