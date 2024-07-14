#include <stdio.h> 

int main(){

    int a = 10, b = 20, c = 30;
    int *ponteiro; 
    ponteiro = &b; 
    *ponteiro = -5; 
    ponteiro = &c; 
    *ponteiro = 50; 
    ponteiro = &a; 
    printf("a, b, c, *p = %d, %d, %d, %d\n", a, b, c, *ponteiro);

}

/*

a    b    c     *ponteiro
[10] [20] [30]  [20]

*ponteiro = -5;
a    b    c     *ponteiro
[10] [-5] [30]  [-5]

*ponteiro = &c; 
a    b    c     *ponteiro
[10] [-5] [30]  [30]

*ponteiro = 50; 
a    b    c     *ponteiro
[10] [-5] [50]  [50]

*ponteiro = &a;
a    b    c     *ponteiro
[10] [-5] [50]  [10]

*/