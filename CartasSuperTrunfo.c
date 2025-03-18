#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("========================================\n");
    printf("         CADASTRO DE CARTAS\n");
    printf("========================================\n");

    printf("Digite a letra do estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %3s", codigo1);
    
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %49s", cidade1);
    
    printf("Digite a população da primeira cidade: ");
    scanf(" %d", &populacao1);
    
    printf("Digite a área da primeira cidade (km²): ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf(" %d", &pontosTuristicos1);
    
    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda carta (ex: A01): ");
    scanf(" %3s", codigo2);
    
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %49s", cidade2);
    
    printf("Digite a população da segunda cidade: ");
    scanf(" %d", &populacao2);
    
    printf("Digite a área da segunda cidade (km²): ");
    scanf(" %f", &area2);
    
    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf(" %d", &pontosTuristicos2);
    
    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    printf("\n========================================\n");
    printf("               CARTA 1\n");
    printf("========================================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    printf("\n========================================\n");
    printf("               CARTA 2\n");
    printf("========================================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    printf("========================================\n");
    
    return 0;
}
