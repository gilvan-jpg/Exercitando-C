#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float salarioUsuario, salarioMinimo;
    int quantidadeSalariosMinimos;

    // Define o valor do sal�rio m�nimo
    salarioMinimo = 1412.00;

    // Solicita ao usu�rio que insira o valor do seu sal�rio
    printf("Digite o valor do seu sal�rio: ");
    scanf("%f", &salarioUsuario);

    // Calcula quantos sal�rios m�nimos o usu�rio ganha
    quantidadeSalariosMinimos = salarioUsuario / salarioMinimo;

    // Imprime na tela o resultado
    printf("Voc� ganha aproximadamente %.2f sal�rios m�nimos.\n", quantidadeSalariosMinimos);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
