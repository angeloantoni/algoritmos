#include <stdio.h>

int main(){
    int matriz[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
    int linha, soma = 0;

    printf("Digite o número da linha (0, 1 ou 2): ");
    scanf("%d", &linha); 

    for(int i = 0; i < 3; i++) {
        soma += matriz[linha][i];
        }
    

    printf("A soma dos elementos da linha %d é: %d\n", linha, soma); 
    return 0;
}