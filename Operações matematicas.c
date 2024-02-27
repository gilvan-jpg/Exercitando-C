#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;

    // Solicita ao usu�rio que insira os dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero2);

    // Calcula as opera��es
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    
    // Verifica se o segundo n�mero � diferente de zero antes de fazer a divis�o
    if (numero2 != 0) {
        divisao = numero1 / numero2;
    } else {
        printf("Erro: divis�o por zero n�o � permitida.\n");
        return 1; // Retorna 1 para indicar que houve um erro
    }

    // Mostra os dados iniciais e os resultados
    printf("\nDados iniciais:\n");
    printf("N�mero 1: %.2f\n", numero1);
    printf("N�mero 2: %.2f\n", numero2);
    printf("\nResultados:\n");
    printf("Soma: %.2f\n", soma);
    printf("Subtra��o: %.2f\n", subtracao);
    printf("Multiplica��o: %.2f\n", multiplicacao);
    printf("Divis�o: %.2f\n", divisao);

    return 0;
}
