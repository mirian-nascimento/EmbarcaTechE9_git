// Código em C para converter unidades de tempo (segundos, minutos e horas)

#include <stdio.h>

void converterTempo() {
    // 1) - Declaração de variável
    double valor, resultado;
    int origem, destino;

    // 2) - coleta de dados
	printf("Digite a unidade de origem (1 - segundos, 2 - minutos, 3 - horas): ");
	scanf("%d", &origem);
	printf("\n");
	
	printf("Digite o valor: ");
	scanf("%lf", &valor);
	printf("\n");


    printf("Digite a unidade de destino (1 - segundos, 2 - minutos, 3 - horas): ");
    scanf(" %d", &destino);
    printf("\n");


    // 3) - Laço de decição e operação
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
        printf("Unidade de origem inv�lida!\n");
        return ;
    }


    // 4) - Exibição de resultados
    printf("Resultado: %.2f\n", resultado);
    
}

