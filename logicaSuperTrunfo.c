#include <stdio.h>

#define MAX 50

typedef struct {
    char estado[MAX];
    char codigo[MAX];
    char cidade[MAX];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
   Carta, carta1, carta2:

   printf("=== Cadastro da Carta 1 ===\n");
   printf("Estado (ex: SP): ");
   scanf("%s", carta1.estado);
   printf("Código (ex: C001): ");
   scanf("%s", carta1.codigo);
   printf("Cidade: ");
   scanf(" %[^\n]", carta1.cidade);
   printf("Populção: ");
   scanf("%d", &carta1.populacao);
   printf("Área (em km²): ");
   scanf("%f", &carta1.area);
   printf("PIB (em bilhões): ");
   scanf("%f", &carta1.pib);
   printf("Número de pontos turísticos: ");
   scanf("%d", &carta1.pontosTuristicos);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", carta2.estado);
    printf("Código (ex: C002): ");
    scanf("%s", carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("\n=== Dados das Cartas ===\n");
    printf("\nCarta 1: %s - %s (%s)\n", carta1.estado, carta1.codigo, carta1.cidade);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n", 
        carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f\n", 
        carta1.densidadePopulacional, carta1.pibPerCapita);

        printf("\nCarta 2: %s - %s (%s)\n", carta2.estado, carta2.codigo, carta2.cidade);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n", 
        carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f\n", 
        carta2.densidadePopulacional, carta2.pibPerCapita);

        int atributo = 1;
        int vencedor = 0;

    

    return 0;
}
