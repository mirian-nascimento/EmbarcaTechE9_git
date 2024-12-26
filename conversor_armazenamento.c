#include <stdio.h>
#include <string.h>

// Fatores de conversão
#define BITS_IN_BYTE 8
#define BYTES_IN_KB 1024
#define KB_IN_MB 1024
#define MB_IN_GB 1024
#define GB_IN_TB 1024

// Função para calcular o fator de conversão entre duas unidades
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

    return factor; // Retorna o fator de conversão calculado
}

// Função para converter valores entre diferentes unidades de armazenamento
void convert_storage(double value, char from_unit[], char to_unit[]) {
    double factor = get_conversion_factor(from_unit, to_unit);
    if (factor < 0) return;

    // Aplica o fator de conversão ao valor fornecido
    double result = value * factor;

    // Exibe o resultado da conversão
    printf("%.2f %s é igual a %.2f %s\n", value, from_unit, result, to_unit);
}

// Função principal que interage com o usuário
int main() {
    double value;
    char from_unit[10];
    char to_unit[10];


    printf("Digite o valor que quer converter: ");
    scanf("%lf", &value);

    printf("Digite a unidade da qual quer converter: (bits, bytes, KB, MB, GB, TB): ");
    scanf("%s", from_unit);

    printf("Digite a unidade para a qual quer converter: (bits, bytes, KB, MB, GB, TB): ");
    scanf("%s", to_unit);


    convert_storage(value, from_unit, to_unit);

    return 0;
}
