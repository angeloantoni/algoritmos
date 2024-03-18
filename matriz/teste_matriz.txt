#include <stdio.h>

int main(){

    int a[2][3];
    int i, j; 

    a[0][0] = 1;
    a[1][0] = 2;
    a[0][1] = 3;
    a[1][1] = 4;
    a[0][2] = 5;
    a[1][2] = 6;


    printf("Matriz a:\n\n");

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 2; j++) {
            printf("%2i\t", a[j][i]);
        }

        printf("\n");
    }
    printf("\n");

}