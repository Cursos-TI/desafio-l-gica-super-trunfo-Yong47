#include <stdio.h>

int main() {
    printf("\n*#*Bem vindo ao Super Trunfo!*#*\n");

    // Carta 1
    char estado1[3];
    char codigo1[7];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float densidade_populacional1;
    float PIBpercapita1;
    densidade_populacional1 = (float)(populacao1 / area1);
    PIBpercapita1 = (float)(PIB1 / populacao1);

    // Carta 2
    char estado2[3];
    char codigo2[7];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidade_populacional2;
    float PIBpercapita2;
    
    
    // Entrada carta 1
    printf("Digite o estado da carta 1:\n");
    scanf("%s", estado1);
    printf("Digite o código da carta 1:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1:\n");
    scanf("%s", cidade1);
    printf("Digite a população da carta 1:\n");
    scanf("%ld", &populacao1);
    printf("Digite a área da cidade da carta 1(em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1:\n");
    scanf("%f", &PIB1);
    printf("Digite o número de ponto turisticos da carta 1:\n");
    scanf("%d", &pontosturisticos1);

    // Cálculos carta 1
    densidade_populacional1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;
    

    // entrada carta 2
    printf("Digite o estado da carta 2:\n");
    scanf("%s", estado2);
    printf("Digite o código da carta 2:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2:\n");
    scanf("%s", cidade2);
    printf("Digite a populaçao da cidade da carta 2:\n");
    scanf("%ld", &populacao2);
    printf("Digite a area da cidade da carta 2(em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2:\n");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos turisticos da carta 2:\n");
    scanf("%d", &pontosturisticos2);

     // Cálculos carta 2
    densidade_populacional2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;

     // carta 1 exibição
    printf("\ninformacoes da carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Area: %.2fKm²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f \n", densidade_populacional1);
    printf("PIB per capita: %.2f \n", PIBpercapita1);

     //Carta 2 exibiçao
    printf("\ninformacoes da carta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populaçao: %ld \n", populacao2);
    printf("Area: %.2fkm² \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Pontos Turisticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f \n", densidade_populacional2);
    printf("PIB per capita: %.2f \n", PIBpercapita2);

    
    // Comparação de cartas usando IF-ELSE

    printf("\n :::Comparação de cartas::: \n");
    printf("Comparação por POPULAÇÃO \n");

    printf("Carta 1 - %s: %u \n", cidade1, populacao1); //informações da carta 1
    printf("Carta 2 - %s: %u \n", cidade2, populacao2); //informações da carta 2

    //Estrutura If-else
    if (populacao1 > populacao2)
    {
        printf("Carta 1 (%s) Venceu", cidade1); //Se condição for verdadeira 
    } else {
        printf("Carta 2 (%s) venceu", cidade2); //Se condição for falsa
    }
    
    
  

    return 0;

    }
