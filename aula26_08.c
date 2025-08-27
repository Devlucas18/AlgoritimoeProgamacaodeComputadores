#include <stdio.h>

int main(){
    char nome[100];
    int idade;
    float massa_corporal;
    float altura;
    puts("Digite seu nome: ");
    fllush(stdin);
    fgets(nome, sizeof(nome), stdin);
    puts("Digite sua idade: ");
    scanf("%d", &idade);
    puts("Digite sua massa corporal[g]: ");
    scanf("%f", &massa_corporal);
    puts("Digite sua altura[cm]: ");
    scanf("%f", &altura);
    int kg = massa_corporal/1000;
    int cm = altura/100;
    printf("Nome: %sIdade: %d anos\nMassa corporal: %d kg\nAltura: %d m\n", nome, idade, kg, cm);
    return 0;

    

}