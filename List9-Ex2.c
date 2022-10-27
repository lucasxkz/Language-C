#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum semana {dom=1, seg, ter, qua ,qui, sex, sab};

int main (){

 int num;
 char dias [7][4] = {"dom", "seg", "qua", "qui", "sex", "sab"}, dia[4];

 char **mtrz = (char **)malloc(7 * sizeof( char * ));
 
 for (int i=0; i<7; i++){
     mtrz[i]= (char*)malloc(3*sizeof(char));
     for (int j = 0; j < 3; j++){
         mtrz[i][j] = dias [i][j];
     }
 }
 printf ("Digite o dia da semana: ");
 gets(dia);

for (int i = 0; i < 7; i++)
{
    if (strcmp(dia, mtrz[i]) == 0){
        num = i;
    }
}


 switch (num) {
    
 case dom: 
 printf ("Final de semana.");
 break;

 case sab: 
 printf ("Final de semana.");
 break;

 default:
 printf ("Dia de semana.");
 break;
 };

 return 0;
}
