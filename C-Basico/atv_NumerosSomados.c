#include <stdio.h>

#define SOMAR_ATE 100

int main(){

    int somado = 0;
    for(int i = 1 ; i <= SOMAR_ATE ; i++){
        
        somado += i;

        printf("%d \n", i);
    }
    printf("%d \n", somado);
}