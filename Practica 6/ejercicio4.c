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
    char *aux;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, TAM, stdin);

    // Buscar la palabra más corta y la palabra más larga
    aux = strtok(cadena, " \n");  // Dividir la cadena en palabras usando espacios y saltos de línea como delimitadores
    while (aux != NULL) {
        int LoPa = strlen(aux);
        if (LoPa < Locorta) {
            strncpy(Pacorta, aux, TAM);  // Copiar la palabra a la variable de la palabra más corta
            Locorta = LoPa;  // Actualizar la longitud de la palabra más corta
        }
        if (LoPa > Lolarga) {
            strncpy(Palarga, aux, TAM);  // Copiar la palabra a la variable de la palabra más larga
            Lolarga = LoPa;  // Actualizar la longitud de la palabra más larga
        }
        aux = strtok(NULL, " \n");  // Obtener la siguiente palabra
    }

    // Imprimir las palabras más corta y más larga
    printf("La palabra mas corta es: %s\n", Pacorta);
    printf("La palabra mas larga es: %s\n", Palarga);

    return 0;
}
