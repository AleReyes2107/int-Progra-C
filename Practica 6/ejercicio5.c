/**
 * @file ejercicio5.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Programa que clasifique un caracter dado por el  usuario
 * @version 0.1
 * @date 2023-04-30
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include <ctype.h>

int main(){
    char letra [2];

    printf("Introduzca solo un caracter cualquiera: ");
    fgets(letra, 2, stdin);

        if (isupper(letra[0])) //Mayuscula
        {
            printf("El caracter '%s' es una letra mayuscula", letra);
        }
        else if (islower(letra[0])) //Minuscula
        {
            printf("El caracter '%s' es una letra minuscula", letra);
        }
        else if (isdigit(letra[0])) //Numeros
        {
            printf("El caracter '%s' es un numero", letra);
        }
        else //Cualquier otro caracter
        {
            printf("El caracter '%s' es un caracter especial", letra);
        }

    return 0;
}