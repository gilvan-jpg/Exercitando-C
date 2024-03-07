#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void cabecalho(){
	system("cls || clear");
	fflush(stdin); // limpa o cache
	printf("=== SENAI ===\n");
}
// Função para inflacionar o preço do produto
float inflacionarPreco(float preco) {
    if (preco < 100) {
        // Se o preço for menor que 100, inflaciona em 10%
        // *= é um operador composto equivalente a preço = preço * 1.1
        preco *= 1.1; // 10% de aumento
    } else {
        // Se o preço for maior ou igual a 100, inflaciona em 20%
        preco *= 1.2; // 20% de aumento
    }
    return preco;
}

int main() {
	setlocale(LC_ALL,"");
	cabecalho();
    float preco;
    
    // Solicitar o preço do produto ao usuário
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);
    
    // Chamada da função para inflacionar o preço e imprimir o resultado
    printf("O novo preço do produto é: R$ %.2f\n", inflacionarPreco(preco));
    
    return 0;
}
