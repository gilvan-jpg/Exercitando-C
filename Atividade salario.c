#include <stdio.h>

int main() {
    // Declaração das variáveis
    float salarioUsuario, salarioMinimo;
    int quantidadeSalariosMinimos;

    // Define o valor do salário mínimo
    salarioMinimo = 1412.00;

    // Solicita ao usuário que insira o valor do seu salário
    printf("Digite o valor do seu salário: ");
    scanf("%f", &salarioUsuario);

    // Calcula quantos salários mínimos o usuário ganha
    quantidadeSalariosMinimos = salarioUsuario / salarioMinimo;

    // Imprime na tela o resultado
    printf("Você ganha aproximadamente %.2f salários mínimos.\n", quantidadeSalariosMinimos);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
