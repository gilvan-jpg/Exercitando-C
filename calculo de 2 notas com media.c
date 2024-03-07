#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void cabecalho(){
	system("cls || clear");
	fflush(stdin); // limpa o cache
	printf("=== SENAI ===\n");
}

// Fun��o para calcular a m�dia das notas
float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

// Fun��o para verificar se o aluno est� aprovado ou reprovado
void verificarAprovacao(float media) {
    if (media >= 7.0) {
        printf("O aluno est� aprovado!\n");
    } else {
        printf("O aluno est� reprovado.\n");
    }
}

int main() {
	setlocale(LC_ALL,"");
	cabecalho();
    float nota1, nota2;
    
    // Solicitar as notas ao usu�rio
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    // Calcular a m�dia das notas
    float media = calcularMedia(nota1, nota2);
    
    // Verificar se o aluno est� aprovado ou reprovado
    verificarAprovacao(media);
    
    return 0;
}
