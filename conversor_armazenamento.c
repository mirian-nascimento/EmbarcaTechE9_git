#include <stdio.h>
#include <string.h>
#include <math.h>

// fatores de conversao
#define BITS_IN_BYTE 8
#define BYTES_IN_KB 1024
#define KB_IN_MB 1024
#define MB_IN_GB 1024
#define GB_IN_TB 1024

void convert_storage(double value, char from_unit[], char to_unit[]) {
    double bits = 0;

    if (strcmp(from_unit, "bits") == 0) {
        bits = value;
    } else if (strcmp(from_unit, "bytes") == 0) {
        bits = value * BITS_IN_BYTE;
    } else if (strcmp(from_unit, "KB") == 0) {
        bits = value * BYTES_IN_KB * BITS_IN_BYTE;
    } else if (strcmp(from_unit, "MB") == 0) {
        bits = value * KB_IN_MB * BYTES_IN_KB * BITS_IN_BYTE;
    } else if (strcmp(from_unit, "GB") == 0) {
        bits = value * MB_IN_GB * KB_IN_MB * BYTES_IN_KB * BITS_IN_BYTE;
    } else if (strcmp(from_unit, "TB") == 0) {
        bits = value * GB_IN_TB * MB_IN_GB * KB_IN_MB * BYTES_IN_KB * BITS_IN_BYTE;
    } else {
        printf("Invalid input unit.\n");
        return;
    }

    // converter bits para unidade desejada
    double result = 0;
    if (strcmp(to_unit, "bits") == 0) {
        result = bits;
    } else if (strcmp(to_unit, "bytes") == 0) {
        result = bits / BITS_IN_BYTE;
    } else if (strcmp(to_unit, "KB") == 0) {
        result = bits / (BITS_IN_BYTE * BYTES_IN_KB);
    } else if (strcmp(to_unit, "MB") == 0) {
        result = bits / (BITS_IN_BYTE * BYTES_IN_KB * KB_IN_MB);
    } else if (strcmp(to_unit, "GB") == 0) {
        result = bits / (BITS_IN_BYTE * BYTES_IN_KB * KB_IN_MB * MB_IN_GB);
    } else if (strcmp(to_unit, "TB") == 0) {
        result = bits / (BITS_IN_BYTE * BYTES_IN_KB * KB_IN_MB * MB_IN_GB * GB_IN_TB);
    } else {
        printf("Invalid output unit.\n");
        return;
    }

    // mostra o resultado
    printf("%.2f %s is equal to %.2f %s\n", value, from_unit, result, to_unit);
}

int main() {
    double value;
    char from_unit[10], to_unit[10];

    printf("Enter the value to convert: ");
    scanf("%lf", &value);

    printf("Enter the unit to convert from (bits, bytes, KB, MB, GB, TB): ");
    scanf("%s", from_unit);

    printf("Enter the unit to convert to (bits, bytes, KB, MB, GB, TB): ");
    scanf("%s", to_unit);

    convert_storage(value, from_unit, to_unit);

    return 0;
}