void troca(int *x, int *y) {
    // função para trocar os valores de um ponteiro pelo outro. 
    int temp = *x;
    // variável inteira criada pra armazenar o valor do ponteiro *x
    *x = *y;
    // o ponteiro *x recebe o valor do ponteiro *y
    *y = temp;
    // o ponteiro *y recebe o valor inicial de *x que estava armazenado na variável temp
}

int main() {
    int a = 10, b = 20;
    // declaração de variáveis e armazenamento de valores
    troca(&a, &b);
    // atribuição dos endereços de memória como argumento para a função troca.
    printf("a = %d, b = %d\n", a, b);
    return 0;
}