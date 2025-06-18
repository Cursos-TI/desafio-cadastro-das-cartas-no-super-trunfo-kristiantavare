#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    #include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado A;
    char codigoA01[4]; 
    char São Paulo[50];
    int 12325000;
    float 1521.11;
    float 699.28;
    int 50;

    // Variáveis da segunda carta
    char A;
    char A02[4]; 
    char Campinas[50];
    int 1214000;
    float 795.70;
    float 70.80;
    int 25;

    // Entrada dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A a H): ");
    scanf(" %c", &A);

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf("%s", A01);

    printf("Informe o Nome da Cidade (Ex: Sao Paulo): ");
    scanf(" %[^\n]", São Paulo);

    printf("Informe a Populacao da cidade: ");
    scanf("%d", &12325000);

    printf("Informe a Area da cidade (em km²): ");
    scanf("%f", &1521.11);

    printf("Informe o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &699.28);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &50);

    printf("\n");

    // Entrada dos dados da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Informe o Estado (A a H): ");
    scanf(" %c", &A);

    printf("Informe o Codigo da Carta (ex: A02): ");
    scanf("%s", A02);

    printf("Informe o Nome da Cidade (Ex: Campinas): ");
    scanf(" %[^\n]", Campinas);

    printf("Informe a Populacao da cidade: ");
    scanf("%d", &1214000);

    printf("Informe a Area da cidade (em km²): ");
    scanf("%f", &795.70);

    printf("Informe o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &70.80);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &25);

    printf("\n");

    // Exibindo os dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibindo os dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
