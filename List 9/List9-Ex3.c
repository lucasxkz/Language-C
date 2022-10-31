#include <stdio.h>

struct data{
    int dia, mes, ano;
}data;

struct hora{
    int hora, min, seg;
}hr;

struct compromisso{
    int data, horas;
    char descricao[1000];
}

void regsComp (){
    printf("Digite o dia, o mês e o ano que deseja marcar o compromisso (respectivamente): ");
    scanf("%i %i %i", &data.dia, &data.mes, &data.ano );
    if (data.mes>12 || data.mes<1){
     printf ("Mês invalido");
    }
    else {
     printf("\nAgora digite a Hora o minuto e o segundo: ");
     scanf("%i %i %i", &hr.hora, &hr.min, &hr.seg);
     if(hr.hora<24 || hr.min>59 || hr.seg>59){
         printf("Horário inválido.");
     }
     else{
         printf ("\nPor fim digite a descrição do seu compromisso: ");
     }
    }
}

int listComp (int data, int mes, int ano, int hr, int min, int seg, ){




}

void listMensalComp (){
    int num;
    printf ("Digite o mês em específico que deseja ver seus compromissos: ");
    scanf("%i", num);





}

int main (){
 int num;
 printf("Bem vindo à sua agenda de compromisso!\nDigite 1 para marcar compromisso digite 2 para ver a lista completa de compromissos e 3 para ver apenas a lista de um mês específico: ");
 scanf("%i", &num);
 if (num==1)
     regsComp ();
 else if (num==2)
     listComp ();
 else if (num==3)
     listMensalComp ();
 else
    printf ("Número inválido!");
return 0;
}
