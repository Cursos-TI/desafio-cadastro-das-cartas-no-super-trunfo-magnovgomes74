#include <stdio.h>

// Desafio Super Trunfo Nível Mestre - Países
// Tema 1 - Incrementando o Cadastro das Cartas


int main() {

    // Criando as variáveis das cartas 1 e 2:

    char estado1[50], estado2[50];
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt_turisticos1, pt_turisticos2;
    float densidade_popu1, densidade_popu2;
    float pib_perCapita1, pib_perCapita2;
    float super_poder1, super_poder2;

    
    // Cadastrando a Carta 1:
    printf("Dados da Carta 1: A01\n\n");

    //solicitando ao usuário os dados da Carta 1;    

    printf("Insira o nome do Estado: ");
    scanf("%s", &estado1);

    printf("Insira o código do Estado: ");
    scanf(" %s", &codigo1);

    printf("Insira o nome de sua capital: ");
    scanf("%s", &cidade1);

    printf("Insira a população desta cidade: ");
    scanf(" %lu", &populacao1);

    printf("Insira a área da cidade: ");
    scanf(" %f",&area1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem na cidade? ");
    scanf("%d", &pt_turisticos1);
  

    //Cadastro da Carta 2;
    printf("\nDados da Carta 2: B02\n\n");

    //solicitando ao usuário os dados da Carta 2;

    printf("Insira o nome do Estado: ");
    scanf("%s", &estado2);

    printf("Insira o código do Estado: ");
    scanf(" %s", &codigo2);

    printf("Insira o nome de sua capital: ");
    scanf("%s", &cidade2);

    printf("Insira a população desta cidade: ");
    scanf(" %lu", &populacao2);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem na cidade? ");
    scanf("%d", &pt_turisticos2);


    //Usando operadores matemáticos para realizar o nível Aventureiro do jogo;

    densidade_popu1 = populacao1 / area1;
    pib_perCapita1 = pib1 / populacao1;

    densidade_popu2 = populacao2 / area2;
    pib_perCapita2 = pib2 / populacao2;

    // Calculando o super poder das cartas 1 e 2;

    super_poder1 = populacao1 + area1 + pib1 + pt_turisticos1 + densidade_popu1 + pib_perCapita1;

    super_poder2 = populacao2 + area2 + pib2 + pt_turisticos2 + densidade_popu2 + pib_perCapita2;


    // Impressão das comparações entre as cartas no jogo Super Trunfo;

    printf("\nComparação das cartas A01 e B02 do Jogo Super Trunfo:\n\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pt_turisticos1 > pt_turisticos2 ? 1 : 2, pt_turisticos1 > pt_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_popu1 < densidade_popu2 ? 1 : 2, densidade_popu1 < densidade_popu2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_perCapita1 > pib_perCapita2 ? 1 : 2, pib_perCapita1 > pib_perCapita2);
    printf("\nSuper Poder: Carta %d venceu (%d)\n\n\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2);

    
    return 0;

}
