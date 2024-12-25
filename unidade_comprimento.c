/*
Função para conversão das unidades de comprimento

Usuário digita uma medida e a unidade (metros, centímetros ou milímetros) 
e depois o programa faz a conversão para as outras duas unidades.
*/ 

#include <stdio.h>

void ucomprimento(float medida, int unidade);  //Conversão das medidas de comprimento

int main() {
    float medida;
    int unidade;

    printf("Digite a medida: ");
    scanf("%f", &medida);

    printf("Digite a unidade (1 para metros, 2 para centímetros, 3 para milímetros): ");
    scanf("%d", &unidade);

    ucomprimento(medida, unidade);

    return 0;
}

void ucomprimento(float medida, int unidade) {
    switch (unidade) {
        case 1:
            printf("%.2f metros equivalem a %.2f centímetros e %.2f milímetros.\n", medida, medida * 100, medida * 1000);
            break;
        case 2:
            printf("%.2f centímetros equivalem a %.2f metros e %.2f milímetros.\n", medida, medida / 100, medida * 10);
            break;
        case 3:
            printf("%.2f milímetros equivalem a %.2f metros e %.2f centímetros.\n", medida, medida / 1000, medida / 10);
            break;
        default:
            printf("Unidade inválida.\n");
            break;
    }
}