#include <stdio.h>

int main(){
    int verdade = 1;

    int contagem = 1;

    while (verdade){
        printf("%d \n", contagem);
        contagem += 1;

        if (contagem == 101){
            break;
        }
    }
}