#include <stdio.h>

int main(){
    int x;
    int y;


    printf("Primeiro valor: ");
    scanf("%d", &x);

    printf("Segundo valor: ");
    scanf("%d", &y);

    int multiplicacao = x * y;
    
    printf("Resultado: %d\n", multiplicacao);
}