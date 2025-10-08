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

  /* CARTA 2*/

  char estado2[3] = "A";
  char Codigo_da_carta2[20] = "A02";
  char nome2[20] = "Goias";
  int populacao2 = 250000;
  float area2 = 15000000;
  float pib2 = 2000000;
  int pontos_turisticos2 = 5;


  printf("Carta SuperTrunfo\n");
  printf("CARTA 01\n");
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", Codigo_da_carta);
  printf("Nome da cidade: %s\n", nome);
  printf("Populacao total: %d\n", populacao);
  printf("Area total: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Quantidade pontos turisticos: %d\n", pontos_turisticos);
  

  printf("\nCARTA 02\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo da carta: %s\n", Codigo_da_carta2);
  printf("Nome da cidade: %s\n", nome2);
  printf("Populacao total: %d\n", populacao2);
  printf("Area total: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Quantidade pontos turisticos: %d\n", pontos_turisticos2);


return 0;
} 
