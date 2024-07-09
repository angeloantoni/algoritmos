#include <stdio.h>

void preencherArray(int tamanho, int vetor[]){
    for(int i = 0; i < tamanho; i++){ // 1 + 2n
        scanf("%d", &vetor[i]);// n
    }
}

void menorElemento(int tamanho, int vetor[]){
    int aux = vetor[0]; // 1
    for(int i = 0; i < tamanho; i++){ // 1 + 2n
        if(aux < vetor[i]){ //1
            aux = aux;
        }
        else{
            aux = vetor[i];
        }
    }
    printf("O menor número do array é: %d \n", aux); //1
}

int main(){

    int tamanho; 
    printf("Digite o tamanho do array: "); 
    scanf("%d", &tamanho);  

    int vetor[tamanho]; //1
    printf("Digite espaçadamente os elementos do array: "); 
    preencherArray(tamanho, vetor); 

    menorElemento(tamanho, vetor);

    return 0;
}

// t(n) = 5n + 12