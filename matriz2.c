#include <stdio.h>

int main(){

    int i, j; 
    int a[3][3];

    for(i = 0; i < 3; i++){
        
        for(j = 0; j < 3; j++){
            a[i][j] = i;
            printf("%2i\t", a[j][i]);
        }
    }


}

