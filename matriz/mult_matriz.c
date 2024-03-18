#include <stdio.h>
#define MAX_LINHAS = 100
#define MAX_COLUNAS = 100



void lerMatriz(int m[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas, int qtd_colunas) {
    int i, j; 
    for (i = 0; i < qtd_linhas; i++){
        for (j = 0; j < qtd_colunas; j++){
            scanf("%d", &m[i][j]);
    }
}

void mostraMatriz(int m[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas, int qtd_colunas) {

    int i, j;
    printf("\n");
    for (i = 0; i < qtd_linhas; i++){
        for (j = 0; j < qtd_colunas; j++){
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
 
void multiplicaMatrizes(int m1[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas1, int qtd_colunas1, int m2[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas2, int qtd_colunas2, int m3[MAX_LINHAS][MAX_COLUNAS]) {
    int i, j, k;
    if (qtd_colunas1 != qtd_linhas2){
        printf("[ERRO] matrizes nao compativeis para multiplicacao\n");
        return;
    }

    for (i = 0; i < qtd_linhas1; i++) {
        for (j = 0; j < qtd_colunas2; j++) {
            m3[i][j] = 0;
            for (k = 0; k < qtd_colunas1. k++){
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}






