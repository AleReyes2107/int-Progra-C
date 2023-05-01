/**
 * @file ejercicio1.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Contador de tamanio de cadena de texto dada por el usuario
 * @version 0.1
 * @date 2023-04-28
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

int main() {
    char cadena [100];
    int i = 0, tam = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, 100, stdin);

    for ( i; cadena[i] != '\0'; i++) {
        if (cadena[i] != ' ') {
            tam++;
        }
    }

    printf("El tamanio de la cadena es: %i", tam);

    return 0;
}