#include <stdio.h>
#include <stdlib.h>

struct ListaNumero {
    int numero;
    struct ListaNumero *proximo;
};

struct ListaNumero *inicio = NULL;
struct ListaNumero *menor = NULL;

void percorrerLista() {
    struct ListaNumero *atual = inicio;
    printf("Lista de todos os números cadastrados\n\n");
    while (atual != NULL) {
        printf("  %d\n", atual->numero);
        atual = atual->proximo;
    }
}

void inserirInicio(int numero) {
    struct ListaNumero *novo = (struct ListaNumero*) malloc(sizeof(struct ListaNumero));
//    if (novo == NULL) {
//        return -1;
//    }
    novo->numero = numero;
    novo->proximo = inicio;
    inicio = novo;
    return;
}

int inserirFim(int numero) {
    struct ListaNumero *novo = (struct ListaNumero*) malloc(sizeof(struct ListaNumero));
    if (novo == NULL) {
        return -1;
    }
    novo->numero = numero;
    novo->proximo = NULL;
    if (inicio == NULL) {
        inicio = novo;
    } else {
        struct ListaNumero *ultimo = inicio;
        while (ultimo->proximo != NULL) {
            ultimo = ultimo->proximo;
        }
        ultimo->proximo = novo;
    }
    return 1;
}

int removeInicio() {
    if (inicio == NULL) {
        return -1;
    }
    struct ListaNumero *velho = inicio;
    inicio = inicio->proximo;
    free(velho);
    return 1;
}

int removeFim() {
    if (inicio == NULL) {
        return -1;
    }
    struct ListaNumero *velho = inicio;
    struct ListaNumero *penultimo = NULL;
    while (velho->proximo != NULL) {
        penultimo = velho;
        velho = velho->proximo;
    }
    if (penultimo != NULL) {
        penultimo->proximo = NULL;
    } else {
        inicio = NULL;
    }
    free(velho);
    return 1;
}

int buscaNumero(int numero) {
    struct ListaNumero *atual = inicio;
    while (atual != NULL) {
        if (atual->numero == numero) {
            return 1;
        }
        atual = atual->proximo;
    }
    return -1;
}

int ordenacao(int numero) {
    struct ListaNumero *atual = menor;
    while (atual != NULL){
        if (atual->numero < menor){
            inserirInicio(atual);
        }
        else if(atual->numero > menor){
            inserirFim(atual);
        }
    }
}

int main() {
    int op = -1;
    int qtd_elementos = 0;
    int elementos[qtd_elementos]; 
    while (op != 0) {
        printf("0 - SAIR\n1 - INSERIR ELEMENTOS\n2 - ORDENAR\n3 - LISTAR ELEMENTOS\n ");
        scanf("%d", &op);
        if (op == 1) {
            printf("Digite a quantidade de elementos a ser inserido:\n");
            scanf("%d", &qtd_elementos);
            printf("Digite os elementos a ser inseridos: \n");
            for(int i = 0; i < qtd_elementos; i++){
                inserirInicio(elementos[i]);
            }
        } else if (op == 2) {
            ordenacao(elementos[qtd_elementos]);
        } else if (op == 3) {
           percorrerLista();
        } 
    }
    return 0;
}