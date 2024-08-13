#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó da lista
typedef struct No {
    int numero;
    struct No *proximo;
    struct No *anterior;
}No;

No* inicio = NULL;

// Função para criar um Novo nó
No* criar_novo_no(int numero) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->numero = numero;
    novo_no->proximo = NULL;
    novo_no->anterior = NULL;
    return novo_no;
}

// Função para inserir um nó No início da lista
void inserir_inicio(int numero) {
    No* novo_no = criar_novo_no(numero); 

    novo_no->proximo = inicio;
    if (inicio != NULL)
        (inicio)->anterior = novo_no;
    inicio = novo_no;
}

// Função para inserir um nó No final da lista
void inserir_fim(int numero) {
    No* novo_no = criar_novo_no(numero);
    if (inicio == NULL) {
        inicio = novo_no;
        return;
    }
    No* ultimo_no = inicio;
    while (ultimo_no->proximo != NULL)
        ultimo_no = ultimo_no->proximo;
    ultimo_no->proximo = novo_no;
    novo_no->anterior = ultimo_no;

}

// Função para imprimir a lista
void imprimir(No* no) {
    while (no != NULL) {
        printf("%d ", no->numero);
        no = no->proximo;
    }
    printf("\n");
}

void remover_inicio() {
    No* velho;

    if (inicio != NULL){
        velho = inicio;
        inicio = inicio->proximo;
        inicio->anterior = NULL; 
        free(velho); 
    };  
}

void remover_fim(){
    No* velho;
    No* ultimo_no = inicio;
    if (inicio != NULL){
    while (ultimo_no->proximo != NULL)
        ultimo_no = ultimo_no->proximo; 
    }
    velho = ultimo_no; 
    ultimo_no = ultimo_no->anterior; 
    ultimo_no->proximo = NULL;
    free(velho);
}

void inserir_meio(int numero, No* elemento){
    No* novo_no = criar_novo_no(numero);
    novo_no->proximo = elemento->proximo;
    novo_no->anterior = elemento;
    elemento->proximo->anterior = novo_no;
    elemento->proximo = novo_no; 
}

void remover_numero(int numero){
    No* atual; 
    atual = inicio; 
    while(atual != NULL){
        if(atual == numero){
            atual->anterior->proximo = atual->proximo;
            atual->proximo->anterior = atual->anterior;
            free(atual);
        }
        else{
            atual = atual->proximo; 
        }
    }
}
int main() {
    

    inserir_inicio(1);
    inserir_inicio(2);
    inserir_inicio(0);
    inserir_fim(3);
    inserir_fim(7);
    inserir_fim(8);
    //inserir_meio(13, 1);
    remover_inicio();
    remover_fim();
    //remover_numero(1);


    imprimir(inicio);

    return 0;
}
