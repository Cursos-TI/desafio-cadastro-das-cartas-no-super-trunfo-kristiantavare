#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrar_cidade(Cidade *cidade) {
    printf("Código da cidade (ex: A01, B02): ");
    scanf("%s", cidade->codigo);
    printf("População: ");
    scanf("%d", &cidade->populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade->area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade->pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

void exibir_dados(const Cidade *cidade) {
    printf("\nCódigo: %s\n", cidade->codigo);
    printf("População: %d\n", cidade->populacao);
    printf("Área: %.2f km²\n", cidade->area);
    printf("PIB: %.2f bilhões\n", cidade->pib);
    printf("Número de Pontos Turísticos: %d\n", cidade->pontos_turisticos);
}

int main() {
    int opcao;
    Cidade cidades[32];
    int total_cidades = 0;

    while (1) {
        printf("\n1. Cadastrar nova cidade\n");
        printf("2. Exibir dados das cidades cadastradas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (total_cidades < 32) {
                    cadastrar_cidade(&cidades[total_cidades]);
                    total_cidades++;
                } else {
                    printf("Número máximo de cidades cadastradas atingido.\n");
                }
                break;
            case 2:
                for (int i = 0; i < total_cidades; i++) {
                    exibir_dados(&cidades[i]);
                }
                break;
            case 3:
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
