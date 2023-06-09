#include <stdio.h>
#include <stdlib.h>

int main() {
    // VARIAVEIS E CONSTANTES
    #define texto "-------------------------\n-----Vamos calcular!-----\n"
    int num1, num2;
    char operador, continuar = 's';
    // LOOPING PARA O PROGRAMA CONTINUAR
    while (continuar == 's') {
        printf("%s", texto);
        //ENTRADA DE VALORES
        printf("Digite o primeiro valor: ");
        scanf("%d", &num1);
        printf("Digite o segundo valor: ");
        scanf("%d", &num2);
        scanf("%*c");
        printf("Qual operação desejá efetuar\n+(soma)\n-(subtração)\nx(multiplicação)\n/(divisão)\nQual efetuar? ");
        scanf("%c", &operador);
        // PROCESSAMENTO DOS CALCULOS
        while (operador != '+' && operador != '-' && operador != 'x' && operador != '/') {
            printf("\n-------------------------\n[ERRO], VALOR INCORRETO!\n-------------------------\n");
            printf("Qual operação desejá efetuar\n+(soma)\n-(subtração)\nx(multiplicação)\n/(divisão)\nQual efetuar? ");
            scanf("%c", &operador);
        }
        
        switch (operador) {
            case ('+'):
                int soma = num1 + num2;
                printf("-------------------------\nA soma entre %d e %d é %d\n", num1, num2, soma);
                break;
            case ('-'):
                int subt = num1 - num2;
                printf("-------------------------\nA subtração entre %d e %d é %d\n", num1, num2, subt);
                break;
            case ('x'):
                int mult = num1 * num2;
                printf("-------------------------\nA multiplicação entre %d e %d é %d\n", num1, num2, mult);
                break;
            case ('/'):
                int divi = num1 / num2;
                printf("-------------------------\nA divisão entre %d e %d é %d\n", num1, num2, divi);
                break;
            default:
                break;
        }
        // CONTINUAR O PROGRAMA OU SAIR
        printf("-------------------------\n desejá continuar? s(sim), n(não): ");
        scanf("%*c");
        scanf("%c", &continuar);
        while (continuar != 's' && continuar != 'n') {
            printf("[ERRO] COLOQUE UM VALOR VALIDO!\n");
            printf("-----------------------\n desejá continuar? s(sim), n(não): ");
            scanf("%*c");
            scanf("%c", &continuar);
        }
        
    } 
}