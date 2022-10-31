#include <stdio.h>
#include <math.h>
float calc_triang (float ang1, float ang2, float ang3){
  if (ang1>ang2+ang3 || ang2>ang1+ang3 || ang3>ang1+ang2){
    printf("\nÂngulos inválidos!");
    return 0;}
  else if(ang1<0 || ang2<0 || ang3<0 ){
    printf("\nNão existem ângulos negativos!");
    return 0;}
  else if(ang1==ang2 && ang2==ang3)
    printf("\nTriângulo equilátero.");
  else if(ang1==ang2 || ang2==ang3 || ang3==ang1)
    printf("\nTriângulo isosceles.");
  else 
    printf("\nTriângulo escaleno.");
return 0;
}  


int main (void){
  float ang1=1, ang2=1, ang3=1, resultado;
  while(ang1>=1){
  printf ("\nDigite os 3 ângulos do triângulo: ");
  scanf ("%f %f %f", &ang1, &ang2, &ang3 );
  calc_triang(ang1, ang2, ang3);
  }
return 0;
}
