#include <stdio.h>

int main() {

    int matriz[3][3] = {{1, -2, -3}, {-4, 5, -6, {7, 8, 9}}};
    int count = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > 0){
                count += 1; 
            }
        }
    }

    printf("A quantidade de elementos positivos é: %d\n", count); 

    return 0;





}