#include <stdio.h>
int main (){
    int matriz_A[4][6]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    int matriz_B[4][6]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    int aux=0

    /*letra a*/
    for(int coluna=0; coluna<5 ; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            aux= aux+matriz[linha][coluna];
        }}
        for(int coluna=0; coluna<5 ; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            aux= aux+matriz[linha][coluna];
        }}
    printf ("%d", aux);
    /*letra b*/
    aux=0;
    int aux2=0;
    for(int coluna=0; coluna<5 ; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            aux= aux+matriz[linha][coluna];
        }}
        for(int coluna=0; coluna<5 ; coluna++ ){
        for (int linha=0; linha<5 ; linha++){
            aux2= aux2+matriz[linha][coluna];
        }}
    aux=aux-aux2;
    printf ("%d", aux);
    return 0;}
