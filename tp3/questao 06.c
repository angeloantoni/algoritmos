#include <stdio.h>


void preencherArray(int tamanho, int vetor[]){
    for(int i = 0; i < (tamanho); i++){  // 1 + 2N 
        scanf("%d", &vetor[i]);  // N
    }
}

void acharNumArray(int numero, int tamanho, int vetor[]){
    int aux = 0; // 1
    for(int i = 0; i < tamanho; i++){ // 1 + 2N
        if(numero == vetor[i]){ // 1 + N
            aux += 1; //1  
        }
        else{
            aux += 0;
            }
    }
    if(aux == 1){printf("O número %d econtra-se no array.\n", numero);} //1
    if(aux == 0){printf("O número %d não econtra-se no array.\n", numero);} 
}

int main(){
    
    int tamanho; //1
    printf("Digite o tamanho do array: "); //1
    scanf("%d", &tamanho);  //1

    int vetor[tamanho]; //1
    printf("Digite espaçadamente os elementos do array: "); //1
    preencherArray(tamanho, vetor); //1 

    int numero; //1 
    printf("Digite o número a ser buscado: ");//1
    scanf("%d", &numero);//1
    acharNumArray(numero, tamanho, vetor);//1

    // t(n) = 4n + 16

    return 0;
}





