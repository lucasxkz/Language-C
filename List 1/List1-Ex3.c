#include <stdio.h>
#include <math.h>
int main (void) {
    int a, b, c, s, area;
    printf("Insira o valor de a,b,c:");
    scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n A área do triangulo é :%d",area);

return 0;
}
