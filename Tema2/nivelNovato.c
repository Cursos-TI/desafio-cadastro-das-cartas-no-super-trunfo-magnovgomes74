#include <stdio.h>

// Desafio Super Trunfo Nível Aventureiro - Países
// Tema 2 - Incrementando o Cadastro das Cartas

int main() {

    // Criando as variáveis das cartas 1 e 2:
   
    char estado1[50], estado2[50];
    char codigo1[4], codigo2[4];
    char capital1[50], capital2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt_turisticos1, pt_turisticos2;
    float densidade_popu1, densidade_popu2;
    float pib_per_capita1, pib_per_capita2;


    // Lendo os dados da carta 1:
    printf("Carta 1\n");

    printf("\nDigite o nome do estado da carta 1: ");
    scanf(" %s", &estado1);

    printf("Digite o código do estado da carta 1: ");
    scanf(" %s", &codigo1);

    printf("Digite a capital do estado da carta 1: ");
    scanf(" %s", &capital1);

    printf("Digite a população do estado da carta 1: ");
    scanf(" %d", &populacao1);

    printf("Digite a área do estado da carta 1 (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB do estado da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos do estado da carta 1: ");
    scanf("%d", &pt_turisticos1);
    

    // Lendo os dados da carta 2:
    printf("\nCarta 2\n");

    printf("Digite o nome do estado da carta 2: ");
    scanf(" %s", &estado2);

    printf("Digite o código do estado da carta 2: ");
    scanf(" %s", &codigo2);

    printf("Digite a capital do estado da carta 2: ");
    scanf(" %s", &capital2);

    printf("Digite a população do estado da carta 2: ");
    scanf(" %d", &populacao2);

    printf("Digite a área do estado da carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB do estado da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do estado da carta 2: ");
    scanf("%d", &pt_turisticos2);


    // Cálculando a densidade populacional e o PIB per capita;

    densidade_popu1 = populacao1 / area1;
    densidade_popu2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;


    // Comparação das cartas 1 e 2 do jogo:

    printf("\nComparação de cartas (População):\n\n");
    printf("Carta 1 - %s: %d habitantes\n", estado1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: %s é o vencedor!\n", estado1);
    } else if (populacao1 < populacao2) {
        printf("\nResultado: %s é o vencedor!\n", estado2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    printf("\n\n");

    return 0;
}
