#include <stdio.h>

int main() {
    // Declara��o da vari�vel para armazenar o n�mero
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Calcula e mostra o antecessor e o sucessor do n�mero
    printf("O antecessor de %d � %d.\n", numero, numero - 1);
    printf("O sucessor de %d � %d.\n", numero, numero + 1);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
