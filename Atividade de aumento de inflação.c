#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void cabecalho(){
	system("cls || clear");
	fflush(stdin); // limpa o cache
	printf("=== SENAI ===\n");
}
// Fun��o para inflacionar o pre�o do produto
float inflacionarPreco(float preco) {
    if (preco < 100) {
        // Se o pre�o for menor que 100, inflaciona em 10%
        // *= � um operador composto equivalente a pre�o = pre�o * 1.1
        preco *= 1.1; // 10% de aumento
    } else {
        // Se o pre�o for maior ou igual a 100, inflaciona em 20%
        preco *= 1.2; // 20% de aumento
    }
    return preco;
}

int main() {
	setlocale(LC_ALL,"");
	cabecalho();
    float preco;
    
    // Solicitar o pre�o do produto ao usu�rio
    printf("Digite o pre�o do produto: R$ ");
    scanf("%f", &preco);
    
    // Chamada da fun��o para inflacionar o pre�o e imprimir o resultado
    printf("O novo pre�o do produto �: R$ %.2f\n", inflacionarPreco(preco));
    
    return 0;
}
