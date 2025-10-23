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

    

    return 0;
}
