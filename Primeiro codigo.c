#include <stdio.h>
int main() {
	int idade;
	char nome[200];
	char sexo;
	float peso;
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin);
	
	printf("Digite o sexo = (F) ou (M): ");
	scanf("%c",&sexo);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("Sexo: %c \n", sexo);
	printf("Idade: %i \n", idade);
	printf("Peso: %f \n", peso);

	return 0;
}
