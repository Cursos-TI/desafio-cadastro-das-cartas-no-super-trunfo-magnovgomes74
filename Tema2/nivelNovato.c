#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo Nível Aventureiro - Países
// Tema 2 - Incrementando o Cadastro das Cartas


int main() {
    // Criando as variáveis das cartas 1 e 2:
   
    char estado1[50], estado2[50];
    char codigo1[3], codigo2[3];
    char capital1[50], capital2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt_turisticos1, pt_turisticos2;
    float densidade_popu1, densidade_popu2;
    float pib_per_capita1, pib_per_capita2;
    
    // Lendo os dados da carta 1:
    printf("Carta 1\n");

    printf("\nDigite o nome do estado da carta 1: ");
    scanf("%[^\n]s", estado1);
    getchar();

    printf("Digite o código do estado da carta 1: ");
    scanf("%[^\n]s", codigo1);
    getchar();

    printf("Digite a capital do estado da carta 1: ");
    scanf("%[^\n]s", capital1);
    getchar();

    printf("Digite a população do estado da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área do estado da carta 1: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB do estado da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos do estado da carta 1: ");
    scanf("%d", &pt_turisticos1);
    getchar();


    // Lendo os dados da carta 2:
    printf("\nCarta 2\n");

    printf("Digite o nome do estado da carta 2: ");
    scanf("%[^\n]s", estado2);
    getchar();

    printf("Digite o código do estado da carta 2: ");
    scanf("%[^\n]s", codigo2);
    getchar();

    printf("Digite a capital do estado da carta 2: ");
    scanf("%[^\n]s", capital2);
    getchar();

    printf("Digite a população do estado da carta 2: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área do estado da carta 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB do estado da carta 2: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do estado da carta 2: ");
    scanf("%d", &pt_turisticos2);
    getchar();


    // Calculando a densidade populacional dos estados:
    densidade_popu1 = populacao1 / area1;
    densidade_popu2 = populacao2 / area2;

    // Calculando o PIB per capita dos estados:
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;


    // Imprimindo os dados das cartas:
    printf("\nCarta 1\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Capital: %s\n", capital1);
    printf("População: %lu de habitantes\n", populacao1);
    printf("Área: %.2f\n km²", area1);
    printf("PIB: %.2f em bilhões\n", pib1); 
    printf("Pontos turísticos: %d\n", pt_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_popu1);
    printf("PIB per capita R$: %.2f\n", pib_per_capita1); 
    
    printf("\nCarta 2\n");   

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Capital: %s\n", capital2);
    printf("População: %lu de habitantes\n", populacao2);
    printf("Área: %.2f\n km²", area2);
    printf("PIB: %.2f em bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pt_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_popu2);
    printf("PIB per capita R$: %.2f\n", pib_per_capita2);



    // Comparando os dados das cartas:

    printf("\nComparação de cartas (População):\n\n");
    printf("Carta 1 - %s: %lu de habitantes\n", estado1, populacao1);
    printf("Carta 2 - %s: %lu de habitantes\n", estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: %s é o vencedor!\n", capital1);
    } else if (populacao1 < populacao2) {
        printf("\nResultado: %s é o vencedor!\n", capital2);
    } else {
        printf("\nResultado: Empate!\n");
    }




    





    




    return 0;

}