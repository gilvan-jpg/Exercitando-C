#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void cabecalho(){
	system("cls || clear");
	fflush(stdin); // limpa o cache
	printf("=== SENAI ===\n");
}

// Função para calcular a média das notas
float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

// Função para verificar se o aluno está aprovado ou reprovado
void verificarAprovacao(float media) {
    if (media >= 7.0) {
        printf("O aluno está aprovado!\n");
    } else {
        printf("O aluno está reprovado.\n");
    }
}

int main() {
	setlocale(LC_ALL,"");
	cabecalho();
    float nota1, nota2;
    
    // Solicitar as notas ao usuário
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    // Calcular a média das notas
    float media = calcularMedia(nota1, nota2);
    
    // Verificar se o aluno está aprovado ou reprovado
    verificarAprovacao(media);
    
    return 0;
}
