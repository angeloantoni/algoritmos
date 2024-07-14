#include <stdio.h>



void swap(int *a, int *b){


    int aux = *a; 
    *a = *b; 
    *b = aux; 

}

int main(){

    int x = 6;
    int y = 9;
    swap(&x, &y);

    printf("%d\n%d\n", x, y);

    return 0;
}