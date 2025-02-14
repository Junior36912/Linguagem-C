#include <stdio.h>

#define NUMERO_TENTATIVAS 5

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    for(int i = 1 ; i <= NUMERO_TENTATIVAS ; i++){
        printf("Chute: %d de %d\n", i, NUMERO_TENTATIVAS);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        printf("%d\n", numerosecreto);

        int acertou = (numerosecreto == chute);
        int menor = (numerosecreto > chute);
        int maior = (numerosecreto < chute);

        if(acertou){
            printf("Parabens! Voce acertou!\n");
            break;
        }
        else if(menor){
            printf("Seu chute foi menor que o numero secreto!\n");
        }
        else if(maior){
                printf("Seu chute foi maior que o numero secreto!\n");
        }
    }    
}