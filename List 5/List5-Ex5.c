#include <stdio.h>
float seq(float menr, float mair){
  if (menr>mair){
    printf("Números inválidos");
    return 0;
  }
  else if (menr==mair){
    printf ("%.0f.", menr);
    return 0;
  }
  else{
    printf ("%.0f,", menr);
    return  seq(menr=1+menr, mair);
  }
}
int main(void){
  int men, mai;
  printf("Digite o menor e o maior número de qualquer sequência.");
  scanf("%d %d", &men, &mai);
  seq(men, mai);
return 0;
}
