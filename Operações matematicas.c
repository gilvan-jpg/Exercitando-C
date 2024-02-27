#include <stdio.h>

int main() {
    // Declaração das variáveis
    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    // Calcula as operações
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    
    // Verifica se o segundo número é diferente de zero antes de fazer a divisão
    if (numero2 != 0) {
        divisao = numero1 / numero2;
    } else {
        printf("Erro: divisão por zero não é permitida.\n");
        return 1; // Retorna 1 para indicar que houve um erro
    }

    // Mostra os dados iniciais e os resultados
    printf("\nDados iniciais:\n");
    printf("Número 1: %.2f\n", numero1);
    printf("Número 2: %.2f\n", numero2);
    printf("\nResultados:\n");
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}
