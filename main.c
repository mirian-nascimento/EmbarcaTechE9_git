#include <stdio.h>
#include "conversoes.h"

// Funções para exibir as opções de conversão e solicitar entrada
void conversaoTemperatura() {
    float valor;
    int opcao;
    
    printf("Escolha a conversão de temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Fahrenheit para Kelvin\n");
    printf("5. Kelvin para Celsius\n");
    printf("6. Kelvin para Fahrenheit\n");
    
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    switch(opcao) {
        case 1:
            printf("%.2f Celsius = %.2f Fahrenheit\n", valor, CELSIUS_TO_FAHRENHEIT(valor));
            break;
        case 2:
            printf("%.2f Celsius = %.2f Kelvin\n", valor, CELSIUS_TO_KELVIN(valor));
            break;
        case 3:
            printf("%.2f Fahrenheit = %.2f Celsius\n", valor, FAHRENHEIT_TO_CELSIUS(valor));
            break;
        case 4:
            printf("%.2f Fahrenheit = %.2f Kelvin\n", valor, FAHRENHEIT_TO_KELVIN(valor));
            break;
        case 5:
            printf("%.2f Kelvin = %.2f Celsius\n", valor, KELVIN_TO_CELSIUS(valor));
            break;
        case 6:
            printf("%.2f Kelvin = %.2f Fahrenheit\n", valor, KELVIN_TO_FAHRENHEIT(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void conversaoTempo() {
    float valor;
    int opcao;
    
    printf("Escolha a conversão de tempo:\n");
    printf("1. Horas para Segundos\n");
    printf("2. Segundos para Horas\n");
    printf("3. Minutos para Segundos\n");
    printf("4. Segundos para Minutos\n");
    printf("5. Minutos para Horas\n");
    printf("6. Horas para Minutos\n");
    
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    switch(opcao) {
        case 1:
            printf("%.2f horas = %.2f segundos\n", valor, CONVERTER_HMS_PARA_SEG(valor));
            break;
        case 2:
            printf("%.2f segundos = %.2f horas\n", valor, CONVERTER_SEG_PARA_HORA(valor));
            break;
        case 3:
            printf("%.2f minutos = %.2f segundos\n", valor, CONVERTER_MIN_PARA_SEG(valor));
            break;
        case 4:
            printf("%.2f segundos = %.2f minutos\n", valor, CONVERTER_SEG_PARA_MIN(valor));
            break;
        case 5:
            printf("%.2f minutos = %.2f horas\n", valor, CONVERTER_MIN_PARA_HMS(valor));
            break;
        case 6:
            printf("%.2f horas = %.2f minutos\n", valor, CONVERTER_HMS_PARA_MIN(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void conversaoMassa() {
    float valor;
    int opcao;
    
    printf("Escolha a conversão de massa:\n");
    printf("1. Quilogramas para Gramas\n");
    printf("2. Quilogramas para Toneladas\n");
    printf("3. Gramas para Quilogramas\n");
    printf("4. Gramas para Toneladas\n");
    printf("5. Toneladas para Quilogramas\n");
    printf("6. Toneladas para Gramas\n");
    
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    switch(opcao) {
        case 1:
            printf("%.2f quilogramas = %.2f gramas\n", valor, KG_TO_GRAMS(valor));
            break;
        case 2:
            printf("%.2f quilogramas = %.2f toneladas\n", valor, KG_TO_TON(valor));
            break;
        case 3:
            printf("%.2f gramas = %.2f quilogramas\n", valor, GRAMS_TO_KG(valor));
            break;
        case 4:
            printf("%.2f gramas = %.6f toneladas\n", valor, GRAMS_TO_TON(valor));
            break;
        case 5:
            printf("%.2f toneladas = %.2f quilogramas\n", valor, TON_TO_KG(valor));
            break;
        case 6:
            printf("%.2f toneladas = %.2f gramas\n", valor, TON_TO_GRAMS(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void conversaoVelocidade() {
    float valor;
    int opcao;
    
    printf("Escolha a conversão de velocidade:\n");
    printf("1. km/h para m/s\n");
    printf("2. km/h para mph\n");
    printf("3. m/s para km/h\n");
    printf("4. m/s para mph\n");
    printf("5. mph para km/h\n");
    printf("6. mph para m/s\n");
    
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    switch(opcao) {
        case 1:
            printf("%.2f km/h = %.2f m/s\n", valor, KMH_TO_MS(valor));
            break;
        case 2:
            printf("%.2f km/h = %.2f mph\n", valor, KMH_TO_MPH(valor));
            break;
        case 3:
            printf("%.2f m/s = %.2f km/h\n", valor, MS_TO_KMH(valor));
            break;
        case 4:
            printf("%.2f m/s = %.2f mph\n", valor, MS_TO_MPH(valor));
            break;
        case 5:
            printf("%.2f mph = %.2f km/h\n", valor, MPH_TO_KMH(valor));
            break;
        case 6:
            printf("%.2f mph = %.2f m/s\n", valor, MPH_TO_MS(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void conversaoArmazenamento() {
    long long valor;
    int opcao;
    
    printf("Escolha a conversão de armazenamento:\n");
    printf("1. Bytes para Kilobytes\n");
    printf("2. Bytes para Megabytes\n");
    printf("3. Bytes para Gigabytes\n");
    printf("4. Bytes para Terabytes\n");
    printf("5. Kilobytes para Bytes\n");
    printf("6. Kilobytes para Megabytes\n");
    printf("7. Kilobytes para Gigabytes\n");
    printf("8. Kilobytes para Terabytes\n");
    printf("9. Megabytes para Bytes\n");
    printf("10. Megabytes para Kilobytes\n");
    printf("11. Megabytes para Gigabytes\n");
    printf("12. Megabytes para Terabytes\n");
    printf("13. Gigabytes para Bytes\n");
    printf("14. Gigabytes para Kilobytes\n");
    printf("15. Gigabytes para Megabytes\n");
    printf("16. Gigabytes para Terabytes\n");
    printf("17. Terabytes para Bytes\n");
    printf("18. Terabytes para Kilobytes\n");
    printf("19. Terabytes para Megabytes\n");
    printf("20. Terabytes para Gigabytes\n");
    
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%lld", &valor);
    
    switch(opcao) {
        case 1:
            printf("%lld Bytes = %lld Kilobytes\n", valor, BYTE_TO_KB(valor));
            break;
        case 2:
            printf("%lld Bytes = %.2f Megabytes\n", valor, BYTE_TO_MB(valor));
            break;
        case 3:
            printf("%lld Bytes = %.6f Gigabytes\n", valor, BYTE_TO_GB(valor));
            break;
        case 4:
            printf("%lld Bytes = %.9f Terabytes\n", valor, BYTE_TO_TB(valor));
            break;
        case 5:
            printf("%lld Kilobytes = %lld Bytes\n", valor, KB_TO_BYTE(valor));
            break;
        case 6:
            printf("%lld Kilobytes = %.2f Megabytes\n", valor, KB_TO_MB(valor));
            break;
        case 7:
            printf("%lld Kilobytes = %.6f Gigabytes\n", valor, KB_TO_GB(valor));
            break;
        case 8:
            printf("%lld Kilobytes = %.9f Terabytes\n", valor, KB_TO_TB(valor));
            break;
        case 9:
            printf("%lld Megabytes = %lld Bytes\n", valor, MB_TO_BYTE(valor));
            break;
        case 10:
            printf("%lld Megabytes = %lld Kilobytes\n", valor, MB_TO_KB(valor));
            break;
        case 11:
            printf("%lld Megabytes = %.2f Gigabytes\n", valor, MB_TO_GB(valor));
            break;
        case 12:
            printf("%lld Megabytes = %.6f Terabytes\n", valor, MB_TO_TB(valor));
            break;
        case 13:
            printf("%lld Gigabytes = %lld Bytes\n", valor, GB_TO_BYTE(valor));
            break;
        case 14:
            printf("%lld Gigabytes = %lld Kilobytes\n", valor, GB_TO_KB(valor));
            break;
        case 15:
            printf("%lld Gigabytes = %lld Megabytes\n", valor, GB_TO_MB(valor));
            break;
        case 16:
            printf("%lld Gigabytes = %.2f Terabytes\n", valor, GB_TO_TB(valor));
            break;
        case 17:
            printf("%lld Terabytes = %lld Bytes\n", valor, TB_TO_BYTE(valor));
            break;
        case 18:
            printf("%lld Terabytes = %lld Kilobytes\n", valor, TB_TO_KB(valor));
            break;
        case 19:
            printf("%lld Terabytes = %lld Megabytes\n", valor, TB_TO_MB(valor));
            break;
        case 20:
            printf("%lld Terabytes = %lld Gigabytes\n", valor, TB_TO_GB(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

int main() {
    int opcao;
    
    while (1) {
        printf("\nEscolha o tipo de conversão:\n");
        printf("1. Temperatura\n");
        printf("2. Tempo\n");
        printf("3. Massa\n");
        printf("4. Velocidade\n");
        printf("5. Armazenamento\n");
        printf("6. Sair\n");
        
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                conversaoTemperatura();
                break;
            case 2:
                conversaoTempo();
                break;
            case 3:
                conversaoMassa();
                break;
            case 4:
                conversaoVelocidade();
                break;
            case 5:
                conversaoArmazenamento();
                break;
            case 6:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}
