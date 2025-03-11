#include <stdio.h>

// Desafio Super Trunfo Nível Novato - Países
// Tema 2 - Incrementando o Cadastro das Cartas


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

    
    // Cadastrando a Carta 1:
    printf("Dados da Carta 1\n");

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


    //Cadastrando a Carta 2;
    printf("\nDados da Carta 2\n");

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



    // Aplicando as Estruturas de Decisão para o jogo;
    printf("\nComparação das Cartas em todos os atributos:\n\n");

    if (populacao1 > populacao2) {
        printf("A população da Carta 1 - (%s) venceu!\n\n", cidade1);
    } else {
        printf("A população da Carta 2 - (%s) venceu!\n\n", cidade2);
    }

    if(area1 > area2) {
        printf("A área da Carta 1 - (%s) venceu!\n\n", cidade1);
    } else {
        printf("A área da Carta 2 - (%s) venceu!\n\n", cidade2);
    }

    if(pib1 > pib2) {
        printf("O PIB da Carta 1 - (%s) venceu!\n\n", cidade1);
    } else {
        printf("O PIB da Carta 2 - (%s) venceu!\n\n", cidade2);
    }

    if(pt_turisticos1 > pt_turisticos2) {
        printf("Os pontos turísticos da Carta 1 - (%s) venceu!\n\n", cidade1);
    } else {
        printf("Os pontos turísticos da Carta 2 - (%s) venceu!\n\n", cidade2);
    }

    if(densidade_popu1 < densidade_popu2) {
        printf("A densidade populacional da Carta 1 - (%s) venceu!\n\n", cidade1);
    } else {
        printf("A densidade populacional da Carta 2 - (%s) venceu!\n\n", cidade2);
    }

    if(pib_perCapita1 > pib_perCapita2) {
        printf("O PIB per capita da Carta 1 - (%s) venceu!\n\n", cidade1);
    } else {
        printf("O PIB per capita da Carta 2 - (%s) venceu!\n\n", cidade2);
    }

    printf("\n\n\n");

    return 0;

}
