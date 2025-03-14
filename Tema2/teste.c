#include <stdio.h>
#include <stdlib.h>

int main() {

    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt_turisticos1, pt_turisticos2;
    float densidade_popu1, densidade_popu2;
    int atributo1, atributo2;
    float valor1, valor2, soma1, soma2;

    // Entrada de dados
    printf("Carta 1\n");
    printf("Insira o nome do país da carta 1: ");
    scanf(" %s", pais1);
    printf("Insira a população do país da carta 1: ");
    scanf("%d", &populacao1);
    printf("Insira a área do país da carta 1 (km²): ");
    scanf("%f", &area1);
    printf("Insira o PIB do país da carta 1 (em trilhões de dólares): ");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turísticos do país da carta 1: ");
    scanf("%d", &pt_turisticos1);


    printf("\nCarta 2\n");
    printf("Insira o nome do país da carta 2: ");
    scanf(" %s", pais2);
    printf("Insira a população do país da carta 2: ");
    scanf("%d", &populacao2);
    printf("Insira a área do país da carta 2 (km²): ");
    scanf("%f", &area2);
    printf("Insira o PIB do país da carta 2 (em trilhões de dólares): ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos do país da carta 2: ");
    scanf("%d", &pt_turisticos2);

    densidade_popu1 = populacao1 / area1;
    densidade_popu2 = populacao2 / area2;

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &atributo1);

    switch (atributo1) {

    case 1: 
        valor1 = populacao1; 
        valor2 = populacao2;
    break;
        case 2: 
            valor1 = area1;
            valor2 = area2;
        break;
        case 3: 
            valor1 = pib1;
            valor2 = pib2;
        break;
        case 4: 
            valor1 = pt_turisticos1; 
            valor2 = pt_turisticos2; 
        break;
        case 5: 
            valor1 = densidade_popu1; 
            valor2 = densidade_popu2; 
        break;
        default: 
            printf("Opção inválida!\n"); 
        return 1;
    }


    // Escolha do segundo atributo
    printf("\n\nEscolha outro atributo para nova comparação:\n");
    printf("\nAtenção: Você deve escolher um atributo diferente do primeiro!\n");
    printf("\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &atributo2);
    
    (atributo1 == atributo2) ? printf("\nVocê escolheu o mesmo atributo do primeiro! Escolha outro:\n") : 0;

    printf("\nVocê escolheu o mesmo atributo do primeiro!\n");
    printf("\nEscolha outro atributo para a comparação:\n");
    printf("\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &atributo2);
    

    switch (atributo2) {

    case 1:
        soma1 = populacao1; 
        soma2 = populacao2; 
    break;
    case 2: 
        soma1 = area1; 
        soma2 = area2; 
    break;
        
    case 3: 
        soma1 = pib1; 
        soma2 = pib2; 
    break;
    case 4: 
        soma1 = pt_turisticos1; 
        soma2 = pt_turisticos2; 
    break;
    case 5: 
        soma1 = densidade_popu1; 
        soma2 = densidade_popu2; 
    break;
    default: 
        printf("Opção inválida!\n"); 
    break;
    }

    //Somando os atributos escolhidos;
    soma1 += valor1;
    soma2 += valor2;
    
    
    printf("\nOs países escolhidos foram: %s e %s\n", pais1, pais2);
    printf("O valor do primeiro atributo escolhido para a carta 1: %.2f\n", valor1);
    printf("O valor do primeiro atributo escolhido para a carta 2: %.2f\n", valor2);
    printf("O valor do segundo atributo escolhido para a carta 1: %.2f\n", soma1 - valor1);
    printf("O valor do segundo atributo escolhido para a carta 2: %.2f\n", soma2 - valor2);
    printf("A soma dos atributos para a carta 1: %.2f\n", soma1);
    printf("A soma dos atributos para a carta 2: %.2f\n", soma2);

    if (soma1 > soma2) {
        printf("\nA carta 1 (%s) venceu!\n", pais1);
    } else if (soma1 < soma2) {
        printf("\nA carta 2 (%s) venceu!\n", pais2);
    } else {
        printf("\nHouve um empate!\n");
    }

    printf("\n\n");

    return 0;
}
