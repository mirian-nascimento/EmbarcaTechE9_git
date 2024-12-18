// Funções para conversão de volume
double converter_volume(double valor, int de, int para) {
    // De: 0-litro, 1-mililitro, 2-metro cúbico
    double litros, resultado;
    if (de == 0) litros = valor;  // Litro
    else if (de == 1) litros = valor / 1000;  // Mililitro
    else litros = valor * 1000;  // Metro cúbico

    if (para == 0) resultado = litros;
    else if (para == 1) resultado = litros * 1000;
    else resultado = litros / 1000;
    
    return resultado;