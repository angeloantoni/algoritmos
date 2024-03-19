#include <stdio.h> 
#include <stdlib.h>


void preenchimento(int matriz[5][5]){
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            matriz[i][j] = rand() % 50;
        }
    }
}   

void imprimir(int matriz[5][5]) {
    
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2i\t", matriz[i][j]);
        }
        printf("\n");
    }
}
    
void diagonal(int vetor[5], int matriz[5][5]) {
    
    for(int i = 0; i < 5; i++) {
        vetor[i] = matriz[i][i];
    }
    
}


int main(){
    
    int matriz[5][5]; 
    int vetor[5];
    
    preenchimento(matriz);
    imprimir(matriz);
    diagonal(vetor, matriz);
    
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
    
    return 0;
}