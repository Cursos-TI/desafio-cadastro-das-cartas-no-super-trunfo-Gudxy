#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Primeira cidade
    char nome[50];
    int CDC, PT;
    float area, PIB;
    unsigned long int populacao;

    printf("== Carta A01 ==\n");

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("Codigo da cidade: ");
    scanf("%d", &CDC);

    printf("Pontos Turisticos: ");
    scanf("%d", &PT);

    printf("Populacao: ");
    scanf("%u", &populacao);

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
    int CDC2, PT2;
    float area2, PIB2;
    unsigned long int populacao2;

    printf("\n-- Carta B02 --\n");

    printf("Nome da segunda cidade: ");
    scanf("%s", nome2);

    printf("Codigo da segunda cidade: ");
    scanf("%d", &CDC2);

    printf("Pontos Turisticos: ");
    scanf("%d", &PT2);

    printf("Populacao: ");
    scanf("%u", &populacao2);

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
    
    long double Super_Poder1 = (float)(populacao + area + PIB + PT + PIB_per_capita + Densidade_Populacional);
    long double Super_Poder2 = (float)(populacao2 + area2 + PIB2 + PT2 + PIB_per_capita2 + Densidade_Populacional2);

    printf("\n-- Comparação de Cartas --\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PT > PT2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade_Populacional > Densidade_Populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita > PIB_per_capita2);
    printf("Super Poder: Carta 1 venceu (%.2f)\n", Super_Poder1 > Super_Poder2);
    
    
    
    
    
    return 0;
}

