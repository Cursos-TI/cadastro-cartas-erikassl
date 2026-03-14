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
    unsigned long int populacao1 = 155000;
    //int populacao1 = 1550000;//
    float area1 = 123521.55;
    float pib1 = 699.28; // Bilhões
    int pontosTuristicos1 = 100;

  // CADASTRO DA CARTA 2 (RONDÔNIA)
    char estado2[] = "Rondônia";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Porto Velho";
    unsigned long int populacao2 = 674800;
    //int populacao2 = 674800;//
    float area2 = 121300.25;
    float pib2 = 300.50; // Milhões
    int pontosTuristicos2 = 2;

  // Área para entrada de dados
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapta1 = (pib1 * 1000000000) / (float)populacao1;

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapta2 = (pib2 * 1000000000) / (float)populacao2;

  // Super poder = soma de todos os tributos + inverso da densidade
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapta1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapta2 + (1.0f / densidade2);

 // LOGICA DE COMPARAÇÃO (RELACIONAIS)
    // Resultado 1 = Verdadeiro (Carta 1 vence) | 0 = Falso (Carta 2 vence)
    int compPopulacao = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPib = pib1 > pib2;
    int compPontos = pontosTuristicos1 > pontosTuristicos2;

    // Densidade: Menor valor vence
    int compDensidade = densidade1 < densidade2;
    int compPibCapita = pibPerCapta1 > pibPerCapta2;
    int compSuperPoder = superPoder1 > superPoder2;

  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB Per Capita: %f reais\n", pibPerCapta1);
    printf("Super Poder: %f\n\n", populacao1, area1, pib1, pontosTuristicos1, pibPerCapta1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB Per Capita: %f reais\n", pibPerCapta2);
    printf("Super Poder: %f\n\n", populacao2, area2, pib2, pontosTuristicos2, pibPerCapta2);
  
  // EXIBIÇÃO DO RESULTADO DA BATALHA
    printf("Comparação de Cartas (1 = Carta 1 Vence / 0 = Carta 2 Vence):\n");
    printf("-----------------------------------------------------------\n");
    printf("População: %d\n", compPopulacao);
    printf("Área: %d\n", compArea);
    printf("PIB: %d\n", compPib);
    printf("Pontos Turísticos: %d\n", compPontos);
    printf("Densidade Populacional: %d\n", compDensidade);
    printf("PIB per Capita: %d\n", compPibCapita);
    printf("Super Poder: %d\n", compSuperPoder);

return 0;
} 
