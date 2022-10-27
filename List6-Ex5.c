#include <stdio.h>
int main(){
    int aux=0;
    int matriz[5][5]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    /* letra a*/
    for(int coluna=0; coluna<5 ; coluna++ ){
        for (int linha=3; linha<4 ; linha++){
            aux= aux+matriz[linha][coluna];
        }
    }
    printf("%d", aux);


    /* letra b*/
    aux=0;
    for(int coluna=1; coluna<2 ; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            aux= aux+matriz[linha][coluna];
        }
    }
    printf("\n%d", aux);


    /* letra c*/
    aux=0;
    for(int coluna=0; coluna<5; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            if (linha==coluna){
                aux= aux+matriz[linha][coluna];};
        }
    }
    printf("\n%d", aux);


    /*letra d*/
    aux=0;
    for(int coluna=0; coluna<4 ; coluna++ ){
        for (int linha=0; linha<4 ; linha++){
            if (linha==coluna+1){
                aux= aux+matriz[linha][coluna];};
        }
    }
    printf("\n%d", aux);

    /*letra e*/
    aux=0;
    for(int coluna=0; coluna<5 ; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            aux= aux+matriz[linha][coluna];
        }
    }
    printf("\n%d", aux);


    return 0;
}
