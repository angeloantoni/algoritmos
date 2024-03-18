#include <stdio.h> 

float novo_salario(float salario, float aumento){
    
    float valor_aumento = (aumento/100) * salario;
    float salario_atual = (salario + valor_aumento);
    
    printf("valor do aumento: ");
    printf("%.2f \n", valor_aumento);
    printf("valor do salário atual: ");
    printf("%.2f", salario_atual, "\n");
    
    return 0;
    
}

int main(){
    
    float salario, aumento;
    
    scanf("%f", &salario);
    scanf("%f", &aumento);
    
    novo_salario(salario, aumento);
    
    return 0;
    
}