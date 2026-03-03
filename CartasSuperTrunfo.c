#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // CADASTRO DA CARTA 1 (ALAGOAS)
    char estado1[] = "Alagoas";
    char codigo1[] = "A01";
    char nomeCidade1[] = "Maceió";
    int populacao1 = 1550000;
    float area1 = 123521.55;
    float pib1 = 699.28; // Bilhões
    int pontosTuristicos1 = 100;

    // CADASTRO DA CARTA 2 (RONDÔNIA)
    char estado2[] = "Rondônia";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Porto Velho";
    int populacao2 = 674800;
    float area2 = 121300.25;
    float pib2 = 300.50; // Milhões
    int pontosTuristicos2 = 2;

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
