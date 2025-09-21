#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Definição da struct para representar uma carta
struct Carta {
    char estado[20];
    char codigo[5];
    char nomeCidade[30];
    long populacao;
    double area;
    double pib;
    int pontosTuristicos;
};

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    struct Carta cartaA = {"A", "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    struct Carta cartaB = {"B", "B02", "Rio de Janeiro", 6748000, 1200.25, 300.55, 30};

  // Área para exibição dos dados da cidade
  printf("\n=== Carta A ===\n");
    printf("Estado: %s\n", cartaA.estado);
    printf("Codigo: %s\n", cartaA.codigo);
    printf("Nome da Cidade: %s\n", cartaA.nomeCidade);
    printf("Populacao: %ld\n", cartaA.populacao);
    printf("Area: %.2f km2\n", cartaA.area);
    printf("PIB: %.2f bilhoes de reais\n", cartaA.pib);
    printf("Numero de Pontos Turisticos: %d\n", cartaA.pontosTuristicos);

    printf("\n=== Carta B ===\n");
    printf("Estado: %s\n", cartaB.estado);
    printf("Codigo: %s\n", cartaB.codigo);
    printf("Nome da Cidade: %s\n", cartaB.nomeCidade);
    printf("Populacao: %ld\n", cartaB.populacao);
    printf("Area: %.2f km2\n", cartaB.area);
    printf("PIB: %.2f bilhoes de reais\n", cartaB.pib);
    printf("Numero de Pontos Turisticos: %d\n", cartaB.pontosTuristicos);

return 0;
} 
