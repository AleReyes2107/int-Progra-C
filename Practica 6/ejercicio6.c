/**
 * @file ejercicio6.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Programa que solicite al usuario una cadena de texto y muestre el numero de repeticiones de cada una de las letras
 * @version 0.1
 * @date 2023-04-30
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int cant[26] = {0};
    int i = 0;

    printf("Cadena de entrada: ");
    fgets(cadena, 100, stdin);

    // Contar la frecuencia de cada letra del alfabeto
    for (i = 0; cadena[i] != '\0'; i++) {
        if (isalpha(cadena[i])) {
            cant[tolower(cadena[i]) - 'a']++;
        }
    }

    printf("Salida: \n");
    // Imprimir la frecuencia de cada letra
    for (i = 0; i < 26; i++) {
        if (cant[i] > 0) {
            printf("%c ---- %i\n", 'a' + i, cant[i]);
        }
    }

    return 0;
}
