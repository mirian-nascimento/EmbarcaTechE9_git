#include <stdio.h>

int main() {
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

    // Converte a unidade de origem para quilogramas
    if (origem == 2) valor /= 1000.0;      // Grama para Quilograma
    else if (origem == 3) valor *= 1000.0; // Tonelada para Quilograma

    // Converte de quilogramas para a unidade de destino
    if (destino == 2) resultado = valor * 1000.0;      // Quilograma para Grama
    else if (destino == 3) resultado = valor / 1000.0; // Quilograma para Tonelada
    else resultado = valor;                            // Quilograma para Quilograma

    printf("Valor Convertido: %.2f\n", resultado);

    return 0;
}
