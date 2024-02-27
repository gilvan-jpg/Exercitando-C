#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o número
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
