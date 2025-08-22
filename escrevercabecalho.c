#include <stdio.h>
#include <string.h>

int main() {
    char disciplina[250];
    char turma[12];
    char nome[100];
    char matricula[12];
    printf("Digite a disciplina: ");
    scanf("%s", disciplina);

    printf("Digite a turma: ");
    scanf("%s", turma);

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite a matricula: ");
    scanf("%s", matricula);

    printf("Disciplina: %s\n", disciplina);
    printf("Turma: %s\n", turma);
    printf("Nome: %s\n", nome);
    printf("Matricula: %s\n", matricula);
    return 0;
}