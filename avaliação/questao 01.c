#include <stdio.h>

void somaMatriz(int matriz1[][], int matriz2[][], int soma[][]){

    int soma = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){

            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    return soma;
}



int main() {
    
    int lc1, lc2;
    int matriz1[lc1][lc1]; 
    int matriz2[lc2][lc2]; 
    
    printf("Digite a quantidade de linhas e colunas da primeira matriz quadrada: \n");
    scanf("%d", &lc1);
    
    printf("Digite os valores da primeira matriz: \n");

    printf("Digite a quantidade de linhas e colunas da segunda matriz quadrada: \n");
    scanf("%d", &lc2);

    printf("Digite os valores da segunda matriz: \n");
    
    

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}