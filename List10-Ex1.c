#include <stdio.h>
#include <string.h>

int main (){

 FILE *file;
 
 file = fopen ("C:\\Users\\olive\\Documents\\alunos.txt", "r");
 
 char linha[MAX_LINHA];

 while( fgets(linha, MAX_LINHA, file) != NULL ) { 
 char nome_completo[50];
 int matricula;
 char *token = strtok(linha, " ");
 char *next_token = strtok(NULL, " ");
 while(next_token != NULL){
 strcat(nome_completo, token);
 strcat(nome_completo, " ");
 token = next_token;
 next_token = strtok(NULL, " ");
 }
 matricula = atoi(token);
}
return 0;
}
