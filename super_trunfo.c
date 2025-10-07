#include <stdio.h>

// === Escolha do atributo (feito direto no código) ===
typedef enum { 
    ATR_POPULACAO,
    ATR_AREA,
    ATR_PIB,
    ATR_DENSIDADE,
    ATR_PIB_PER_CAPITA
    } Atributo;

    // Troque aqui o atributo que será comparado:
    #define ATRIBUTO_ESCOLHIDO ATR_PIB_PER_CAPITA
    // opsções: ATR_ POPULACAO, ATR_AREA, ATR_PIB, ATR_DENSIDADE, ATR_PIB_PER_CAPITA

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
     scanf(" %49[^\n]", nome1);

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
     scanf(" %49[^\n]", nome2);

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
    
    // === Comparação única (atributo escolhido) ===
    float v1 = 0.0f, v2 = 0.0f;
    const char *nomeAtr = "";
    int menor_vence = 0; //regra especial para densidade

    switch (ATRIBUTO_ESCOLHIDO) {
        case ATR_POPULACAO:
            nomeAtr = "População";
            v1 = (float)populacao1; v2 = (float)populacao2;
            break;
        case ATR_AREA:
            nomeAtr = "Área (km²)";
            v1 = area1; v2 = area2;
            break;
        case ATR_PIB:
            nomeAtr = "PIB (bilhões)";
            v1 = pib1; v2 = pib2;
            break;
        case ATR_DENSIDADE:
            nomeAtr = "Densidade Populacional (hab/km²)";
            v1 = densidade1; v2 = densidade2;
            menor_vence = 1; //menor vence
            break;
        case ATR_PIB_PER_CAPITA:
            nomeAtr = "PIB per Capita (R$)";
            v1 = pibPerCapita1; v2 = pibPerCapita2;
            break;
    }
    int vencedor = 0; // 0 = empate, 1 = carta1, 2 = carta2
    if (v1 == v2) {
        vencedor = 0;
    } else if (menor_vence) {
        vencedor = (v1 < v2) ? 1 : 2;
    }else {
        vencedor = (v1 > v2) ? 1 : 2;
    }

    // === Saída no formato de exemplo ===
    printf("\n=================================\n");
    printf("Comparacao de cartas (Atributo: %s)\n", nomeAtr);
    printf("Carta 1 - %s (%s): ", nome1, estado1);
    if (ATRIBUTO_ESCOLHIDO == ATR_POPULACAO)
        printf("%.0f\n", v1);
    else
        printf("%.2f\n", v1);

        printf("Carta 2 - %s (%s): ", nome2, estado2);
        if (ATRIBUTO_ESCOLHIDO == ATR_POPULACAO)
            printf("%.0f\n", v2);
        else
            printf("%.2f\n", v2);

        if (vencedor == 0)
            printf("Resultado: Empate!\n");
        else
            printf("Resultado: Carta %d (%s) venceu!\n",
                   vencedor, vencedor == 1 ? nome1 : nome2);
        printf("=======================================\n");


        return 0;
    }