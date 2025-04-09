#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf("Carta A01");
    char nome[50];
    int CDC, populacao, PT;
    float area, PIB;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nNome da cidade: ");
    scanf("%s", &nome);
    printf("O nome da cidade e: %s\n", nome);

    printf("\nCodigo da cidade: ");
    scanf("%d", &CDC);
    printf("O codigo da cidade e: %d\n", CDC);

    printf("\nPontos Turisticos: ");
    scanf("%d", &PT);
    printf("%s Tem: %d pontos turisticos\n", nome, PT);

    printf("\npopulacao: ");
    scanf("%d", &populacao);
    printf("%s Tem uma populacao de: %d\n", nome, populacao);

    printf("\nArea da cidade em KM2: ");
    scanf("%f", &area);
    printf("%s Tem uma area de %fKM2\n", nome, area);

    printf("\nPIB da cidade: ");
    scanf("%f", &PIB);
    printf("A PIB de %s e $%f\n", nome, PIB);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta A02\n");
    char nome2[50];
    int CDC2, populacao2, PT2;
    float area2, PIB2;

    printf("\nNome da segunda cidade: ");
    scanf("%s", &nome2);
    printf("O nome da segunda cidade e: %s\n", nome2);

    printf("\nCodigo da segunda cidade: ");
    scanf("%d", &CDC2);
    printf("O codigo da segunda cidade e: %d\n", CDC2);

    printf("\nPontos Turisticos: ");
    scanf("%d", &PT2);
    printf("%s Tem: %d pontos turisticos\n", nome2, PT2);

    printf("\npopulacao: ");
    scanf("%d", &populacao2);
    printf("%s Tem uma populacao de: %d\n", nome2, populacao2);

    printf("\nArea da segunda cidade em KM2: ");
    scanf("%f", &area2);
    printf("%s Tem uma area de %fKM2\n", nome2, area2);

    printf("\nPIB da segunda cidade: ");
    scanf("%f", &PIB2);
    printf("\nA PIB de %s e $%f", nome2, PIB2);


    return 0;
}
