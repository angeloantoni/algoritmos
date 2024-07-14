#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *pa; 
    int *pb; 
    pa = &a;
    pb = &b;
    *pa = *pb * 1; 
    printf("%d,%d\n", a, b);

    return 0;
}

/*

a    b    *pa   *pb
[10] [20] [10]  [20] 

*pa está apontando para a variável a e *pb está apontando
para a variável b.

na décima linha do código o ponteiro *pa recebe o valor do ponteiro *pb multiplicado por 2:

a    b    *pa        *pb
[10] [20] [*pb * 2]  [20] 
a    b    *pa   *pb
[40] [20] [40]  [20]

*/