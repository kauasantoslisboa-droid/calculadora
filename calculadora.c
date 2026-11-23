#include <stdio.h>

int main() {
    int opcao;
    double num1, num2, resultado;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1. Subtracao\n");
        printf("2. Multiplicacao\n");
        printf("3. Divisao\n");
        printf("4. Soma\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
        }

        switch (opcao) {
            case 1:
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2:
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3:
                if (num2 == 0) {
                    printf("Erro: divisao por zero!\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 4:
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
