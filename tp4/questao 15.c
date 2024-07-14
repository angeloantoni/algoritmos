#include <stdio.h>

int main(){

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int maiornum;

    for(int i = 0; i < 3; i++){

        maiornum = matriz[i][0];

        for (int j = 0; j < 3; j++){
           if (matriz[i][j] > maiornum){
            maiornum = matriz[i][j];
           }
        }
    printf("O maior número da linha %d é: %d\n", i, maiornum); 
    }

    return 0;

}