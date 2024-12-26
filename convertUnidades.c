#include <stdio.h>
#include <locale.h>
#include <string.h>

// Constantes para conversão
#define BITS_IN_BYTE 8
#define BYTES_IN_KB 1024
#define KB_IN_MB 1024
#define MB_IN_GB 1024
#define GB_IN_TB 1024

// Protótipos das funções
void converterMassa();
void converterVelocidade();
void converterArea();
void converterArmazenamento();
void converterTemperatura();
void converterTempo();
double get_conversion_factor(char from_unit[], char to_unit[]);
void convert_storage(double value, char from_unit[], char to_unit[]);

float conversao_temperatura(float original, int medida_original, int medida_final);

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");  // Definindo o idioma

    int escolha;

    printf("=== Conversor de Unidades ===\n");
    printf("1. Conversor de Massa\n");
    printf("2. Conversor de Velocidade\n");
    printf("3. Conversor de Área\n");
    printf("4. Conversor de Armazenamento\n");
    printf("5. Conversor de Temperatura\n");
    printf("6. Conversor de Tempo\n");
    printf("Escolha o conversor: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            converterMassa();
            break;
        case 2:
            converterVelocidade();
            break;
        case 3:
            converterArea();
            break;
        case 4:
            converterArmazenamento();
            break;
        case 5:
            converterTemperatura();
            break;
        case 6:
            converterTempo();
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

// Função para conversão de massa
void converterMassa() {
    float valor, resultado;
    int origem, destino;

    printf("=== Conversor de Massa ===\n");
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

// Função para conversão de velocidade
void converterVelocidade() {
    int unidadeInicial, unidadeFinal;
    double valorInicial, valorConvertido;
    double fatorInicial, fatorFinal;

    printf("=== Conversor de Velocidade ===\n");
    printf("1. Quilômetros por hora (km/h)\n");
    printf("2. Metros por segundo (m/s)\n");
    printf("3. Milhas por hora (mph)\n");
    printf("Escolha a unidade inicial: ");
    scanf("%d", &unidadeInicial);

    printf("Digite o valor: ");
    scanf("%lf", &valorInicial);

    printf("Escolha a unidade final: ");
    scanf("%d", &unidadeFinal);

    if (unidadeInicial == 1) fatorInicial = 1.0 / 3.6;
    else if (unidadeInicial == 2) fatorInicial = 1.0;
    else fatorInicial = 0.44704;

    if (unidadeFinal == 1) fatorFinal = 1.0 / 3.6;
    else if (unidadeFinal == 2) fatorFinal = 1.0;
    else fatorFinal = 0.44704;

    valorConvertido = valorInicial * fatorInicial / fatorFinal;
    printf("Valor convertido: %.2f\n", valorConvertido);
}

// Função para conversão de área
void converterArea() {
    printf("=== Conversor de Área ===\n");
    printf("Funcionalidade ainda não implementada.\n");
}

// Função para conversão de armazenamento
void converterArmazenamento() {
    double value;
    char from_unit[10], to_unit[10];

    printf("=== Conversor de Armazenamento ===\n");
    printf("Digite o valor que quer converter: ");
    scanf("%lf", &value);

    printf("Digite a unidade da qual quer converter (bits, bytes, KB, MB, GB, TB): ");
    scanf("%s", from_unit);

    printf("Digite a unidade para a qual quer converter (bits, bytes, KB, MB, GB, TB): ");
    scanf("%s", to_unit);

    convert_storage(value, from_unit, to_unit);
}

double get_conversion_factor(char from_unit[], char to_unit[]) {
    double factor = 1.0;

    if (strcmp(from_unit, "bits") == 0) {
        factor /= BITS_IN_BYTE;
        strcpy(from_unit, "bytes");
    }
    if (strcmp(to_unit, "bits") == 0) {
        factor *= BITS_IN_BYTE;
        strcpy(to_unit, "bytes");
    }

    char *units[] = {"bytes", "KB", "MB", "GB", "TB"};
    double multipliers[] = {1, BYTES_IN_KB, KB_IN_MB, MB_IN_GB, GB_IN_TB};

    int from_index = -1, to_index = -1;
    for (int i = 0; i < 5; i++) {
        if (strcmp(from_unit, units[i]) == 0) from_index = i;
        if (strcmp(to_unit, units[i]) == 0) to_index = i;
    }

    if (from_index == -1 || to_index == -1) {
        printf("Unidade inválida.\n");
        return -1;
    }

    while (from_index < to_index) {
        factor /= multipliers[from_index + 1];
        from_index++;
    }
    while (from_index > to_index) {
        factor *= multipliers[from_index];
        from_index--;
    }

    return factor;
}

void convert_storage(double value, char from_unit[], char to_unit[]) {
    double factor = get_conversion_factor(from_unit, to_unit);
    if (factor < 0) return;

    double result = value * factor;
    printf("%.2f %s é igual a %.2f %s\n", value, from_unit, result, to_unit);
}

// Função para conversão de temperatura
void converterTemperatura() {
    float valor;
    int medida_original, medida_final;

    printf("=== Conversor de Temperatura ===\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");

    printf("Escolha a unidade de origem: ");
    scanf("%d", &medida_original);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de destino: ");
    scanf("%d", &medida_final);

    float resultado = conversao_temperatura(valor, medida_original, medida_final);
    printf("Valor convertido: %.2f\n", resultado);
}

float conversao_temperatura(float original, int medida_original, int medida_final) {
    float celsius = 0, fahr = 0, kelvin = 0;

    switch (medida_original) {
        case 1:
            celsius = original;
            fahr = (celsius * 9.0) / 5.0 + 32.0;
            kelvin = celsius + 273.15;
            break;
        case 2:
            fahr = original;
            celsius = 5.0 * (fahr - 32.0) / 9.0;
            kelvin = celsius + 273.15;
            break;
        case 3:
            kelvin = original;
            celsius = kelvin - 273.15;
            fahr = (celsius * 9.0) / 5.0 + 32.0;
            break;
    }

    switch (medida_final) {
        case 1:
            return celsius;
        case 2:
            return fahr;
        case 3:
            return kelvin;
    }

    return 0;
}

// Função para conversão de tempo
void converterTempo() {
    double valor, resultado;
    int origem, destino;

    printf("=== Conversor de Tempo ===\n");
    printf("Digite a unidade de origem (1 - segundos, 2 - minutos, 3 - horas): ");
    scanf("%d", &origem);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de destino (1 - segundos, 2 - minutos, 3 - horas): ");
    scanf("%d", &destino);

    if (origem == 1) {
        if (destino == 2) resultado = valor / 60;
        else if (destino == 3) resultado = valor / 3600;
        else resultado = valor;
    } else if (origem == 2) {
        if (destino == 1) resultado = valor * 60;
        else if (destino == 3) resultado = valor / 60;
        else resultado = valor;
    } else if (origem == 3) {
        if (destino == 1) resultado = valor * 3600;
        else if (destino == 2) resultado = valor * 60;
        else resultado = valor;
    } else {
        printf("Unidade de origem inválida!\n");
        return;
    }

    printf("Resultado: %.2f\n", resultado);
}
