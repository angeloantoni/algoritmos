#include <stdio.h>

double calculo_racao(double kg, double comida_gato_01, double comida_gato_02){

    double peso_convertido = (kg * 1000); 
    double total_comida = ((comida_gato_01 + comida_gato_02) * 5);
    double resto_racao = (peso_convertido - total_comida);

    if(resto_racao < 0){

        resto_racao = 0;
    };

    printf("Resto de raçao apos cinco dias: ");
    printf("%.1lf gramas", resto_racao);

    return 0;
}

int main(){

    double kg, comida_gato_01, comida_gato_02; 

    scanf("%lf", &kg);
    scanf("%lf", &comida_gato_01);
    scanf("%lf", &comida_gato_02);

    calculo_racao(kg, comida_gato_01, comida_gato_02);
    
    return 0;


}