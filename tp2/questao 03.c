#include <stdio.h>

int main(){
    
    int i = 3, j = 5;
    int *p, *q; 
    p = &i; 
    q = &j;

    return 0;  
}

/*

Qual é o valor resultante de cada uma das seguintes expressões?
1. p == &i   true
2. p == ∗p   true
3. q == j    true

4. ∗q == &j  true
5. ∗q == j   true
6. ∗p − ∗q   -2




*/