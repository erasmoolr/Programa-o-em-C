#include <stdio.h>
int main() {
    int idade;
    int matricula;
    float altura;
    char nome [50];
    printf("Digite sua idade: \n ");
    scanf("%d", &idade);
    printf("Digite sua altura: \n ");
    scanf("%f", &altura);
    getchar();
    printf("Digite seu nome: \n ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite sua matricula:\n");
    scanf("%d", &matricula);
    printf("Nome do aluno: %s\n",nome);
    printf("Idade: %d\n",idade);
    printf("Altura: %.2f\n",altura);
    printf("Matricula: %d\n",matricula);
    return 0;
}