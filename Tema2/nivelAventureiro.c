#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo Nível Aventureiro - Países
// Tema 2 - Incrementando o Cadastro das Cartas

int main(){

    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt_turisticos1, pt_turisticos2;
    float densidade_popu1, densidade_popu2;
    int atributo;


    // Lendo os dados da carta 1:
    printf("Carta 1\n");

    printf("\nInsira o nome do país da carta 1: ");
    scanf(" %s", &pais1);

    printf("Insira a população do país da carta 1: ");
    scanf(" %d", &populacao1);

    printf("Insira a área do país da carta 1 (km²): ");
    scanf("%f", &area1);

    printf("Insira o PIB do país da carta 1 (em trilhões de dólares): ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos do país da carta 1: ");
    scanf("%d", &pt_turisticos1);


    // lendo os dados da carta 2:
    printf("\n\nCarta 2\n");

    printf("Insira o nome do país da carta 2: ");
    scanf(" %s", &pais2);

    printf("Insira a população do país da carta 2: ");
    scanf(" %d", &populacao2);

    printf("Insira a área do país da carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Insira o PIB do país da carta 2 (em trilhões de dólares): ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos do país da carta 2: ");
    scanf("%d", &pt_turisticos2);


    // Calculando a densidade populacional:
    densidade_popu1 = populacao1 / area1;
    densidade_popu2 = populacao2 / area2;


    // Menu interativo para escolha do atributo;

    printf("\n\nEscolha o atributo para a comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");

    printf("\nQual atributo você deseja escolher? ");
    scanf("%d", &atributo);

    
    // Comparação entre as cartas dos países;
    
    printf("\nComparando os países %s e %s:\n\n", pais1, pais2);

    switch (atributo)
    {
    case 1:
        printf("\nComparação de cartas (População):\n\n");
        printf("População do país %s: %d\n", pais1, populacao1);
        printf("População do país %s: %d\n", pais2, populacao2);

        if (populacao1 > populacao2){
            printf("\nO país %s venceu!\n", pais1);
        } else if (populacao2 > populacao1){
            printf("\nO país %s venceu!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 2:
        printf("\nComparação de cartas (Área):\n\n");
        printf("Área do país %s: %.2f km²\n", pais1, area1);
        printf("Área do país %s: %.2f km²\n", pais2, area2);

        if (area1 > area2){
            printf("\nO país %s venceu!\n", pais1);
        } else if (area2 > area1){
            printf("\nO país %s venceu!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 3:
        printf("\nComparação de cartas (PIB):\n\n");
        printf("PIB do país %s: %.2f trilhões de dólares\n", pais1, pib1);
        printf("PIB do país %s: %.2f trilhões de dólares\n", pais2, pib2);

        if (pib1 > pib2){
            printf("\nO país %s venceu!\n", pais1);
        } else if (pib2 > pib1){
            printf("\nO país %s venceu!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 4:
        printf("\nComparação de cartas (Pontos Turísticos):\n\n");
        printf("Pontos Turísticos do país %s: %d\n", pais1, pt_turisticos1);
        printf("Pontos Turísticos do país %s: %d\n", pais2, pt_turisticos2);

        if (pt_turisticos1 > pt_turisticos2){
            printf("\nO país %s venceu!\n", pais1);
        } else if (pt_turisticos2 > pt_turisticos1){
            printf("\nO país %s venceu!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 5:
        printf("\nComparação de cartas (Densidade Populacional):\n\n");
        printf("Densidade Populacional do país %s: %.2f hab/km²\n", pais1, densidade_popu1);
        printf("Densidade Populacional do país %s: %.2f hab/km²\n", pais2, densidade_popu2);

        if (densidade_popu1 < densidade_popu2){
            printf("\nO país %s venceu!\n", pais1);
        } else if (densidade_popu2 < densidade_popu1){
            printf("\nO país %s venceu!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;
    
    default:
        printf("\nOpção inválida!\n");
        break;
    }

    printf("\n\n");

    return 0;


}