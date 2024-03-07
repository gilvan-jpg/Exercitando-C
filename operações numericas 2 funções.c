#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para calcular a soma de dois números
float soma(float num1, float num2) {
    return num1 + num2;
}

// Função para calcular a subtração de dois números
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Função para calcular a multiplicação de dois números
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Função para calcular a divisão de dois números
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisão por zero.\n");
        return 0; // ou poderia retornar um valor especial para indicar um erro
    }
}

int main() {
	setlocale(LC_ALL,"");
    float num1, num2;
    
    // Solicitar os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    // Chamar as funções e imprimir os resultados
    printf("Soma: %.2f\n", soma(num1, num2));
    printf("Subtração: %.2f\n", subtracao(num1, num2));
    printf("Multiplicação: %.2f\n", multiplicacao(num1, num2));
    printf("Divisão: %.2f\n", divisao(num1, num2));
    
    return 0;
}
