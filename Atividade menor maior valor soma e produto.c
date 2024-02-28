#include <stdio.h>
#include <locale.h>

void cabecalho(){
	printf("\n=== SENAI ===\n");
	system("cls || clear");
	fflush(stdin); // limpa o cache
}
int main() {
	setlocale(LC_ALL, "");
	
    int num1, num2;
    
    // Recebendo os dois inteiros como entrada do teclado
    cabecalho();
    printf("Digite o primeiro inteiro: ");
    scanf("%d", &num1);
    
    cabecalho();
    printf("Digite o segundo inteiro: ");
    scanf("%d", &num2);
    
    // Calculando a média
    float media = (num1 + num2) / 2.0;
    
    // Calculando a soma
    int soma = num1 + num2;
    
    // Calculando o produto
    int produto = num1 * num2;
    
    // Encontrando o menor valor
    int menor = (num1 < num2) ? num1 : num2;
    
    // Encontrando o maior valor
    int maior = (num1 > num2) ? num1 : num2;
    
    // Verificando se os números são iguais
    cabecalho();
    if (num1 == num2) {
        printf("Os números informados são iguais.\n");
    } else {
        printf("Os números informados são diferentes.\n");
    }
    
    // Escrevendo os resultados na tela
    cabecalho();
    printf("A média é: %.2f\n", media);
    printf("A soma é: %d\n", soma);
    printf("O produto é: %d\n", produto);
    printf("O menor valor é: %d\n", menor);
    printf("O maior valor é: %d\n", maior);
    
    return 0;
}
