#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para verificar se um número é par ou ímpar
void parOuImpar(int num) {
    if (num % 2 == 0) {
        printf("%d é um número par.\n", num);
    } else {
        printf("%d é um número ímpar.\n", num);
    }
}

int main() {
	setlocale(LC_ALL,"");
    int numero;

    // Solicitar o número ao usuário
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Chamar a função para verificar se o número é par ou ímpar
    parOuImpar(numero);

    return 0;
}
