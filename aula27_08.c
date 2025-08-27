#include <stdio.h>

int main(){
    char nome[100];
    int idade;
    float massa_corporal;
    float altura;
    puts("Digite seu nome: ");
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);
    puts("Digite sua idade: ");
    scanf("%d", &idade);
    puts("Digite sua massa corporal[g]: ");
    scanf("%f", &massa_corporal);
    puts("Digite sua altura[cm]: ");
    scanf("%f", &altura);
    float kg = massa_corporal/1000;
    float m = altura/100;
    printf("Nome: %sIdade: %d anos\nMassa corporal: %f kg\nAltura: %f m\n", nome, idade, kg, m);
    //calcular e exibir o IMC
    // massa/altura^2
    if (altura > 0){
        float imc = kg/ (m*m);
        printf("%f", imc);
    }
    
    return 0;


    

}