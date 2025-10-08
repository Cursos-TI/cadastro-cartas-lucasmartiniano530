#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
/* Carta 1*/

  char estado[3] = "A";
  char Codigo_da_carta[20] = "A01";
  char nome[20] = "Brasilia";
  int populacao = 200000;
  float area = 20000000;
  float pib = 3000000;
  int pontos_turisticos = 15;

  printf("Carta SuperTrunfo\n");
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", Codigo_da_carta);
  printf("Nome da cidade: %s\n", nome);
  printf("Populacao total: %d\n", populacao);
  printf("Area total: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Quantidade pontos turisticos: %d\n", pontos_turisticos);
  
return 0;
} 
