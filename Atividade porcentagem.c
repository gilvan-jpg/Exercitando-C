#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o valor inserido pelo usuário
    float valor;

    // Solicita ao usuário que insira um valor qualquer
    printf("Digite um valor qualquer: ");
    scanf("%f", &valor);

    // Calcula o valor com reajuste de 10%
    float valorComReajuste = valor * 1.1;

    // Imprime na tela o valor com o reajuste
    printf("O valor com reajuste de 10%% é: %.2f\n", valorComReajuste);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
