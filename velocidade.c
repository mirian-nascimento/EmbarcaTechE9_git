#include <stdio.h>

// Função para exibir o menu de opções
void exibirMenu() {
    printf("Escolha a unidade de velocidade:\n");
    printf("1. Quilômetros por hora (km/h)\n");
    printf("2. Metros por segundo (m/s)\n");
    printf("3. Milhas por hora (mph)\n");
    printf("Digite sua escolha (1-3): ");
}

// Função para obter o fator de conversão para m/s
double obterFator(int escolha) {
    switch (escolha) {
        case 1:
            return 1.0 / 3.6;    // 1 km/h = 0.27778 m/s
        case 2:
            return 1.0;          // 1 m/s = 1 m/s
        case 3:
            return 0.44704;      // 1 mph = 0.44704 m/s
        default:
            return -1.0;
    }
}

// Função para obter o nome da unidade
const char* obterNomeUnidade(int escolha) {
    switch (escolha) {
        case 1:
            return "Quilômetros por hora (km/h)";
        case 2:
            return "Metros por segundo (m/s)";
        case 3:
            return "Milhas por hora (mph)";
        default:
            return "Desconhecida";
    }
}

int main() {
    int unidadeInicial, unidadeFinal;
    double valorInicial, valorConvertido;
    double fatorInicial, fatorFinal;

    printf("=== Conversor de Unidades de Velocidade ===\n\n");

    // Seleção da unidade inicial
    exibirMenu();
    if (scanf("%d", &unidadeInicial) != 1 || unidadeInicial < 1 || unidadeInicial > 3) {
        printf("Escolha inválida para a unidade inicial.\n");
        return 1;
    }

    // Entrada do valor a ser convertido
    printf("Digite o valor em %s: ", obterNomeUnidade(unidadeInicial));
    if (scanf("%lf", &valorInicial) != 1 || valorInicial < 0) {
        printf("Valor inválido.\n");
        return 1;
    }

    // Seleção da unidade final
    printf("\nEscolha a unidade para a conversão:\n");
    exibirMenu();
    if (scanf("%d", &unidadeFinal) != 1 || unidadeFinal < 1 || unidadeFinal > 3) {
        printf("Escolha inválida para a unidade final.\n");
        return 1;
    }

    // Obter os fatores de conversão
    fatorInicial = obterFator(unidadeInicial);
    fatorFinal = obterFator(unidadeFinal);

    if (fatorInicial == -1.0 || fatorFinal == -1.0) {
        printf("Erro na obtenção dos fatores de conversão.\n");
        return 1;
    }

    // Realizar a conversão
    valorConvertido = valorInicial * fatorInicial / fatorFinal;

    // Exibir o resultado
    printf("\n%.2lf %s equivalem a %.2lf %s.\n",
           valorInicial, obterNomeUnidade(unidadeInicial),
           valorConvertido, obterNomeUnidade(unidadeFinal));

    return 0;
}
