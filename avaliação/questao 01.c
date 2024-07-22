#include <stdio.h>

int main() {
    
    int lc1, lc2;
    int matriz1[lc1][lc1]; 
    int matriz2[lc2][lc2]; 
    
    printf("Digite a quantidade de linhas e colunas da primeira matriz quadrada: \n");
    scanf("%d", &lc1);

    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < lc1; i++) {
        for (int j = 0; j < lc1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite a quantidade de linhas e colunas da segunda matriz quadrada: \n");
    scanf("%d", &lc2);
    
    printf("Digite os valores da segunda matriz:\n");
    for (int i = 0; i < lc2; i++) {
        for (int j = 0; j < lc2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    int soma[0][0];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){

            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2i\t", soma[i][j]);
        }
        printf("\n");
    }
}