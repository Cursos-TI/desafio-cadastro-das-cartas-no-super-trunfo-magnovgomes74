#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo Nível Novato - Países
// Tema 2 - Incrementando o Cadastro das Cartas


int main() {
    // Criando as variáveis das cartas 1 e 2:
   
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt_turisticos1, pt_turisticos2;
    float densidade_popu1, densidade_popu2;
    int atributo;

    
    // Cadastrando a Carta 1:
    printf("Dados da Carta 1\n");

    //solicitando ao usuário os dados da Carta 1;    
    printf("Insira o nome do País: ");
    scanf("%s", &pais1);

    printf("Insira a população do País: ");
    scanf(" %lu", &populacao1);

    printf("Insira a área do País em km2: ");
    scanf(" %f",&area1);

    printf("Insira o PIB do País em trilhões: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem este País? ");
    scanf("%d", &pt_turisticos1);


    //Cadastrando a Carta 2;
    printf("\nDados da Carta 2\n");

    //solicitando ao usuário os dados da Carta 2;
    printf("Insira o nome do País: ");
    scanf("%s", &pais2);

    printf("Insira a população do País: ");
    scanf(" %lu", &populacao2);

    printf("Insira a área do País em km2: ");
    scanf(" %f", &area2);

    printf("Insira o PIB d0 País em trilhões: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem este País? ");
    scanf("%d", &pt_turisticos2);


    // Usando operadores matemáticos para calcular a densidade populacional de cada país;
   
    densidade_popu1 = populacao1 / area1;   
    densidade_popu2 = populacao2 / area2;


    // Usando a swith case para comparação dos atributos;

    printf("\n\nCartas de %s e %s para comparação do jogo\n", pais1, pais2);

    printf("\nEscolha o atributo a ser comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n\n");
    scanf("%d", &atributo);
    

    /* Usando a estrutura if e else dentro de cada case para poder demonstraro valor
    do atributo de comparação de cada carta como pede o desafio*/
    
    switch (atributo)
    {
    case 1:
        printf("\nAtributo escolhido: População\n");
        printf("População de %s: %lu\n", pais1, populacao1);
        printf("População de %s: %lu\n", pais2, populacao2);

        if (populacao1 > populacao2) {
            printf("\nVencedor: %s!\n", pais1);
        } else if (populacao1 < populacao2) {
            printf("\nVencedor: %s!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 2:
        printf("\nAtributo escolhido: Área\n");
        printf("Área de %s: %.2f\n", pais1, area1);
        printf("Área de %s: %.2f\n", pais2, area2);

        if (area1 > area2) {
            printf("\nVencedor: %s!\n", pais1);
        } else if (area1 < area2) {
            printf("\nVencedor: %s!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 3:
        printf("Atributo escolhido: PIB\n");
        printf("PIB de %s: %.2f\n", pais1, pib1);
        printf("PIB de %s: %.2f\n", pais2, pib2);

        if (pib1 > pib2) {
            printf("\nVencedor: %s!\n", pais1);
        } else if (pib1 < pib2) {
            printf("\nVencedor: %s!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 4:
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos de %s: %d\n", pais1, pt_turisticos1);
        printf("Pontos Turísticos de %s: %d\n", pais2, pt_turisticos2);

        if (pt_turisticos1 > pt_turisticos2) {
            printf("\nVencedor: %s!\n", pais1);
        } else if (pt_turisticos1 < pt_turisticos2) {
            printf("\nVencedor: %s!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;

    case 5:
        printf("Atributo escolhido: Densidade Demográfica\n");
        printf("Densidade Demográfica de %s: %.2f\n", pais1, densidade_popu1);
        printf("Densidade Demográfica de %s: %.2f\n", pais2, densidade_popu2);

        if (densidade_popu1 < densidade_popu2) {
            printf("\nVencedor: %s!\n", pais1);
        } else if (densidade_popu1 > densidade_popu2) {
            printf("\nVencedor: %s!\n", pais2);
        } else {
            printf("\nEmpate!\n");
        }
        break;  

    default:
        printf("\nOpção inválida!\n");
        break;
    }

    printf("\n\n\n");

    return 0;

}
