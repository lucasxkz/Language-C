#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct eletro_{
 char nome [30];
 float potencia, horas;
};

int main (){
 struct eletro_ elet;
 int qtd, consumo_total=0;

 printf ("Digite quantos eletrodomesticos vão ser calculados: ");
 scanf ("%d", &qtd);
  float consumo_relativo [qtd];

for (int i = 0; i < qtd; i++){
     printf ("Digite o nome do eletrodomestico: ");
     scanf ("%s" ,&elet.nome[30]);
     printf ("\nDigite quantos Kw/h o eletrodomestico consome: ");
     scanf("%f", &elet.potencia);
     printf("\nPor fim, digite quanto tempo o eletrodomestico fica ligado por dia: ");
     scanf("%f", &elet.horas);
     consumo_total = consumo_total+(elet.potencia * elet.horas);
     consumo_relativo [i] = elet.horas * elet.potencia;
  } 
  consumo_total=consumo_total*30;
  printf ("O consumo total é de %d Kw.", consumo_total);
  printf ("\n O consumo relativo de cada eletrodomestico é respectivamente: \n");
  int i=0;
  while(i<qtd){
    float num;
     num = (consumo_relativo[i]*30) / consumo_total * 100;
    printf("%.1f pct \n", num);
    i++;
  }
return 0;
}
