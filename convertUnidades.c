#include <stdio.h>

// Protótipos das funções
void converterMassa();
void converterVelocidade();
double obterFator(int escolha);
const char* obterNomeUnidade(int escolha);
void exibirMenu();

int main() {
    int escolha;

    printf("Conversor de Unidades\n");
    printf("1. Conversor de Massa\n");
    printf("2. Conversor de Velocidade\n");

    printf("Escolha o conversor: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            converterMassa(); // Chama a função que converte a massa
            break;
        case 2:
            converterVelocidade(); // Chama a função que converte a velocidade
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

// 1. Conversor de Massa
void converterMassa() {
    float valor, resultado;
    int origem, destino;

    printf("Conversor de Unidades de Massa\n");
    printf("1. Quilograma (kg)\n2. Grama (g)\n3. Tonelada (t)\n");

    printf("Escolha a unidade de origem (1-3): ");
    scanf("%d", &origem);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de destino (1-3): ");
    scanf("%d", &destino);

    if (origem == 2) valor /= 1000.0;
    else if (origem == 3) valor *= 1000.0;

    if (destino == 2) resultado = valor * 1000.0;
    else if (destino == 3) resultado = valor / 1000.0;
    else resultado = valor;

    printf("Valor Convertido: %.2f\n", resultado);
}

// 2. Conversor de Velocidade
double obterFator(int escolha) {
    switch (escolha) {
        case 1: return 1.0 / 3.6; // 1 km/h = 0.27778 m/s
        case 2: return 1.0;       // 1 m/s = 1 m/s
        case 3: return 0.44704;   // 1 mph = 0.44704 m/s
        default: return -1.0;
    }
}

const char* obterNomeUnidade(int escolha) {
    switch (escolha) {
        case 1: return "Quilômetros por hora (km/h)";
        case 2: return "Metros por segundo (m/s)";
        case 3: return "Milhas por hora (mph)";
        default: return "Desconhecida";
    }
}

void exibirMenu() {
    printf("1. Quilômetros por hora (km/h)\n");
    printf("2. Metros por segundo (m/s)\n");
    printf("3. Milhas por hora (mph)\n");
}

void converterVelocidade() {
    int unidadeInicial, unidadeFinal;
    double valorInicial, valorConvertido;
    double fatorInicial, fatorFinal;

    printf("=== Conversor de Unidades de Velocidade ===\n\n");

    // Seleção da unidade inicial
    exibirMenu();
    printf("Escolha a unidade inicial: ");
    if (scanf("%d", &unidadeInicial) != 1 || unidadeInicial < 1 || unidadeInicial > 3) {
        printf("Escolha inválida para a unidade inicial.\n");
        return;
    }

    // Entrada do valor a ser convertido
    printf("Digite o valor em %s: ", obterNomeUnidade(unidadeInicial));
    if (scanf("%lf", &valorInicial) != 1 || valorInicial < 0) {
        printf("Valor inválido.\n");
        return;
    }

    // Seleção da unidade final
    printf("\nEscolha a unidade para a conversão:\n");
    exibirMenu();
    printf("Escolha a unidade final: ");
    if (scanf("%d", &unidadeFinal) != 1 || unidadeFinal < 1 || unidadeFinal > 3) {
        printf("Escolha inválida para a unidade final.\n");
        return;
    }

    // Obter os fatores de conversão
    fatorInicial = obterFator(unidadeInicial);
    fatorFinal = obterFator(unidadeFinal);

    if (fatorInicial == -1.0 || fatorFinal == -1.0) {
        printf("Erro na obtenção dos fatores de conversão.\n");
        return;
    }

    // Realizar a conversão
    valorConvertido = valorInicial * fatorInicial / fatorFinal;

    // Exibir o resultado
    printf("\n%.2lf %s equivalem a %.2lf %s.\n",
           valorInicial, obterNomeUnidade(unidadeInicial),
           valorConvertido, obterNomeUnidade(unidadeFinal));
}