#include <stdio.h>
int main(){

    int n = 6;
    int a[n];
    int i;
    int index = -1;

    for(i = 0; i < n; i++){
   
    scanf("%d", &a[i]);
    
    if(a[i] == 3){
    index = i;  
        }
    }
    
    printf("A última ocorrência de 3 no array é %d \n", index);
    
    return 0;
}