#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o para verificar se um n�mero � par ou �mpar
void parOuImpar(int num) {
    if (num % 2 == 0) {
        printf("%d � um n�mero par.\n", num);
    } else {
        printf("%d � um n�mero �mpar.\n", num);
    }
}

int main() {
	setlocale(LC_ALL,"");
    int numero;

    // Solicitar o n�mero ao usu�rio
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Chamar a fun��o para verificar se o n�mero � par ou �mpar
    parOuImpar(numero);

    return 0;
}
