#include <stdio.h>

int main () {
    char estado1[10];
    char codigo1[5];
    char nome1[50];
    unsigned long long populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    char estado2[10];
    char codigo2[5];
    char nome2[50];
    unsigned long long populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

     printf("===  Jogo Do Super Trunfo ===\n");

     printf("Digite o Estado da Carta 1: ");
     scanf(" %10s", estado1);

     printf("Codigo da primeira carta: ");
     scanf(" %5s", codigo1);

     printf("Cidade da primeira carta: ");
     scanf(" %s", nome1);

     printf("População: ");
     scanf(" %llu", &populacao1);

     printf("Area (Em km²): ");
     scanf(" %f", &area1);

     printf("PIB (Em Bilhões de Reais): ");
     scanf(" %f", &pib1);

     printf("Pontos Turisticos: ");
     scanf(" %d",&pontos_turisticos1);

     printf("\n-------------------------\n");
    
     printf("Digite o Estado da Carta 2: ");
     scanf(" %10s", estado2);

     printf("Codigo da segunda carta: ");
     scanf(" %5s", codigo2);

     printf("Cidade da segunda carta: ");
     scanf(" %s", nome2);

     printf("População: ");
     scanf(" %llu", &populacao2);

     printf("Area (Em km²): ");
     scanf(" %f", &area2);

     printf("PIB (Em Bilhões de Reais): ");
     scanf(" %f", &pib2);

     printf("Pontos Turisticos: ");
     scanf(" %d",&pontos_turisticos2);

     // Cálculos
     float densidade1 = populacao1 / area1;
     float densidade2 = populacao2 / area2;
     float pibPerCapita1 = (pib1 * 1000000000) / populacao1; //converter bilhões para reais
     float pibPerCapita2 = (pib2 * 1000000000) /populacao2;

     float superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibPerCapita1 + (1.0f / densidade1);
     float superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibPerCapita2 + (1.0f / densidade2);
     
     //Saída das Cartas
     printf("\n== Carta 1 ==\n");
     printf("Estado: %s\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Cidade: %s\n", nome1);
     printf("Populacao: %llu\n", populacao1);
     printf("Area: %.2f km²\n", area1);
     printf("PIB: %.2f bilhoes de reais\n", pib1);
     printf("Pontos turisticos: %d\n", pontos_turisticos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
     printf ("Super Poder: %.2f\n", superPoder1);

     printf("\n------------------------\n");

     printf("\n== Carta 2 ==\n");
     printf("Estado: %s\n", estado2);
     printf("codigo: %s\n", codigo2);
     printf("Cidade: %s\n", nome2);
     printf("Populacao: %llu\n", populacao2);
     printf("Area: %.2f km²\n", area2);
     printf("PIB: %.2f bilhoes de reais\n", pib2);
     printf("Pontos turisticos: %d\n", pontos_turisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f reais\n", pibPerCapita2);  
     printf("Super Poder: %.2f\n", superPoder2);

     //-----Comparações
     printf("\n==== Comparação de Cartas====\n");

     printf("Populacao: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);

    printf("Area: Carta %d venceu (%d)\n",
        (area1 > area2) ? 1 : 2,
        (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
        (pib1 > pib2) ? 1 : 2,
        (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
        (pontos_turisticos1 > pontos_turisticos2) ? 1: 2,
        (pontos_turisticos1 > pontos_turisticos2) ? 1: 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
        (densidade1 < densidade2) ? 1 : 2, //menor vence
        (densidade1 < densidade2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
          (pibPerCapita1 > pibPerCapita2) ? 1: 2,
          (pibPerCapita1 > pibPerCapita2) ? 1: 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
        (superPoder1 > superPoder2) ? 1 : 2,
        (superPoder1 > superPoder2) ? 1 : 0);

return 0;
}
