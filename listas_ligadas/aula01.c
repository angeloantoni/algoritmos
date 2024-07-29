#include <stdio.h>

struct ListaNumero{
    int numero;
    struct ListaNumero *proximo;
};


int percorrerLista(){
    int inicio;
    struct ListaNumero * atual; 
    atual = inicio; 
    printf("Lista de todos os números cadastradosz\n\n");
    while (atual != NULL){
        printf("  %d\n", atual->numero);
        atual = atual->proximo; 
    }
}

int inserirInicio(int numero){
    struct ListaNumero *novo;
    int inicio;
    int retorno = 1;
    novo = (struct ListaNumero*)
        malloc(sizeof(struct ListaNumero));
    novo->numero = numero;
    novo->proximo = inicio;
    inicio = novo;
    return retorno; 
}

int inserirFim(int numero){
    struct ListaNumero *novo, *ultimo;
    int inicio;
    int retorno = 1;
    novo = (struct ListaNumero*) malloc(sizeof(struct ListaNumero));
    if (novo == NULL){
        retorno = -1;
    }
    else{
        novo->numero = numero;
        novo->proximo = NULL;
        if(inicio = NULL){
            inicio = novo;
        }
        else{
            ultimo = inicio;
            while(ultimo->proximo != NULL)
            ultimo = ultimo->proximo; 
            ultimo-> proximo = novo;
        }
    }
    return retorno;   
}

int removeInicio(){
    struct ListaNumero *velho;
    int inicio;
    int retorno = 1;
    velho = inicio;
    if (velho == NULL){
        retorno = -1;
    }
    else{
        inicio = inicio->proximo;
        free(velho);
    }
    return retorno;
}

int removeFim(){
    //fazer
}

int buscaNumero(int numero) {
    struct ListaNumero * atual;
    int inicio;
    int retorno = -1;
    atual = inicio;
    while (atual != NULL){
        if (atual->numero == numero){
            retorno = 1;
            break;
        }
        atual = atual->proximo;
    }
    return retorno; 
}