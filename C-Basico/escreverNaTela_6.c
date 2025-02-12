#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    printf("%d\n", numerosecreto);

    if(numerosecreto == chute){
        printf("Parabens! Você acertou!");
    }
    else{
        printf("Você errou!");
        if(numerosecreto > chute){
            printf("Seu chute foi menor que o numero secreto!");
        }
        if(numerosecreto < chute){
            printf("Seu chute foi maior que o numero secreto!");
        }
        
    }

}