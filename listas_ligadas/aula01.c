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
    struct ListaNumero *inicio = NULL;

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
    struct ListaNumero *velho;
    struct ListaNumero *fim = NULL;

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

int main(){
    int op = 0;
    while(op != 0){
        printf("0 - SAIR\n 1 - LISTAR ELEMENTOS DA LISTA\n 2 - INSERIR NO INÍCIO\n 3 - INSERIR NO FIM\n 4 - REMOVER DO INÍCIO\n 5 - REMOVER DO FIM\n 6 - BUSCAR ELEMENTO\n");
        if(op == 1){
            //fazer
    }
        else if(op == 2){
            int num = 0;
            printf("Digite o número a ser inserido: \n");
            scanf("%d", &num);
            inserirInicio(num);
        }
       else if(op == 3){
            int num = 0;
            printf("Digite o número a ser inserido: \n");
            scanf("%d", &num);
            inserirFim(num); 
       }
       else if(op == 4){
            removeInicio();
       }
       else if(op == 5){
            removeFim();
       }
       else if(op == 6){
            buscaNumero;
       }
}