#include <stdio.h> 

int interface(){

int i = 2;
    
    while(i > 0) {
        printf("Escolha a operação:\n 0 - SAIR\n 1 - INCLUIR CONTATO\n 2 - LISTAR CONTATOS\n");
        scanf("%d", &i);
        if(i == 1){
        struct contato c1;
        for(int i = 0; i < 80; i++){
        scanf("%c", &c1.nome[i]);
            }
        }
    }
} 

struct contato{
    char nome[80], email[80];
    int telefone; 
};

int incluirContato(){

    struct contato c1;
    printf("Digite o nome do contato: \n"); 
    for(int i = 0; i < 80; i++){
        scanf("%c", &c1.nome[i]);
    }
    printf("Digite o email do contato: \n"); 
    for(int i = 0; i < 80; i++){
        scanf("%c", &c1.email[i]);
    }
    printf("Digite o telefone do contato: \n"); 
    for(int i = 0; i < 2; i++){
        scanf("%c", &c1.telefone);
    }

     



}

int main(int argc, char **argv) {
   
    int op = 3;
    for (int i = 0; i < 100; i++)


    struct contato contatos[100];

    interface(); 

    return 0;



}

