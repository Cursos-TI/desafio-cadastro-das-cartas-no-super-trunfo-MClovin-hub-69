#include <stdio.h>

int main() {
    // Declaração das variáveis
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada dos dados
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê uma string com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}