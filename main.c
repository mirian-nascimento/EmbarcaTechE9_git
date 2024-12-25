#include <stdio.h>
#include "converter_area.c"  // Inclui o arquivo de funções de conversão
#include <locale.h>  // Para definir a localidade e codificação correta

// Função para exibir o menu de opções
void exibir_menu() {
    printf("Escolha a unidade de entrada:\n");
    printf("1. metros quadrados (m2)\n");
    printf("2. centímetros quadrados (cm2)\n");
    printf("3. quilômetros quadrados (km2)\n");
    printf("4. hectares (ha)\n");
    printf("Digite o número correspondente à unidade de entrada: ");
}

// Função para exibir as opções de conversão
void exibir_opcoes_de_conversao() {
    printf("Escolha a unidade para a qual deseja converter:\n");
    printf("1. metros quadrados (m2)\n");
    printf("2. centímetros quadrados (cm2)\n");
    printf("3. quilômetros quadrados (km2)\n");
    printf("4. hectares (ha)\n");
    printf("Digite o número correspondente à unidade de destino: ");
}

int main(void) {
    // Define o locale para português com UTF-8 para garantir a exibição correta de caracteres especiais
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao_entrada, opcao_destino;
    float valor;

    // Exibe o menu para escolher a unidade de entrada
    exibir_menu();
    scanf("%d", &opcao_entrada);

    // Solicita o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Exibe as opções de conversão
    exibir_opcoes_de_conversao();
    scanf("%d", &opcao_destino);

    // Realiza a conversão com base na escolha do usuário
    switch(opcao_entrada) {
        case 1: // Entrada: metros quadrados (m2)
            switch(opcao_destino) {
                case 1:
                    printf("%.2f m2 = %.2f m2\n", valor, valor);
                    break;
                case 2:
                    printf("%.2f m2 = %.2f cm2\n", valor, converter_m2_para_cm2(valor));
                    break;
                case 3:
                    printf("%.2f m2 = %.6f km2\n", valor, converter_m2_para_km2(valor));
                    break;
                case 4:
                    printf("%.2f m2 = %.2f ha\n", valor, converter_m2_para_ha(valor));
                    break;
                default:
                    printf("Opcao de conversao invalida!\n");
            }
            break;
        
        case 2: // Entrada: centímetros quadrados (cm2)
            switch(opcao_destino) {
                case 1:
                    printf("%.2f cm2 = %.2f m2\n", valor, converter_cm2_para_m2(valor));
                    break;
                case 2:
                    printf("%.2f cm2 = %.2f cm2\n", valor, valor);
                    break;
                case 3:
                    printf("%.2f cm2 = %.6f km2\n", valor, converter_cm2_para_km2(valor));
                    break;
                case 4:
                    printf("%.2f cm2 = %.5f ha\n", valor, converter_cm2_para_ha(valor));
                    break;
                default:
                    printf("Opcao de conversao inválida!\n");
            }
            break;

        case 3: // Entrada: quilômetros quadrados (km2)
            switch(opcao_destino) {
                case 1:
                    printf("%.2f km2 = %.2f m2\n", valor, converter_km2_para_m2(valor));
                    break;
                case 2:
                    printf("%.2f km2 = %.2f cm2\n", valor, converter_km2_para_cm2(valor));
                    break;
                case 3:
                    printf("%.2f km2 = %.2f km2\n", valor, valor);
                    break;
                case 4:
                    printf("%.2f km2 = %.2f ha\n", valor, converter_km2_para_ha(valor));
                    break;
                default:
                    printf("Opcao de conversao invalida!\n");
            }
            break;

        case 4: // Entrada: hectares (ha)
            switch(opcao_destino) {
                case 1:
                    printf("%.2f ha = %.2f m2\n", valor, converter_ha_para_m2(valor));
                    break;
                case 2:
                    printf("%.2f ha = %.2f cm2\n", valor, converter_ha_para_cm2(valor));
                    break;
                case 3:
                    printf("%.2f ha = %.2f km2\n", valor, converter_ha_para_km2(valor));
                    break;
                case 4:
                    printf("%.2f ha = %.2f ha\n", valor, valor);
                    break;
                default:
                    printf("Opcao de conversão invalida!\n");
            }
            break;

        default:
            printf("Opcao de entrada invalida!\n");
    }

    return 0;
}
