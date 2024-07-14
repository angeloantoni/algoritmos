#include <stdio.h>

int main(){

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma = 0; 

    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            if((i + j) == 2){
            soma += matriz[j][i];


            }
        }
    }



    printf("A soma dos elementos da diagonal secundária é: %d\n",
    soma); 

    return 0;


}