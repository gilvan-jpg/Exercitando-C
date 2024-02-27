#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o número
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula e mostra o antecessor e o sucessor do número
    printf("O antecessor de %d é %d.\n", numero, numero - 1);
    printf("O sucessor de %d é %d.\n", numero, numero + 1);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
