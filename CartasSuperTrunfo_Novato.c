#include <stdio.h>

// Desafio Super Trunfo Nível Novato - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1[50], estado2[50];
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt_turisticos1, pt_turisticos2; 

    
    // Cadastro da Carta 1:
    printf("Dados da Carta 1\n");

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("Insira o nome do Estado: ");
    scanf("%s", &estado1);

    printf("Insira o código do Estado: ");
    scanf(" %s", &codigo1);

    printf("Insira o nome de sua capital: ");
    scanf("%s", &cidade1);

    printf("Insira a população desta cidade: ");
    scanf(" %d", &populacao1);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area1);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("Quantos pontos turísticos tem na cidade? ");
    scanf("%d", &pt_turisticos1);


    // Exibição dos Dados da Carta 1:
    printf("\nCarta 1:\n");

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pt_turisticos1);


    //Cadastro da Carta 2;
    printf("\nDados da Carta 2\n");

    //solicitando ao usuário os dados da Carta 2;

    printf("Insira o nome do Estado: ");
    scanf("%s", &estado2);

    printf("Insira o código do Estado: ");
    scanf(" %s", &codigo2);

    printf("Insira o nome de sua capital: ");
    scanf("%s", &cidade2);

    printf("Insira a população desta cidade: ");
    scanf(" %d", &populacao2);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Quantos pontos turísticos tem na cidade? ");
    scanf("%d", &pt_turisticos2);
 
    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n");

    //imprimindo dos dados da Carta 2;

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", pt_turisticos2); 


    return 0;
}
