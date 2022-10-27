#include <stdio.h>
#include <math.h>
int main (void){
    float altura, peso, peso_ideal;
    char sexo;
    printf ("Digite sua altura, peso, e sexo");
    scanf ("%f", &altura);
    scanf ("%f", &peso);
    scanf ("%c", &sexo);
    if(sexo == "m"){
        peso_ideal=(72.7*altura)-58;
        if(peso_ideal == peso);{
            printf ("Voce esta no peso ideal");
        return 0;
    }
    }else if(peso_ideal> peso){
        printf("Voce esta abaixo do peso");
        return 0;
    }else (peso_ideal< peso);{
        printf("Voce esta acima do peso");
        return 0;
    }
return 0;
}
