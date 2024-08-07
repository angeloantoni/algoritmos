#include <stdio.h>
#include <stdlib.h>

struct ListaNumero {
    int numero;
    struct ListaNumero *proximo;
};

struct ListaNumero *inicio = NULL;

void percorrerLista() {
    struct ListaNumero *atual = inicio;
    printf("Lista de todos os números cadastrados\n\n");
    while (atual != NULL) {
        printf("  %d\n", atual->numero);
        atual = atual->proximo;
    }
}

int inserirInicio(int numero) {
    struct ListaNumero *novo = (struct ListaNumero*) malloc(sizeof(struct ListaNumero));
    if (novo == NULL) {
        return -1;
    }
    novo->numero = numero;
    novo->proximo = inicio;
    inicio = novo;
    return 1;
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

int main() {
    int op = -1;
    while (op != 0) {
        printf("0 - SAIR\n1 - LISTAR ELEMENTOS DA LISTA\n2 - INSERIR NO INÍCIO\n3 - INSERIR NO FIM\n4 - REMOVER DO INÍCIO\n5 - REMOVER DO FIM\n6 - BUSCAR ELEMENTO\n");
        scanf("%d", &op);
        if (op == 1) {
            percorrerLista();
        } else if (op == 2) {
            int num;
            printf("Digite o número a ser inserido: \n");
            scanf("%d", &num);
            inserirInicio(num);
        } else if (op == 3) {
            int num;
            printf("Digite o número a ser inserido: \n");
            scanf("%d", &num);
            inserirFim(num);
        } else if (op == 4) {
            removeInicio();
        } else if (op == 5) {
            removeFim();
        } else if (op == 6) {
            int num;
            printf("Digite o número a ser buscado: \n");
            scanf("%d", &num);
            int resultado = buscaNumero(num);
            if (resultado == 1) {
                printf("Número encontrado.\n");
            } else {
                printf("Número não encontrado.\n");
            }
        }
    }
    return 0;
}