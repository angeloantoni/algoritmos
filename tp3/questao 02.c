// Questão 02:
#include <stdio.h>

int main(){

    int qtd_numeros = 0;
    printf("digite a quantidade de números: ");
    scanf("%d", &qtd_numeros); 

    int vetor[qtd_numeros];

    printf("digite os números: ");
    for(int i = 0; i < qtd_numeros; i++){
        scanf("%d", &vetor[i]);
    }

    int ordenado = 1;

    for(int i = 0; i < qtd_numeros; i++){
        if(vetor[i] > vetor[i + 1]){ 
            ordenado = 0; 
            break; 
        } 
    }
    if (ordenado){
        printf("ORDENADO! \n"); 
    }
    else{printf("Não ordenado! \n");};  
}