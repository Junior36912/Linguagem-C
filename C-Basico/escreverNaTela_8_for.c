#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    for(int i = 1 ; i <= 3 ; i++){
        printf("Chute: %d de 3\n", i);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        printf("%d\n", numerosecreto);

        int acertou = (numerosecreto == chute);

        if(acertou){
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo! Voce e bom.\n");
        }
        else{
            printf("Voce errou!");
            if(numerosecreto > chute){
                printf("Seu chute foi menor que o numero secreto!\n");
            }
            if(numerosecreto < chute){
                printf("Seu chute foi maior que o numero secreto!\n");
            }
            
        }
    }
}