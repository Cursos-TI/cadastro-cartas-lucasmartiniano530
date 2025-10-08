#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
/* Carta 1*/

  char estado[2] = 'B';
  char Codigo_da_carta[20] = "B01";
  char nome[20] = "Brasilia";
  int populacao = 200000;
  float area = 20000000;
  float pib = 3000000;
  int pontos_turisticos = 15;

  printf("Digite o nome da cidade: ");
  scanf("%s",&nome);
  printf("O nome da cidade é: %s", nome);


return 0;
} 
