#include <stdio.h>
#include <stdlib.h>

int main() {
   
  int mat[4][8];
  int i, j;

  for(i = 0; i < 4; i++){
    for(j = 0 ; j < 8; j++){
        mat[i][j] = rand() % 50;
    }
  }

  for(i = 0; i < 4; i++){
    for(j = 0 ; j < 8; j++){
      printf("%2i\t", mat[i][j]);
    }
    printf("\n");
  }


  for(i = 0; i < 4; i++){
    int somalinha = 0;
    for(j = 0; j < 8; j++){
      somalinha += mat[i][j];
    }
    printf("Soma da linha %d: %d\n", i+1, somalinha);
    if(somalinha % 2 == 0){
        printf("A soma é par!\n");;
    }
    else{printf("A soma é ímpar!\n");}
  }


  for(j = 0; j < 8; j++){
    int somacoluna = 0;
    for(i = 0; i < 4; i++){
      somacoluna += mat[i][j];
    }
    printf("Soma da coluna %d: %d\n", j+1, somacoluna);
    if(somacoluna % 2 == 0){
        printf("A soma é par!\n");;
    }
    else{printf("A soma é ímpar!\n");}
  }
  

  return 0;
}
