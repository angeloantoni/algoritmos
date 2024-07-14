#include <stdio.h>

int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int resultado[2][2] = {{0, 0}, {0, 0}};

    // Multiplicação das matrizes
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprimir a matriz resultado
    printf("Matriz resultado:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}