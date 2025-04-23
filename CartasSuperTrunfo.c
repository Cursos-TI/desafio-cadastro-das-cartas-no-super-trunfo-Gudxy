#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Primeira cidade
    char nome[50];
    int CDC, populacao, PT;
    float area, PIB;

    printf("== Carta A01 ==\n");

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("Codigo da cidade: ");
    scanf("%d", &CDC);

    printf("Pontos Turisticos: ");
    scanf("%d", &PT);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area da cidade em KM²: ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &PIB);

    float Densidade_Populacional = populacao / area;
    float PIB_per_capita = PIB / populacao;

    printf("\n-- Informações da Cidade A01 --\n");
    printf("Nome: %s\n", nome);
    printf("Código: %d\n", CDC);
    printf("População: %d\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: $%.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", PT);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per Capita: %.2f Reais\n",PIB_per_capita);

    // Segunda cidade
    char nome2[50];
    int CDC2, populacao2, PT2;
    float area2, PIB2;

    printf("\n-- Carta B02 --\n");

    printf("Nome da segunda cidade: ");
    scanf("%s", nome2);

    printf("Codigo da segunda cidade: ");
    scanf("%d", &CDC2);

    printf("Pontos Turisticos: ");
    scanf("%d", &PT2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area da segunda cidade em KM²: ");
    scanf("%f", &area2);

    printf("PIB da segunda cidade: ");
    scanf("%f", &PIB2);

    float Densidade_Populacional2 = populacao2 / area2;
    float PIB_per_capita2 = PIB2 / populacao2;
    
    printf("\n-- Informações da Cidade B02 --\n");
    printf("Nome: %s\n", nome2);
    printf("Código: %d\n", CDC2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: $%.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PT2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f Reais\n",PIB_per_capita2);
    return 0;
}

