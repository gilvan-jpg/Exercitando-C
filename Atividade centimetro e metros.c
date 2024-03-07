#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para converter metros para centímetros
int metrosParaCentimetros(float metros) {
    return metros * 100;
}

int main() {
	setlocale(LC_ALL,"");
    float metros;
    
    // Solicitar o valor em metros ao usuário
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    
    // Chamada da função para converter metros para centímetros e imprimir o resultado
    printf("%.2f metros correspondem a %d centímetros.\n", metros, metrosParaCentimetros(metros));
    
    return 0;
}
