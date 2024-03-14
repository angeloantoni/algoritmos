#include <stdio.h>

int main(){

    int a[2][3];
    int i, j; 

    a[0][2] = -9;
    a[1][0] = -2;
    a[1][1] = 6;
    a[1][2] = 8;

    printf("Matriz a:\n\n");

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 2; j++) {
            printf("%2i\t", a[j][i]);
        }

        printf("\n");
    }
    printf("\n");

}