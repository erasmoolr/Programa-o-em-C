#include <stdio.h>
int main() {
    char letra_estado;
    char codigo_cidade [50];
    char nome_cidade [50];
    int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
    printf("Estado: \n ");
    scanf("%c", &letra_estado);
    printf("Código da cidade: \n ");
    scanf("%s", código_cidade);
    printf("Nome da cidade: \n ");
    scanf("%s", nome_cidade);
    printf("População: \n ");
    scanf("%d", &populacao);
    printf("Área (km²): \n ");
    scanf("%f", &area_km2);
    printf("PIB: \n ");
    scanf("%f", &pib);
    printf("Pontos turísticos: \n ");
    scanf("%d", &pontos_turisticos);

    return 0;
}