#include <stdio.h>
#include <string.h>
int contaVogais(char letras[1000]){
    int contador=0;
    char n;
    for (n=0 ; n <= letras ; n++){
     if (letras[n] == 'a' || letras[n] == 'e' || letras[n] == 'i' ||
        letras[n] == 'o' || letras[n] == 'u') {
      ++contador;}
    }
  printf("%d", contador);
}
int main() {
    char letras[1000];
    printf("Digite a frase que deseja calcular as vogais: ");
    scanf("%s", letras);
    contaVogais(letras);
  return 0;
  }
