/**
 * @file ejercicio2.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-04-28
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char cadena[100];
    int tam = 0, palabras = 0, letras = 0, numeros = 0, Cesp = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, 100, stdin);

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (isspace(cadena[i])) //Cuenta espacios
        {
            palabras++;
        }
        else if (isalpha(cadena[i])) //Cuenta letras
        {
            letras++;
        }
        else if (isdigit(cadena[i])) //Cuenta numeros
        {
            numeros++;
        }
        else //Cuenta cualquier otro caracter
        {
            Cesp++;
        }
    }

    printf("Total de palabras: %i\n", palabras);

    printf("Total de letras: %i\n", letras);

    printf("Total de numeros: %i\n", numeros);

    printf("Total de caracteres especiales: %i\n", Cesp);

    return 0;
}