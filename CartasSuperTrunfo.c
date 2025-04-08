#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50];
    int CDC, populacao, PT;
    float area, PIB;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Nome da cidade: ");
    scanf("%s", &nome);
    printf("O nome da cidade e: %s\n", nome);

    printf("\nCodigo da cidade: ");
    scanf("%d", &CDC);

    printf("\nPontos Turisticos: ");
    scanf("%d", &PT);

    printf("populacao: ");
    scanf("%d", &populacao);

    printf("Area da cidade em KM2: ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &PIB);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
