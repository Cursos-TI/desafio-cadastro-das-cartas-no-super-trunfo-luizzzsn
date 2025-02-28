#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração das variáveis
    int pop, pontos, pop2, pontos2; 
    char estado, cidade[50], codigo[50], estado2, cidade2[50], codigo2[50]; 
    float area, pib, area2, pib2; 

    // Coleta de dados para a primeira carta
    printf("Insira os dados da primeira carta. \n");

    printf("Digite a letra inicial do estado: \n");
    scanf(" %c", &estado); 

    printf("Digite o código: \n");
    scanf("%s", codigo); 

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade); 

    printf("Digite o tamanho da população: \n");
    scanf("%d", &pop); 

    printf("Digite a área do estado em km²: \n");
    scanf("%f", &area); 

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib); 

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos); 

    // Coleta de dados para a segunda carta
    printf("\nInsira os dados da segunda carta. \n");

    printf("Digite a letra inicial do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &pop2);

    printf("Digite a área do estado em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos2);

    // Exibição dos dados coletados
    printf("\n--- Dados da primeira carta ---\n");
    printf("Estado: %c - Código: %s - Nome da cidade: %s\n", estado, codigo, cidade);
    printf("População: %d - Área: %.2f km² - PIB: %.2f bilhões de reais - Pontos turísticos: %d\n", pop, area, pib, pontos);

    printf("\n--- Dados da segunda carta ---\n");
    printf("Estado: %c - Código: %s - Nome da cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d - Área: %.2f km² - PIB: %.2f bilhões de reais - Pontos turísticos: %d\n", pop2, area2, pib2, pontos2);

    return 0;
}
