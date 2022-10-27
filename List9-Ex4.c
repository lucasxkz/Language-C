#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct carro_{
 char modelo[25];
 int consumo;} carro;

int main(){

    int qtd, maior = -1;
    char nomeCar[20];

    printf("Digite a quantidade de carros que deseja comparar ");
    scanf("%i", &qtd);

    carro *p = (carro *)malloc(qtd * sizeof(carro));

    for (int i = 0; i < qtd; i++){
     printf("Digite o modelo do carro: ");
     scanf("%s", p[i].modelo);

     printf("\nDigite o consumo do carro: ");
     scanf("%i", &p[i].consumo);

        if (p[i].consumo > maior){
            maior = p[i].consumo;
            strcpy(nomeCar, p[i].modelo);
        }
    }

    printf("%s\n", nomeCar);

    return 0;
}
