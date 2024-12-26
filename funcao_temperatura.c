#include <stdio.h>
/*
Guia de medidas
1 -> Celsius
2 -> Fahrenheit
3 -> Kelvin
*/
float conversao_temperatura(float original, int medida_original, int medida_final){

    float celsius = 0, fahr = 0, kelvin = 0;

    switch (medida_original){
        case 1:
            celsius = original;
            fahr = (celsius * 9.0)/5.0 + 32.0;
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
            fahr = (celsius * 9.0)/5.0 + 32.0;
            break;
    }

    switch (medida_final) {
        case 1:
            return celsius;
            break;
        case 2:
            return fahr;
            break;
        case 3:
            return kelvin;
            break;
    }
    
    return 0;
}

int main(void){
    printf("%.2f", conversao_temperatura(100, 2, 1));
    return 0;
}