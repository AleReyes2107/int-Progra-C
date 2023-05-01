/**
 * @file ejercicio4.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Programa que solicite al usuario una cadena de texto y muestre la palabra mas corta y la palabra mas larga.
 * @version 0.1
 * @date 2023-04-29
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <string.h>

#define TAM 200

int main() {
    char cadena[TAM];
    char Pacorta[TAM];
    char Palarga[TAM];
    int Locorta = TAM;
    int Lolarga = 0;
    int n = 0, i = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, TAM, stdin);

    // Buscar la palabra más corta y la palabra más larga
   for (int n = 0, i = 0; sscanf(cadena + n, " %s%n", Pacorta, &i) != EOF; n += i) {
    int LoPa = strlen(Pacorta);
    if (LoPa < Locorta) {
        sprintf(Pacorta, "%s", Pacorta);  // Copiar la palabra a la variable de la palabra más corta
        Locorta = LoPa;  // Actualizar la longitud de la palabra más corta
    }
    if (LoPa > Lolarga) {
        sprintf(Palarga, "%s", Pacorta);  // Copiar la palabra a la variable de la palabra más larga
        Lolarga = LoPa;  // Actualizar la longitud de la palabra más larga
    }
}

    // Imprimir las palabras más corta y más larga
    printf("La palabra mas corta es: %s\n", Pacorta);
    printf("La palabra mas larga es: %s\n", Palarga);

    return 0;
}
