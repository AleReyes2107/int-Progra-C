/**
 * @file par.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Indicar si un numero es par o impar
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>

int main (){
    //Declaramos la variable
    int n = 0;

    //Pedimos un numero al usuario
    printf("Introduzca un numero para saber si es par o impar: ");
    scanf("%i", &n);

    printf("El numero es %s", (n&1) == 0 ? "par" : "impar");

    return 0;
}