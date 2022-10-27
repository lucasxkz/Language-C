#include <stdio.h>

int main(void) {
  int num, cpf[11], aux=10, soma=0;

  printf("Digite seu cpf, sem os ultimos dois digitos: ");
  scanf("%i", &num);
  cpf[8]=num%10;


  for (int i=7; i>=0; i--){
   num=num/10;
   cpf[i]=num%10;
  }

  for (int i=0; i<9; i++){
    
    int j = cpf[i]*aux;
    aux--;
    soma=soma+j;
  }

  if (soma%11 < 2 )
  {
    cpf[9]=0;
  }
  else
  {
    cpf[9]=11-soma%11;
  }

  aux = 11;
  soma=0;
  
  for (int i=0; i<10; i++){
    int j=cpf[i]*aux;
    aux--;
    soma=soma+j;
  }

    if (soma%11 < 2 )
  {
    cpf[10]=0;
  }
  else
  {
    cpf[10]=11-soma%11;
  }


  printf("O seu cpf é: ");
  
    for(int i=0;i<11;i++){
    printf("%i", cpf[i]);
  }

  if (cpf[8] == 1)
    printf ("\nVocê é do Distrito Federal, Goiás, Mato Grosso do Sul ou Tocantins");
  else if (cpf[8] == 2)
    printf ("\nVocê é do Pará, Amazonas, Acre, Amapá, Rondônia ou Roraima");
  else if (cpf[8] == 3)
    printf ("\nVocê é de Ceará, Maranhão ou Piauí");
  else if (cpf[8] == 4)
    printf("\nVocê é de Pernambuco, Rio Grande do Norte, Paraíba ou Alagoas");
  else if (cpf[8] == 5)
    printf("\nVocê é de Bahia ou Sergipe");
  else if (cpf[8] == 6)
    printf ("\nVocê é de Minas Gerais");
  else if (cpf[8] == 7)
    printf ("\nVocê é do Rio de Janeiro ou Espírito Santo");
  else if (cpf[8] == 8)
    printf ("\nVocê é de São Paulo");
  else if (cpf[8] == 9)
    printf ("\nVocê é de Paraná ou Santa Catarina");
  else{
    printf ("\nVocê é de Rio Grande do Sul");
    }
  
  return 0;
}
