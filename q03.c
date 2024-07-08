#include <stdio.h>

int main(){

    int qtd_numeros = 0;
    printf("digite a quantidade de números do vetor: ");
    scanf("%d", &qtd_numeros); 

    int vetor[qtd_numeros];

    printf("digite os números: ");
    for(int i = 0; i < (qtd_numeros); i++){
        scanf("%d", &vetor[i]);
    }

    for(int j = 0; j < qtd_numeros; j++){
        for(int i = 0; i < qtd_numeros - 1; i++){
            if(vetor[i] > vetor[i + 1]){
                int temp = vetor[i];
                vetor[i] = vetor[i + 1]; 
                vetor[i + 1] = temp;
            }
        }
    }

    for(int i = 0; i < qtd_numeros; i++){
        printf("%d ", vetor[i]);
    }
        printf("\n");

        int num_extra;
        printf("digite o número extra: "); 
        scanf("%d", &num_extra); 
        vetor[qtd_numeros] = num_extra;
        qtd_numeros++;

        for(int j = 0; j < qtd_numeros; j++){
            for(int i = 0; i < qtd_numeros - 1; i++){
                if(vetor[i] > vetor[i + 1]){
                    int temp = vetor[i];
                    vetor[i] = vetor[i + 1]; 
                    vetor[i + 1] = temp;
            }
        }
    }

      for(int i = 0; i < qtd_numeros; i++){
        printf("%d ", vetor[i]);
    }
        printf("\n");


return 0; 
}

// otimizar código com funções