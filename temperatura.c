#include <stdio.h>

int main(void){
    float celsius, far, kelvin;
    int escala;

    printf("Digite a escala original:\n1 - Celsius\n2 - Fahrenheit\n3 - Kelvin\n>");
    scanf("%d", &escala);
    while (escala < 1 || escala > 3){
        printf("Opção Inválida!\nDigite a escala original:\n1 - Celsius\n 2 - Fahrenheit\n3 - Kelvin\n>");
        scanf("%d", &escala);
    }
    
    switch (escala)
    {
    case 1:
        printf("Digite a temperatura original:\n>");
        scanf("%f", &celsius);
        far = (celsius * 9.0)/5.0 + 32.0;
        kelvin = celsius + 273.15;
        break;
    case 2:
        printf("Digite a temperatura original:\n>");
        scanf("%f", &far);
        celsius = 5.0 * (far - 32.0) / 9.0;
        kelvin = celsius + 273.15;
        break;
    case 3:
        printf("Digite a temperatura original:\n>");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15;
        far = (celsius * 9.0)/5.0 + 32.0;
        break;
    }

    printf("\nCelsius: %.2f\n\nFahrenheit: %.2f\n\nKelvin: %.2f", celsius, far, kelvin);
    return 0;
}