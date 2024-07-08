#include <stdio.h>

void bubbleSort(int array[], int tamanho){

    //loop para acessar cada elemento do array
    for(int step = 0; step < tamanho - 1; step++){
        //loop para comparar cada elemento do array
        for(int i = 0; i < tamanho - (step - 1); i ++){
            //comparação de dois elementos adjacentes
            // mudança da ordem para classificar do menor para o maior
            if(array[i] > array[i + 1]){

                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

            }
        }
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
};

/* Anotação microsoft copilot:

1 - #include <stdio.h>: Essa linha inclui a biblioteca padrão de entrada e saída em C. Ela permite que você use funções como printf para exibir informações no console.
2 - void bubbleSort(int array[], int tamanho): Aqui, declaramos uma função chamada bubbleSort. Ela recebe um array de inteiros (array[]) e o tamanho desse array (tamanho) como argumentos. Essa função será responsável por ordenar o array usando o algoritmo de ordenação “bubble sort”.
3 - for(int step = 0; step < tamanho - 1; step++): Este é o primeiro loop for. Ele itera através dos elementos do array. O índice step começa em 0 e vai até tamanho - 1.
4 - for(int i = 0; i < tamanho - (step - 1); i++): Este é o segundo loop for aninhado dentro do primeiro. Ele compara os elementos adjacentes do array. O índice i também começa em 0 e vai até tamanho - (step - 1).
5 - if(array[i] > array[i + 1]): Aqui, comparamos dois elementos adjacentes do array. Se o elemento na posição i for maior que o próximo elemento (i + 1), trocamos suas posições para classificar do menor para o maior.
6 - int temp = array[i]; array[i] = array[i + 1]; array[i + 1] = temp;: Essas linhas realizam a troca dos elementos. Armazenamos temporariamente o valor do elemento na posição i, atribuímos o valor do próximo elemento à posição i e, em seguida, restauramos o valor temporário na próxima posição.

*/