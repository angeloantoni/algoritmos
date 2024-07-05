// Questão 01:

// a) Em nenhum momento.
// b) 5
// c) Sim, a expressão é válida. 
// d) Sim, a expressão é válida. 
// e) Não, a expressão só é válida quando o valor de x é 1.3735
// f) z(x) = x^^3

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

    for(int i = 0; i < qtd_numeros - 1; i++){
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