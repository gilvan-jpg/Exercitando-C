#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o para converter metros para cent�metros
int metrosParaCentimetros(float metros) {
    return metros * 100;
}

int main() {
	setlocale(LC_ALL,"");
    float metros;
    
    // Solicitar o valor em metros ao usu�rio
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    
    // Chamada da fun��o para converter metros para cent�metros e imprimir o resultado
    printf("%.2f metros correspondem a %d cent�metros.\n", metros, metrosParaCentimetros(metros));
    
    return 0;
}
