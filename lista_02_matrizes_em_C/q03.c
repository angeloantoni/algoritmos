#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int l, c;
    
    printf("Digite a quantidade de lados da matriz:\n");
    scanf("%d", &l);
    
    printf("Digite a quantidade de colunas da matriz:\n");
    scanf("%d", &c);
    
    int matriz[l][c];

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%2i\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz transposta:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%2i\t", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
