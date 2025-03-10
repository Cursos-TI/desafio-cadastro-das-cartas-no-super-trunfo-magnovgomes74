#include <stdio.h>

// Desafio Super Trunfo Nível Básico - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado[50];
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pt_turisticos;
    
    // Cadastro da Carta 1:
    printf("Dados da Carta 1\n");

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("Insira o nome do Estado: ");
    scanf("%s", &estado);

    printf("Insira o código do Estado: ");
    scanf(" %s", &codigo);

    printf("Insira o nome de sua capital: ");
    scanf("%s", &cidade);

    printf("Insira a população desta cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Quantos pontos turísticos tem na cidade? ");
    scanf("%d", &pt_turisticos);


    // Exibição dos Dados da Carta 1:
    printf("\nCarta 1:\n");

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pt_turisticos);


    //Cadastro da Carta 2;
    printf("\nDados da Carta 2\n");

    //solicitando ao usuário os dados da Carta 2;

    printf("Insira o nome do Estado: ");
    scanf("%s", &estado);

    printf("Insira o código do Estado: ");
    scanf(" %s", &codigo);

    printf("Insira o nome de sua capital: ");
    scanf("%s", &cidade);

    printf("Insira a população desta cidade: ");
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Quantos pontos turísticos tem na cidade? ");
    scanf("%d", &pt_turisticos);
 
    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n");

    //imprimindo dos dados da Carta 2;

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pt_turisticos);   

    return 0;
}
