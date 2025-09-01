#include <stdio.h>

int main(){
    //variáveis da Carta 1 
    char estado1;
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    //Variáveis da Carta 2
    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    printf("***Desafio Super Carta Trunfo!***:\n\n");

    //Entrada de Dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta 1:" );
    scanf(" %s", &codigo1); 

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    //Calculos Da Carta 1

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    //Entrada de Dados da Carta2
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    //Calculos Da Carta 2

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    //Exibindo Resultado Das Cartas
    printf("\n---Carta 1---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números De Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita1);
    
    printf("\n---Carta 2---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números De Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita2)

    // Comparação De cartas
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    return 0;
}