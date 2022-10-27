#include <stdio.h>
int main (){
    int matriz[4][4]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 ,15, 16}
    int aux=0
    for(int coluna=0; coluna<5 ; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            if (linha==coluna){
                for(int n=linha;linha>=0;n--){
                    aux=aux + matriz[linha][coluna];
                }
            }
            
        }
    }
    printf("%d", aux);
return 0;
}
