#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o para calcular a soma de dois n�meros
float soma(float num1, float num2) {
    return num1 + num2;
}

// Fun��o para calcular a subtra��o de dois n�meros
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Fun��o para calcular a multiplica��o de dois n�meros
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Fun��o para calcular a divis�o de dois n�meros
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divis�o por zero.\n");
        return 0; // ou poderia retornar um valor especial para indicar um erro
    }
}

int main() {
	setlocale(LC_ALL,"");
    float num1, num2;
    
    // Solicitar os n�meros ao usu�rio
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);
    
    // Chamar as fun��es e imprimir os resultados
    printf("Soma: %.2f\n", soma(num1, num2));
    printf("Subtra��o: %.2f\n", subtracao(num1, num2));
    printf("Multiplica��o: %.2f\n", multiplicacao(num1, num2));
    printf("Divis�o: %.2f\n", divisao(num1, num2));
    
    return 0;
}
