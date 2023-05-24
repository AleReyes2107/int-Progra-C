/**
 * @file Ejercicio8.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char c, *texto = NULL;
    int tamanio = 0;

    printf("Ingrese su texto (termina con '.'): ");

    // Ciclo infinito hasta que se rompa.
    while (1) {
        c = getch();  // Leer un caracter.

        // Muestra el caracter ingresado en la consola.
        putchar(c);

        // Realocación de memoria para alojar el nuevo caracter.
        texto = realloc(texto, (tamanio + 1) * sizeof(char));
        
        // En caso de que no haya suficiente memoria.
        if(texto == NULL){
            printf("Error! memoria no reservada.");
            exit(0);
        }

        if (c == '.') {
            *(texto+tamanio) = '\0';  // Termina la cadena.
            break;  // Si se introduce un punto, rompe el ciclo.
        }

        // Almacena el caracter en el arreglo.
        *(texto+tamanio) = c;
        tamanio++;  // Incrementa el contador de tamaño.
    }

    printf("\nEl texto ingresado es: %s\n", texto);

    // Libera la memoria asignada.
    free(texto);

    return 0;
}

