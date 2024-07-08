#include <stdio.h>

void bubbleSort(int tamanho, int vetor[]){
    
    int aux;
    for(int j = 0; j < tamanho; j ++){
        for(int i = 0; i < tamanho - 1; i ++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux; 
            }
        }
    }
}
void printArray(int tamanho, int vetor[]){
    for(int i = 0; i < tamanho; i ++){
        printf("%d ", vetor[i]);
    }
        printf("\n");
}

void preencherArray(int tamanho, int vetor[]){
    for(int i = 0; i < (tamanho); i++){
        scanf("%d", &vetor[i]);
    }
}

void adicionarExtra(int tamanho, int vetor[]){
    int numero_extra;
    scanf("%d", &numero_extra);
    vetor[tamanho] = numero_extra;

}

int main(){
    int tamanho_array;
    printf("Digite a quantidade de itens do array: ");
    scanf("%d", &tamanho_array);

    int vetor[tamanho_array];
    printf("Digite espaçadamente os números do array: ");
    preencherArray(tamanho_array, vetor);
    bubbleSort(tamanho_array, vetor);
    printArray(tamanho_array, vetor);

    printf("Digite o número extra para o array: ");
    adicionarExtra(tamanho_array, vetor);
    bubbleSort(tamanho_array, vetor);
    printArray(tamanho_array + 1, vetor);
}