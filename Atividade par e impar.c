#include <stdio.h>

int main() {
    // Declara��o da vari�vel para armazenar o n�mero
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � par ou �mpar
    if (numero % 2 == 0) {
        printf("O n�mero %d � par.\n", numero);
    } else {
        printf("O n�mero %d � �mpar.\n", numero);
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
