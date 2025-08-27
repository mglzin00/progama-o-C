#include <stdio.h>

int main () {
    char estado1[3];
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    char estado2[3];
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

     printf("===  Jogo Do Super Trunfo ===\n");

     printf("Digite o estado da Carta 1: ");
     scanf(" %s", estado1);

     printf("Codigo da primeira carta: ");
     scanf("%s", codigo1);

     printf("Cidade da primeira carta: ");
     scanf("%s", nome1);

     printf("População: ");
     scanf("%d", &populacao1);

     printf("Area (em km²): ");
     scanf("%f", &area1);

     printf("PIB (em bilhoes): ");
     scanf("%f", &pib1);

     printf("Pontos turisticos: ");
     scanf("%d",&pontos_turisticos1);

     printf("\n-------------------------\n");
    
     printf("\nDigite o estado da Carta 2: ");
     scanf("%s", estado2);

     printf("Codigo da segunda carta: ");
     scanf("%s", codigo2);

     printf("Cidade da segunda carta: ");
     scanf("%s", nome2);

     printf("População: ");
     scanf("%d", &populacao2);

     printf("Area (em km²): ");
     scanf("%f", &area2);

     printf("PIB (em bilhoes): ");
     scanf("%f", &pib2);

     printf("Pontos turisticos: ");
     scanf("%d",&pontos_turisticos2);

     // Cálculos adicionais
     float densidade1 = populacao1 / area1;
     float densidade2 = populacao2 / area2;
     float pib_percapita1 = (pib1 * 1000000000) / populacao1; //converter bilhões para reais
     float pib_percapita2 = (pib2 * 1000000000) /populacao2;

     //Saída Formada
     printf("\n== Carta 1 ==\n");
     printf("Estado: %s\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Cidade: %s\n", nome1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %.2f km²\n", area1);
     printf("PIB: %.2f bilhoes de reais\n", pib1);
     printf("Pontos turisticos: %d\n", pontos_turisticos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f reais\n", pib_percapita1);

     printf("\n------------------------\n");

     printf("\n== Carta 2 ==\n");
     printf("Estado: %s\n", estado2);
     printf("codigo: %s\n", codigo2);
     printf("Cidade: %s\n", nome2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %.2f km²\n", area2);
     printf("PIB: %.2f bilhoes de reais\n", pib2);
     printf("Pontos turisticos: %d\n", pontos_turisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f reais\n", pib_percapita2);

     
return 0;
}
