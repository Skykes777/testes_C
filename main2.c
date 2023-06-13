#include <stdio.h>
#include <stdlib.h>

int main() {
    #define textoIntro "---- VAMOS JOGAR ----\n"
    int jogador = 1;
    char op = 's';

    while (op == 's') {
        int computador = (rand() % 3);
        // SE O VALOR DO COMPUTADOR CAIR EM '0' ELE VAI VIRAR '1'
        if (computador == 0) {
            computador++;
        }
        // ENTRADA DO VALOR
        printf("%s", textoIntro);
        printf("Escolha um objeto!\n[1] PEDRA\n[2] PAPEL\n[3] TESOURA\nDigite: ");
        scanf("%d", &jogador);
        while (jogador != 1 && jogador != 2 && jogador != 3) {
            printf("---------------------\n[ERRO] por favor, escolha apenas uma dessas opções!\n[1] PEDRA\n[2] PAPEL\n[3] TESOURA\nDigite: ");
            scanf("%d", &jogador);
        }
        // APRESENTAÇÃO DO RESULTADO
        printf("---------------------\n");
        if (jogador == 1) { // PEDRA
            if (computador == 1) {
                printf("EMPATE! Você jogou pedra, e o computador tambem :(\n");
            } else if (computador == 2) {
                printf("O COMPUTADOR VENCEU! Você jogou pedra e o computador jogou papel :'(\n");
            } else {
                printf("PARABENS, VOCÊ VENCEU! Você jogou pedra e o computador tesoura :)\n");
            }
        } else if (jogador == 2) { // PAPEL
            if (computador == 1){
                printf("PARABENS, VOCÊ VENCEU! Você jogou papel e o computador pedra :)\n");
            } else if (computador == 2) {
                printf("EMPATE! Você jogou papel e o computador tambem :(\n");
            } else {
                printf("O COMPUTADOR VENCEU! Você jogou papel e o computador jogou tesoura :'(\n");
            }
        } else if (jogador == 3) { // TESOURA
            if (computador == 1) {
                printf("O COMPUTADOR VENCEU! Você jogou tesoura e o computador jogou pedra :'(\n");
            } else if (computador == 2) {
                printf("PARABENS, VOCÊ VENCEU! Você jogou tesoura e o computador papel :)\n");
            } else {
                printf("EMPATE! Você jogou tesoura e o computador tambem :(\n");
            }
        }
        printf("---------------------\n");
        // CONTINUAR OU FECHAR O PROGRAMA
        printf("Desejá continuar jogando ou encerrar o programa? ['s'(sim)/ 'n'(não)]: ");
        scanf("%*c");
        scanf("%c", &op);
        while (op != 's' && op != 'n') {
            printf("---------------------\n[ERRO] por favor, escolha apenas uma dessas opções! ['s'(sim)/ 'n'(não)]: ");
            scanf("%*c");
            scanf("%c", &op);
        }
    }
}