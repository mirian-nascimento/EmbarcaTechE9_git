#ifndef CONVERSOES_H
#define CONVERSOES_H

// Conversões de Temperatura 
#define CELSIUS_TO_FAHRENHEIT(celsius) ((celsius) * 9.0 / 5.0 + 32)  // Celsius para Fahrenheit
#define CELSIUS_TO_KELVIN(celsius) ((celsius) + 273.15)                // Celsius para Kelvin
#define FAHRENHEIT_TO_CELSIUS(fahrenheit) (((fahrenheit) - 32) * 5.0 / 9.0) // Fahrenheit para Celsius
#define FAHRENHEIT_TO_KELVIN(fahrenheit) (CELSIUS_TO_KELVIN(FAHRENHEIT_TO_CELSIUS(fahrenheit))) // Fahrenheit para Kelvin
#define KELVIN_TO_CELSIUS(kelvin) ((kelvin) - 273.15)                    // Kelvin para Celsius
#define KELVIN_TO_FAHRENHEIT(kelvin) (CELSIUS_TO_FAHRENHEIT(KELVIN_TO_CELSIUS(kelvin))) // Kelvin para Fahrenheit

// Conversões de Unidades de Tempo
#define HORA_SEG 3600 // 1 hora em segundos
#define MINUTO_SEG 60 // 1 minuto em segundos

#define CONVERTER_HMS_PARA_SEG(tempo) ((tempo) * HORA_SEG) // Horas para Segundos
#define CONVERTER_SEG_PARA_HORA(tempo) ((tempo) / HORA_SEG) // Segundos para Horas
#define CONVERTER_MIN_PARA_SEG(tempo) ((tempo) * MINUTO_SEG) // Minutos para Segundos
#define CONVERTER_SEG_PARA_MIN(tempo) ((tempo) / MINUTO_SEG) // Segundos para Minutos
#define CONVERTER_MIN_PARA_HMS(tempo) ((tempo) / MINUTO_SEG / 60) // Minutos para Horas
#define CONVERTER_HMS_PARA_MIN(tempo) ((tempo) * MINUTO_SEG / 60) // Horas para Minutos

// Conversões de Unidades de Área
#define M2_PARA_CM2(valor) ((valor) * 10000) // m² para cm²
#define M2_PARA_KM2(valor) ((valor) / 1000000) // m² para km²
#define M2_PARA_HA(valor) ((valor) / 10000) // m² para ha

#define CM2_PARA_M2(valor) ((valor) / 10000) // cm² para m²
#define CM2_PARA_KM2(valor) (M2_PARA_KM2(CM2_PARA_M2(valor))) // cm² para km²
#define CM2_PARA_HA(valor) (M2_PARA_HA(CM2_PARA_M2(valor))) // cm² para ha

#define KM2_PARA_M2(valor) ((valor) * 1000000) // km² para m²
#define KM2_PARA_CM2(valor) (M2_PARA_CM2(KM2_PARA_M2(valor))) // km² para cm²
#define KM2_PARA_HA(valor) (M2_PARA_HA(KM2_PARA_M2(valor))) // km² para ha

#define HA_PARA_M2(valor) ((valor) * 10000) // ha para m²
#define HA_PARA_CM2(valor) (M2_PARA_CM2(HA_PARA_M2(valor))) // ha para cm²
#define HA_PARA_KM2(valor) (M2_PARA_KM2(HA_PARA_M2(valor))) // ha para km²

// Conversões de Unidades de Massa
#define KG_TO_GRAMS(kg) ((kg) * 1000)          // Quilogramas para gramas
#define KG_TO_TON(kg) ((kg) / 1000)            // Quilogramas para toneladas

#define GRAMS_TO_KG(g) ((g) / 1000)            // Gramas para quilogramas
#define GRAMS_TO_TON(g) ((g) / 1000000)        // Gramas para toneladas

#define TON_TO_KG(t) ((t) * 1000)              // Toneladas para quilogramas
#define TON_TO_GRAMS(t) ((t) * 1000000)        // Toneladas para gramas


// Conversões de Velocidade

#define KMH_TO_MS(kmh) ((kmh) / 3.6)            // km/h para m/s
#define KMH_TO_MPH(kmh) ((kmh) * 0.621371)       // km/h para mph
#define MS_TO_KMH(ms) ((ms) * 3.6)               // m/s para km/h
#define MS_TO_MPH(ms) ((ms) * 2.23694)           // m/s para mph
#define MPH_TO_KMH(mph) ((mph) * 1.60934)        // mph para km/h
#define MPH_TO_MS(mph) ((mph) * 0.44704)         // mph para m/s

// Conversões de Volume
#define LITRO_TO_ML(litro) ((litro) * 1000)         // Litros para Mililitros
#define LITRO_TO_M3(litro) ((litro) * 0.001)        // Litros para Metros Cúbicos
#define ML_TO_LITRO(ml) ((ml) * 0.001)              // Mililitros para Litros
#define ML_TO_M3(ml) ((ml) * 1e-6)                  // Mililitros para Metros Cúbicos
#define M3_TO_LITRO(m3) ((m3) * 1000)               // Metros Cúbicos para Litros
#define M3_TO_ML(m3) ((m3) * 1e+6)                  // Metros Cúbicos para Mililitros

// Conversões de Comprimento

#define METRO_TO_CM(metro) ((metro) * 100)          // Metros para Centímetros
#define METRO_TO_MM(metro) ((metro) * 1000)         // Metros para Milímetros
#define CM_TO_METRO(cm) ((cm) * 0.01)               // Centímetros para Metros
#define CM_TO_MM(cm) ((cm) * 10)                    // Centímetros para Milímetros
#define MM_TO_METRO(mm) ((mm) * 0.001)              // Milímetros para Metros
#define MM_TO_CM(mm) ((mm) * 0.1)                   // Milímetros para Centímetros

// Conversões de Armazenamento

#define BYTE_TO_KB(byte) ((long long)(byte) / 1024)           // Bytes para Kilobytes
#define BYTE_TO_MB(byte) ((long long)(byte) / (1024 * 1024))  // Bytes para Megabytes
#define BYTE_TO_GB(byte) ((long long)(byte) / (1024 * 1024 * 1024))  // Bytes para Gigabytes
#define BYTE_TO_TB(byte) ((long long)(byte) / (1024 * 1024 * 1024 * 1024))  // Bytes para Terabytes

#define KB_TO_BYTE(kb) ((long long)(kb) * 1024)               // Kilobytes para Bytes
#define KB_TO_MB(kb) ((long long)(kb) / 1024)                 // Kilobytes para Megabytes
#define KB_TO_GB(kb) ((long long)(kb) / (1024 * 1024))        // Kilobytes para Gigabytes
#define KB_TO_TB(kb) ((long long)(kb) / (1024 * 1024 * 1024)) // Kilobytes para Terabytes

#define MB_TO_BYTE(mb) ((long long)(mb) * 1024 * 1024)        // Megabytes para Bytes
#define MB_TO_KB(mb) ((long long)(mb) * 1024)                 // Megabytes para Kilobytes
#define MB_TO_GB(mb) ((long long)(mb) / 1024)                 // Megabytes para Gigabytes
#define MB_TO_TB(mb) ((long long)(mb) / (1024 * 1024))        // Megabytes para Terabytes

#define GB_TO_BYTE(gb) ((long long)(gb) * 1024 * 1024 * 1024) // Gigabytes para Bytes
#define GB_TO_KB(gb) ((long long)(gb) * 1024 * 1024)          // Gigabytes para Kilobytes
#define GB_TO_MB(gb) ((long long)(gb) * 1024)                 // Gigabytes para Megabytes
#define GB_TO_TB(gb) ((long long)(gb) / 1024)                 // Gigabytes para Terabytes

#define TB_TO_BYTE(tb) ((long long)(tb) * 1024 * 1024 * 1024 * 1024) // Terabytes para Bytes
#define TB_TO_KB(tb) ((long long)(tb) * 1024 * 1024 * 1024)          // Terabytes para Kilobytes
#define TB_TO_MB(tb) ((long long)(tb) * 1024 * 1024)                 // Terabytes para Megabytes
#define TB_TO_GB(tb) ((long long)(tb) * 1024)                        // Terabytes para Gigabytes

#endif // CONVERSOES_H