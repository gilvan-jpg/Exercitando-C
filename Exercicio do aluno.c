#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    char nome[50];
    int idade;
    float nota1, nota2, nota3, nota4;
    float media;

    // Solicita ao usu�rio que insira o nome do aluno
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    // Solicita ao usu�rio que insira a idade do aluno
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    // Solicita ao usu�rio que insira as quatro notas do aluno
    printf("Digite as quatro notas do aluno:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Nota 4: ");
    scanf("%f", &nota4);

    // Calcula a m�dia aritm�tica das notas
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Mostra na tela o nome, idade, notas e m�dia do aluno
    printf("\nNome do aluno: %s\n", nome);
    printf("Idade do aluno: %d\n", idade);
    printf("Notas do aluno:\n");
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Nota 4: %.2f\n", nota4);
    printf("M�dia do aluno: %.2f\n", media);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
