#include <stdio.h>

#define NUMERO_TENTATIVAS 5

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    int numeroTentativas = 0;

    int ganhou = 0;

    int pontos = 1000;

    while(ganhou == 0){
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Numeros abaixo de 0 nao sao permitidos \n");
        }
        else {
            printf("Seu chute foi %d\n", chute);

            numeroTentativas += 1;
            int acertou = (numerosecreto == chute);
            int menor = (numerosecreto > chute);
            int maior = (numerosecreto < chute);
    
            if(acertou){
                int calculo = (numerosecreto - chute) / 2;
                pontos -= calculo;
                printf("Parabens! Voce acertou na tentativa de numero %d!\n", numeroTentativas);
                break;
            }
            else if(menor){
                int calculo = (numerosecreto - chute) / 2;
                pontos -= calculo;
                printf("Seu chute foi menor que o numero secreto!\n");
            }
            else if(maior){
                int calculo = (chute - numerosecreto) / 2;
                pontos -= calculo;
                printf("Seu chute foi maior que o numero secreto!\n");
            }
            printf("Pontos atuais: %d \n", pontos);
        }
    }    
    printf("Pontos finais: %d \n", pontos);
}