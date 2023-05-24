/**
 * @file Ejercicio5.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char cadena [100];
    char *ptr;  // Declara un puntero a un caracter.
    int vocales = 0, consonantes = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, 100, stdin);

    ptr = cadena;  // Asigna la dirección del primer elemento de cadena al puntero.

    while (*ptr != '\0')  // Recorre toda la cadena.
    {
        if (isalpha(*ptr))  // Si el caracter es una letra...
        {
            // Convierte el caracter a minúscula para la comparación.
            char lower = tolower(*ptr);

            // Si el caracter es una vocal...
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            {
                vocales++;
            }
            else  // De lo contrario, el caracter es una consonante.
            {
                consonantes++;
            }
        }
        ptr++;  // Avanza al siguiente caracter.
    }

    printf("Total de vocales: %i\n", vocales);

    printf("Total de consonantes: %i\n", consonantes);

    return 0;
}
