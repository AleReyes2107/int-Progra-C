/**
 * @file ejercicio3.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Cantidad de veces que se repite una letra en una cadena dada por el usuario
 * @version 0.1
 * @date 2023-04-29
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int cant[26] = {0};
    int i = 0, max = 0, letra = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, 100, stdin);

    // Contar la frecuencia de cada letra del alfabeto
    for (i = 0; cadena[i] != '\0'; i++) {
        if (isalpha(cadena[i])) {
            cant[tolower(cadena[i]) - 'a']++;
        }
    }

    // Encontrar la letra con la frecuencia más alta
    for (i = 0; i < 26; i++) {
        if (cant[i] > max) {
            max = cant[i];
            letra = i;
        }
    }

    // Imprimir la letra y su frecuencia
    printf("La letra con la frecuencia mas alta es %c, que aparece %d veces.\n",'a' + letra, max);
    return 0;
}
