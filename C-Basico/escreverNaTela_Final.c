#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_TENTATIVAS 5

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int nivel;
    int maxTentativas;

    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch(nivel) {
        case 1:
            maxTentativas = 20;
            break;

        case 2:
            maxTentativas = 15;
            break;

        default:
            maxTentativas = 6;
            break;
    }

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int numeroTentativas = 0;

    int acertou = 0;
    double pontos = 1000;
    printf("Numero secreto: %d \n", numerosecreto);
    
    for(int i = 1; i <= maxTentativas ; i++){
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Numeros abaixo de 0 nao sao permitidos \n");
            continue;
        }
        else {
            printf("Seu chute foi %d\n", chute);

            numeroTentativas += 1;
            acertou = (numerosecreto == chute);
            int menor = (numerosecreto > chute);
            int maior = (numerosecreto < chute);
    
            if(acertou){
                break;
            }
            else if(menor){
                printf("Seu chute foi menor que o numero secreto!\n");
            }
            else if(maior){
                printf("Seu chute foi maior que o numero secreto!\n");
            }
        }
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }    

    printf("============================================= \n");
    printf("Fim de jogo! \n");

    if(acertou){
        printf("Parabens! Voce acertou! \n");
        printf("Pontos finais: %.2f \n", pontos);
        printf("Finalizou em %d tentativas \n", numeroTentativas);
    }else{
        printf("Voce perdeu!");
    }
    printf("============================================= \n");

}