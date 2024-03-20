#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz_1[3][3] = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    int matriz_2[3][3] = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    int vetor[9];

    printf("Matriz 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2i\t", matriz_1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2i\t", matriz_2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            vetor[i * 3 + j] = matriz_1[i][j] + matriz_2[i][j];
        }
    }

    printf("\nMultiplicação das duas matrizes:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
