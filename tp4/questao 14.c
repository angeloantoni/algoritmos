#include <stdio.h>

int main(){
    int matriz[3][3] = {{3, 1, 2}, {5, 4, 6}, {9, 7, 8}};
    int linha;
    int temp; 

    printf("Digite o número da linha (0, 1 ou 2): ");
    scanf("%d", &linha);

    for(int i = 0; i < 3; i++){
        if (matriz[linha][i] > matriz[linha][i + 1]){
            temp = matriz[linha][i];
            matriz[linha][i] = matriz[linha][i + 1]; 
            matriz[linha][i + 1] = temp; 
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%2i\t", matriz[i][j]);  
        }
        printf("\n");
    }
    
   return 0;
}