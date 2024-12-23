// Código em C para converter unidades de tempo (segundos, minutos e horas)

#include <stdio.h>

void converterTempo() {
    // 1) - Declaração de variável
    double valor, resultado;
    char origem, destino;

    // 2) - coleta de dados
	printf("Digite a unidade de origem (s - segundos, m - minutos, h - horas): ");
	scanf("%c", &origem);
	printf("\n");
	
	printf("Digite o valor: ");
	scanf("%lf", &valor);
	printf("\n");


    printf("Digite a unidade de destino (s - segundos, m - minutos, h - horas): ");
    scanf(" %c", &destino);
    printf("\n");


    // 3) - Laço de decição e operação
    if (origem == 's') {
        if (destino == 'm') resultado = valor / 60;
        else if (destino == 'h') resultado = valor / 3600;
        else resultado = valor;
    } else if (origem == 'm') {
        if (destino == 's') resultado = valor * 60;
        else if (destino == 'h') resultado = valor / 60;
        else resultado = valor;
    } else if (origem == 'h') {
        if (destino == 's') resultado = valor * 3600;
        else if (destino == 'm') resultado = valor * 60;
        else resultado = valor;
    } else {
        printf("Unidade de origem inv�lida!\n");
        return ;
    }


    // 4) - Exibição de resultados
    printf("Resultado: %.2f\n", resultado);
    
}

