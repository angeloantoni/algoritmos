#include <stdio.h>

int main(){

    int matriz[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int matriz_identidade = 0;
    int count = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            if(i != j && matriz[i][j] != 0){
                count += 1;
            }

            else if(i == j && matriz[i][j] > 0){
                count += 0;
            }
        }
    }
    if(count == 0){
        printf("É identidade!\n");
    }
    else{
        printf("Não é identidade!\n");
    }
    
}