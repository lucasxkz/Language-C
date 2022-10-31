#include <stdio.h>
int main (){
  int a, b, *p, *pt;
  printf ("Digite dois números: ");
  scanf("%d %d", &a, &b);
  p=&a;
  pt=&b;
  if (p>pt){
    printf ("O primeiro endereço é maior que o segundo, sendo ele %p;", p);
  }
  else if(p<pt){
    printf ("O segundo endereço é maior que o primeiro, sendo ele %p;", pt);
  }
  else 
    printf("Os endereços tem valores iguais.");
return 0;
}
