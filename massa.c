#include <stdio.h>

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