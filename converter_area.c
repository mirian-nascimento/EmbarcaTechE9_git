#include <stdio.h>

// Conversão de metros quadrados para outras unidades (diretas)

float converter_m2_para_cm2(float valor) {
    return valor * 10000; // 1 m² = 10.000 cm²
}

float converter_m2_para_km2(float valor) {
    return valor / 1000000; // 1 km² = 1.000.000 m²
}

float converter_m2_para_ha(float valor) {
    return valor / 10000; // 1 ha = 10.000 m²
}

// Conversão de centímetros quadrados para outras unidades (diretas)

float converter_cm2_para_m2(float valor) {
    return valor / 10000; // 1 m² = 10.000 cm²
}

float converter_cm2_para_km2(float valor) {
    float m2 = converter_cm2_para_m2(valor);
    return converter_m2_para_km2(m2); // Primeiro converte para m² e depois para km²
}

float converter_cm2_para_ha(float valor) {
    float m2 = converter_cm2_para_m2(valor);
    return converter_m2_para_ha(m2); // Primeiro converte para m² e depois para ha
}

// Conversão de quilômetros quadrados para outras unidades (diretas)

float converter_km2_para_m2(float valor) {
    return valor * 1000000; // 1 km² = 1.000.000 m²
}

float converter_km2_para_cm2(float valor) {
    float m2 = converter_km2_para_m2(valor);
    return converter_m2_para_cm2(m2); // Primeiro converte para m² e depois para cm²
}

float converter_km2_para_ha(float valor) {
    float m2 = converter_km2_para_m2(valor);
    return converter_m2_para_ha(m2); // Primeiro converte para m² e depois para ha
}

// Conversão de hectares para outras unidades (diretas)

float converter_ha_para_m2(float valor) {
    return valor * 10000; // 1 ha = 10.000 m²
}

float converter_ha_para_cm2(float valor) {
    float m2 = converter_ha_para_m2(valor);
    return converter_m2_para_cm2(m2); // Primeiro converte para m² e depois para cm²
}

float converter_ha_para_km2(float valor) {
    float m2 = converter_ha_para_m2(valor);
    return converter_m2_para_km2(m2); // Primeiro converte para m² e depois para km²
}