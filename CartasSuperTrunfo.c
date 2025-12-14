#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[15],estado2[15]; 
  char codigoDaCarta1[4], codigoDaCarta2[4];
  char nomeDaCidade1[20], nomeDaCidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int numeroPontosTuristicos1, numeroPontosTuristicos2;
  // Área para entrada de dados

  printf("Carta 1:\n");
  printf("Estado: ");
  scanf(" %15s", estado1);

  printf("Código: ");
  scanf(" %3s", codigoDaCarta1);

  printf("Nome da Cidade: ");
  scanf(" %20s", nomeDaCidade1);

  printf("População: ");
  scanf(" %d", &populacao1);

  printf("Área: ");
  scanf(" %f", &area1);

  printf("PIB: ");
  scanf(" %f", &pib1);

  printf("Números de pontos turísticos: ");
  scanf(" %d", &numeroPontosTuristicos1);

  // Área para exibição dos dados da cidade

  printf("-----Carta 1-----\n");
  printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmeros de ponstos Turísticos: %d\n",estado1, codigoDaCarta1, nomeDaCidade1, populacao1, area1, pib1, numeroPontosTuristicos1);

  // Área para entrada de dados

  printf("Carta 2:\n");
  printf("Estado: ");
  scanf(" %15s", estado2);

  printf("Código: ");
  scanf(" %3s", codigoDaCarta2);

  printf("Nome da Cidade: ");
  scanf(" %20s", nomeDaCidade2);

  printf("População: ");
  scanf(" %d", &populacao2);

  printf("Área: ");
  scanf(" %f", &area2);

  printf("PIB: ");
  scanf(" %f", &pib2);

  printf("Números de pontos turísticos: ");
  scanf(" %d", &numeroPontosTuristicos2);

// Área para exibição dos dados da cidade

  printf("-----Carta 2-----\n");
  printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmeros de ponstos Turísticos: %d\n",estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, numeroPontosTuristicos2);

return 0;
} 
