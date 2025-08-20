#include <stdio.h>

int main () {
    char estado1[3];
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    char estado2[3];
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

printf("===  Jogo Do Super Trunfo ===\n");

     printf("Digite o estado da Carta 1: ");
     scanf(" %s", estado1);

     printf("Codigo da primeira carta: ");
     scanf("%s", codigo1);

     printf("Cidade da primeira carta(uma palavra): ");
     scanf("%s", nome1);

     printf("População: ");
     scanf("%d", &populacao1);

     printf("Area em km²: ");
     scanf("%f", &area1);

     printf("PIB: ");
     scanf("%f", &pib1);

     printf("Pontos turisticos: ");
     scanf("%d",&pontos1);

     printf("\n-------------------------\n");
    

     printf("Digite o estado da Carta 2: ");
     scanf("%s", estado2);

     printf("Codigo da segunda carta: ");
     scanf("%s", codigo2);

     printf("Cidade da segunda carta(uma palavra): ");
     scanf("%s", nome2);

     printf("População: ");
     scanf("%d", &populacao2);

     printf("Area em km²: ");
     scanf("%f", &area2);

     printf("PIB: ");
     scanf("%f", &pib2);

     printf("Pontos turisticos: ");
     scanf("%d",&pontos2);

     printf("\nCARTAS SALVAS:\n");

     printf("\n== Carta 1 ==\n");
     printf("Estado: %s\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Cidade: %s\n", nome1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %f\n", area1);
     printf("PIB: %f\n", pib1);
     printf("Pontos turisticos: %d\n", pontos1);

     printf("\n------------------------\n");

     printf("\n== Carta 2 ==\n");
     printf("Estado: %s\n", estado2);
     printf("codigo: %s\n", codigo2);
     printf("Cidade: %s\n", nome2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %f\n", area2);
     printf("PIB: %f\n", pib2);
     printf("Pontos turisticos: %d\n", pontos2);
     

return 0;
}
